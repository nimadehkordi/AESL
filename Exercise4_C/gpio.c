// Copyright 2014: Sebastian Sester, Jan Burchard
// LCD example for the ARMADA board
// displays the current UTC time

#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <time.h>
#include <sys/time.h>

#include "gpio_common.h"


/*
List of GPIO pins on the ARMADA board
note: only pins 1, 3, 4, 8, 9 and 23 appear to be working

gpio 1:  fpga V14 , sm
gpio 3:  fpga U15 , sm
gpio 4:  fpga AD17, no sm
gpio 7:  fpga AC15, NOT WORKING!
gpio 8:  fpga AD15, sm
gpio 9:  fpga AC16, sm
gpio 10: fpga AF18, NOT WORKING!
gpio 11: fpga AC19, NOT WORKING!
gpio 23, fpga AD18, no sm
*/

#define rs  1
#define en  3
#define d3  4
#define d2  8
#define d1  9
#define d0  23


//lookup table for initialization commands and their respective hold time
int initial_lut [13][6] = {
  {0,0,0,0,0,20000}, // 0x00
  {0,0,0,1,1,10000}, // 0x03
  {0,0,0,1,1,100},
  {0,0,0,1,1,100},
  {0,0,0,1,0,100},
  {0,0,0,1,0,100},
  {0,1,1,0,0,100},
  {0,0,0,0,0,100},
  {0,1,1,0,0,100},
  {0,0,0,0,0,100},
  {0,0,0,0,1,10000},
  {0,0,0,0,0,100},
  {0,0,1,1,0,100}
};


int sFd;
FILE *spFile = NULL;


// helper to pause execution for the given amount of ms
void msleep (int ms) {
  while (ms--) {
    usleep(1000);
  }
}

/*
 * GPIO functions - you do not need to change anything here
 */


int gpio_open(galois_gpio_data_t gpio_data) {
  if (spFile == NULL) {
    spFile = fopen(GPIO_DEVICE, "rw+");
    if (!spFile) {
      printf("Failed to open GPIO_DEVICE.\n");
      return -1;
    }
  }
  sFd = fileno(spFile);

  // non-sm mode only for ports 4 and 23
  if (gpio_data.port == 4 || gpio_data.port == 23) {
    if (ioctl(sFd, GPIO_IOCTL_SET, &gpio_data)) {
      printf("ioctl GPIO_IOCTL_SET error.\n");
      fclose(spFile);
      return -1;
    }
  }
  else {
    if (ioctl(sFd, SM_GPIO_IOCTL_SET, &gpio_data)) {
      printf("ioctl SM_GPIO_IOCTL_SET error.\n");
      fclose(spFile);
      return -1;
    }
  }
  return 0;
}

int gpio_close() {
  if (spFile != NULL) {
    fclose(spFile);
    spFile = NULL;
  }
  return 0;
}

int gpio_write(galois_gpio_data_t gpio_data) {
  // non-sm mode only for ports 4 and 23
  if (gpio_data.port == 4 || gpio_data.port == 23) {
    if (ioctl(sFd, GPIO_IOCTL_WRITE, &gpio_data)) {
      printf("ioctl GPIO_IOCTL_WRITE error. port: %d, value: %d\n", gpio_data.port, gpio_data.data);
      return -1;
    }
  }
  else {
    if (ioctl(sFd, SM_GPIO_IOCTL_WRITE, &gpio_data)) {
      printf("ioctl SM_GPIO_IOCTL_WRITE error. port: %d, value: %d\n", gpio_data.port, gpio_data.data);
      return -1;
    }
  }
  return 0;
}

// sets the gpio port to the given value (0, 1)
int set_gpio(int port_no,int val) {
  int error = 0;
  galois_gpio_data_t gpio_data;
  gpio_data.port = port_no ;
  gpio_data.mode = 2;
  gpio_data.data = val;
  error |= gpio_open(gpio_data);
  error |= gpio_write(gpio_data);
  error |= gpio_close();
  return error;
}

void set_command_lcd(int command[]){
  int address [] ={rs, d3, d2, d1, d0};
  int i;
  for (i = 0; i < 5; i++) {
    /* code */
    set_gpio(address[i], command[i]);
  }
}

//initializes lcd 
void LcdInit() {
  int i;
  int j;
  int command [5] = {};
  for (i = 0; i < 13; i++) {
      for (j = 0; j < 5; j++){    /* code */
          command[j] = initial_lut[i][j];
      }
      set_gpio(en, 1);
      usleep(2);
      set_command_lcd(command);
      usleep(2);
      set_gpio(en, 0);
      usleep(initial_lut[i][5]);
      //printf("%d, \n", initial_lut[i][5]);
  }
}

//sets the curser to a given position on lcd
void LcdSetPos(int x, int y){
    int i;
    int command0 [5] = {0,0,0,0,0};
    int command1 [5] = {0,0,0,0,0};
    for(i = 0; i < 8; i++)
    {
        if(y == 1){
            if(i < 4) command1[4-i] = x+64+128 & (1 << i);
            else command0[8-i] = x+64+128 & (1 << i);
        } else{
            if(i < 4) command1[4-i] = x+128 & (1 << i);
            else command0[8-i] = x+128 & (1 << i);
        }

    }
    set_gpio(en, 1);
    usleep(2);
    set_command_lcd(command0);
    usleep(2);
    set_gpio(en, 0);
    usleep(100);
    set_gpio(en, 1);
    usleep(2);
    set_command_lcd(command1);
    usleep(2);
    set_gpio(en, 0);
    usleep(100);

}

//writes a single character to lcd
void LcdPutc(char c){
    int i;
    int command0 [5] = {1,0,0,0,0};
    int command1 [5] = {1,0,0,0,0};
    for(i = 0; i < 8; i++)
    {
        if(i < 4) command1[4-i] = c & (1 << i);
        else command0[8-i] = c & (1 << i);
    }
    set_gpio(en, 1);
    usleep(2);
    set_command_lcd(command0);
    usleep(2);
    set_gpio(en, 0);
    usleep(100);
    set_gpio(en, 1);
    usleep(2);
    set_command_lcd(command1);
    usleep(2);
    set_gpio(en, 0);
    usleep(100);
}

//writes a 5 digit integer to the lcd
void LcdPutui(unsigned int i){
    char str[5];
    sprintf(str, "%d", i);
    int j;
    for (j = 0; j < 5; ++j) {
        LcdSetPos(j,0);
        LcdPutc(str[j]);
    }
}

//writes the current time of the board to the lcd
void LcdPutTime(){

    while(1) {
        struct timeval tv;
        struct timezone tz;
        struct tm *tm;
        char str[8];
        gettimeofday(&tv, NULL);
        tm = localtime(&tv.tv_sec);
        //printf("%02d:%02d:%02d", tm->tm_hour, tm->tm_min, tm->tm_sec);
        sprintf(str, "%02d:%02d:%02d", tm->tm_hour, tm->tm_min,
                tm->tm_sec);
        int j;
        for (j = 0; j < 8; ++j) {
            LcdSetPos(j, 0);
            LcdPutc(str[j]);
        }
        msleep(100);
    }
}

int main(int argc, char * argv[]) {

  /* code */
    LcdInit(); //initialize and clear the lcd
    printf("\n init completed!"); //signal that initialization is completed
    //LcdPutui(12345);
    LcdPutTime(); //write the current time to lcd
  return 0;
}
