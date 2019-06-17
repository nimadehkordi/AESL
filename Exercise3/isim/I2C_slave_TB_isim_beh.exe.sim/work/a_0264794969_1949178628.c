/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/lhome/nriahid/Documents/AESL/Exercise3/I2C_slave_TB.vhd";
extern char *IEEE_P_3972351953;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *WORK_P_4054474977;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
void ieee_p_3972351953_sub_2806362175458368507_2984157535(char *, char *, char *, char *, char *);
void work_p_4054474977_sub_139404078134298855_1800819092(char *, char *, char *, char *);


static void work_a_0264794969_1949178628_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 7064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 6088U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)0);
    if (t5 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(82, ng0);

LAB17:    *((char **)t1) = &&LAB18;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 8736);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 6872);
    xsi_process_wait(t2, t11);

LAB9:    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB5:    goto LAB2;

LAB7:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 8736);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 6872);
    xsi_process_wait(t2, t11);

LAB13:    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

LAB11:    goto LAB5;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

LAB15:    goto LAB5;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

}

static void work_a_0264794969_1949178628_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    int64 t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(87, ng0);

LAB3:    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (t0 + 3568U);
    t7 = *((char **)t6);
    t8 = *((int64 *)t7);
    t9 = (t8 / 2);
    t6 = (t0 + 8800);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t6, 0U, 1, t9);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0264794969_1949178628_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    double t12;
    double t13;
    double t14;
    int t15;
    double t16;
    double t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    int64 t21;
    int64 t22;

LAB0:    t1 = (t0 + 7560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6088U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)0);
    if (t5 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(111, ng0);

LAB33:    *((char **)t1) = &&LAB34;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 7368);
    t6 = (t0 + 4648U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (t0 + 4768U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t10 = (t0 + 4888U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    ieee_p_3972351953_sub_2806362175458368507_2984157535(IEEE_P_3972351953, t2, t6, t8, t10);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4888U);
    t3 = *((char **)t2);
    t12 = *((double *)t3);
    t2 = (t0 + 5368U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((double *)t2) = t12;
    t7 = (t0 + 5312U);
    xsi_variable_act(t7);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 7368);
    t3 = (t0 + 4648U);
    t6 = *((char **)t3);
    t3 = (t6 + 0);
    t7 = (t0 + 4768U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t9 = (t0 + 4888U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    ieee_p_3972351953_sub_2806362175458368507_2984157535(IEEE_P_3972351953, t2, t3, t7, t9);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4888U);
    t3 = *((char **)t2);
    t12 = *((double *)t3);
    t2 = (t0 + 4288U);
    t6 = *((char **)t2);
    t13 = *((double *)t6);
    t14 = (t12 * t13);
    t4 = (t14 >= 0);
    if (t4 == 1)
        goto LAB7;

LAB8:    t17 = (t14 - 0.50000000000000000);
    t15 = ((int)(t17));

LAB9:    t2 = (t0 + 5128U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t15;
    t8 = (t0 + 5072U);
    xsi_variable_act(t8);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 7368);
    t3 = (t0 + 4648U);
    t6 = *((char **)t3);
    t3 = (t6 + 0);
    t7 = (t0 + 4768U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t9 = (t0 + 4888U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    ieee_p_3972351953_sub_2806362175458368507_2984157535(IEEE_P_3972351953, t2, t3, t7, t9);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4888U);
    t3 = *((char **)t2);
    t12 = *((double *)t3);
    t2 = (t0 + 4408U);
    t6 = *((char **)t2);
    t13 = *((double *)t6);
    t14 = (t12 * t13);
    t4 = (t14 >= 0);
    if (t4 == 1)
        goto LAB12;

LAB13:    t17 = (t14 - 0.50000000000000000);
    t15 = ((int)(t17));

LAB14:    t2 = (t0 + 5248U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t15;
    t8 = (t0 + 5192U);
    xsi_variable_act(t8);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5848U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t21 = (1 * 1LL);
    t22 = (t15 * t21);
    t2 = (t0 + 7368);
    xsi_process_wait(t2, t22);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB5:    goto LAB2;

LAB7:    t5 = (t14 >= 2147483647);
    if (t5 == 1)
        goto LAB10;

LAB11:    t16 = (t14 + 0.50000000000000000);
    t15 = ((int)(t16));
    goto LAB9;

LAB10:    t15 = 2147483647;
    goto LAB9;

LAB12:    t5 = (t14 >= 2147483647);
    if (t5 == 1)
        goto LAB15;

LAB16:    t16 = (t14 + 0.50000000000000000);
    t15 = ((int)(t16));
    goto LAB14;

LAB15:    t15 = 2147483647;
    goto LAB14;

LAB17:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5368U);
    t6 = *((char **)t2);
    t12 = *((double *)t6);
    t2 = (t0 + 4528U);
    t7 = *((char **)t2);
    t13 = *((double *)t7);
    t5 = (t12 < t13);
    if (t5 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 8864);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1352U);
    t8 = *((char **)t2);
    t18 = *((unsigned char *)t8);
    t19 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t18);
    t2 = (t0 + 8864);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t20 = *((char **)t11);
    *((unsigned char *)t20) = t19;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

LAB23:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 8864);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5248U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t21 = (1 * 1LL);
    t22 = (t15 * t21);
    t2 = (t0 + 7368);
    xsi_process_wait(t2, t22);

LAB29:    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

LAB27:    goto LAB5;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

LAB31:    goto LAB5;

LAB32:    goto LAB31;

LAB34:    goto LAB32;

}

static void work_a_0264794969_1949178628_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    double t12;
    double t13;
    double t14;
    int t15;
    double t16;
    double t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    int64 t28;
    int64 t29;

LAB0:    t1 = (t0 + 7808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 6088U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)0);
    if (t5 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(139, ng0);

LAB39:    *((char **)t1) = &&LAB40;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 7616);
    t6 = (t0 + 4648U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (t0 + 4768U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t10 = (t0 + 5008U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    ieee_p_3972351953_sub_2806362175458368507_2984157535(IEEE_P_3972351953, t2, t6, t8, t10);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t12 = *((double *)t3);
    t2 = (t0 + 5728U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((double *)t2) = t12;
    t7 = (t0 + 5672U);
    xsi_variable_act(t7);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 7616);
    t3 = (t0 + 4648U);
    t6 = *((char **)t3);
    t3 = (t6 + 0);
    t7 = (t0 + 4768U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t9 = (t0 + 5008U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    ieee_p_3972351953_sub_2806362175458368507_2984157535(IEEE_P_3972351953, t2, t3, t7, t9);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t12 = *((double *)t3);
    t2 = (t0 + 4288U);
    t6 = *((char **)t2);
    t13 = *((double *)t6);
    t14 = (t12 * t13);
    t4 = (t14 >= 0);
    if (t4 == 1)
        goto LAB7;

LAB8:    t17 = (t14 - 0.50000000000000000);
    t15 = ((int)(t17));

LAB9:    t2 = (t0 + 5488U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t15;
    t8 = (t0 + 5432U);
    xsi_variable_act(t8);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 7616);
    t3 = (t0 + 4648U);
    t6 = *((char **)t3);
    t3 = (t6 + 0);
    t7 = (t0 + 4768U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t9 = (t0 + 5008U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    ieee_p_3972351953_sub_2806362175458368507_2984157535(IEEE_P_3972351953, t2, t3, t7, t9);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t12 = *((double *)t3);
    t2 = (t0 + 4408U);
    t6 = *((char **)t2);
    t13 = *((double *)t6);
    t14 = (t12 * t13);
    t4 = (t14 >= 0);
    if (t4 == 1)
        goto LAB12;

LAB13:    t17 = (t14 - 0.50000000000000000);
    t15 = ((int)(t17));

LAB14:    t2 = (t0 + 5608U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t15;
    t8 = (t0 + 5552U);
    xsi_variable_act(t8);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5968U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5488U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t28 = (1 * 1LL);
    t29 = (t15 * t28);
    t2 = (t0 + 7616);
    xsi_process_wait(t2, t29);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB5:    goto LAB2;

LAB7:    t5 = (t14 >= 2147483647);
    if (t5 == 1)
        goto LAB10;

LAB11:    t16 = (t14 + 0.50000000000000000);
    t15 = ((int)(t16));
    goto LAB9;

LAB10:    t15 = 2147483647;
    goto LAB9;

LAB12:    t5 = (t14 >= 2147483647);
    if (t5 == 1)
        goto LAB15;

LAB16:    t16 = (t14 + 0.50000000000000000);
    t15 = ((int)(t16));
    goto LAB14;

LAB15:    t15 = 2147483647;
    goto LAB14;

LAB17:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 5728U);
    t6 = *((char **)t2);
    t12 = *((double *)t6);
    t2 = (t0 + 4528U);
    t7 = *((char **)t2);
    t13 = *((double *)t7);
    t5 = (t12 < t13);
    if (t5 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 8928);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1512U);
    t8 = *((char **)t2);
    t19 = *((unsigned char *)t8);
    t20 = (t19 == (unsigned char)3);
    if (t20 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1512U);
    t9 = *((char **)t2);
    t21 = *((unsigned char *)t9);
    t22 = (t21 == (unsigned char)2);
    t18 = t22;

LAB28:    if (t18 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1512U);
    t10 = *((char **)t2);
    t23 = *((unsigned char *)t10);
    t24 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t23);
    t2 = (t0 + 8928);
    t11 = (t2 + 56U);
    t25 = *((char **)t11);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = t24;
    xsi_driver_first_trans_fast(t2);
    goto LAB24;

LAB26:    t18 = (unsigned char)1;
    goto LAB28;

LAB29:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 8928);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 5608U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t28 = (1 * 1LL);
    t29 = (t15 * t28);
    t2 = (t0 + 7616);
    xsi_process_wait(t2, t29);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB33:    goto LAB5;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB37:    goto LAB5;

LAB38:    goto LAB37;

LAB40:    goto LAB38;

}

static void work_a_0264794969_1949178628_p_4(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 1632U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8624);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(149, ng0);
    t3 = (t0 + 2792U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 2952U);
    t7 = *((char **)t3);
    t3 = (t0 + 8992);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 8U);
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

void work_a_0264794969_1949178628_sub_2884837013734620179_1099654824(char *t0, char *t1)
{
    char *t4;
    char *t5;
    int t6;
    int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;

LAB0:    t4 = (t0 + 4048U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = 0;
    t8 = t6;

LAB2:    if (t7 <= t8)
        goto LAB3;

LAB5:
LAB1:    return;
LAB3:    t4 = (t0 + 1632U);
    xsi_add_dynamic_wait(t1, t4, -1, -1);

LAB9:    t9 = (t1 + 224U);
    t9 = *((char **)t9);
    xsi_wp_set_status(t9, 1);
    t10 = (t1 + 88U);
    t11 = *((char **)t10);
    t12 = (t11 + 1888U);
    *((unsigned int *)t12) = 1U;
    t13 = (t1 + 88U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    getcontext(t15);
    t16 = (t1 + 88U);
    t17 = *((char **)t16);
    t18 = (t17 + 1888U);
    t19 = *((unsigned int *)t18);
    if (t19 == 1)
        goto LAB10;

LAB11:    t20 = (t1 + 88U);
    t21 = *((char **)t20);
    t22 = (t21 + 1888U);
    *((unsigned int *)t22) = 3U;

LAB7:
LAB8:    t23 = (t0 + 1632U);
    t24 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t23, 0U, 0U);
    if (t24 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB4:    if (t7 == t8)
        goto LAB5;

LAB12:    t6 = (t7 + 1);
    t7 = t6;
    goto LAB2;

LAB6:    xsi_remove_dynamic_wait(t1, t4);
    goto LAB4;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

}

void work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(char *t0, char *t1)
{
    char *t4;
    char *t5;
    int t6;
    int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;

LAB0:    t4 = (t0 + 4168U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = 0;
    t8 = t6;

LAB2:    if (t7 <= t8)
        goto LAB3;

LAB5:
LAB1:    return;
LAB3:    t4 = (t0 + 1632U);
    xsi_add_dynamic_wait(t1, t4, -1, -1);

LAB9:    t9 = (t1 + 224U);
    t9 = *((char **)t9);
    xsi_wp_set_status(t9, 1);
    t10 = (t1 + 88U);
    t11 = *((char **)t10);
    t12 = (t11 + 1888U);
    *((unsigned int *)t12) = 1U;
    t13 = (t1 + 88U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    getcontext(t15);
    t16 = (t1 + 88U);
    t17 = *((char **)t16);
    t18 = (t17 + 1888U);
    t19 = *((unsigned int *)t18);
    if (t19 == 1)
        goto LAB10;

LAB11:    t20 = (t1 + 88U);
    t21 = *((char **)t20);
    t22 = (t21 + 1888U);
    *((unsigned int *)t22) = 3U;

LAB7:
LAB8:    t23 = (t0 + 1632U);
    t24 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t23, 0U, 0U);
    if (t24 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB4:    if (t7 == t8)
        goto LAB5;

LAB12:    t6 = (t7 + 1);
    t7 = t6;
    goto LAB2;

LAB6:    xsi_remove_dynamic_wait(t1, t4);
    goto LAB4;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

}

void work_a_0264794969_1949178628_sub_8074788807731879719_1099654824(char *t0, char *t1, unsigned char t2)
{
    char t4[8];
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t6 = (t0 + 9056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    t6 = (t0 + 9120);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast(t6);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t6 = (t0 + 9056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    work_a_0264794969_1949178628_sub_2884837013734620179_1099654824(t0, t1);
    t6 = (t0 + 9056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);

LAB1:    return;
}

void work_a_0264794969_1949178628_sub_8654420119729047285_1099654824(char *t0, char *t1, char *t2)
{
    char t4[16];
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;

LAB0:    t5 = (t4 + 4U);
    *((char **)t5) = t2;
    t6 = (t0 + 9056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    t6 = (t0 + 9120);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)4;
    xsi_driver_first_trans_fast(t6);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t6 = (t0 + 9056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t11 = *((unsigned char *)t7);
    t6 = (t2 + 0);
    *((unsigned char *)t6) = t11;
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t6 = (t0 + 9056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);

LAB1:    return;
}

void work_a_0264794969_1949178628_sub_16310037970342244468_1099654824(char *t0, char *t1, char *t2)
{
    char t4[24];
    char t5[16];
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    int t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    int t17;
    int t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned char t24;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 7;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t8 = (0 - 7);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t4 + 4U);
    t10 = (t2 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t4 + 12U);
    *((char **)t11) = t5;
    t12 = 7;
    t13 = 0;

LAB4:    if (t12 >= t13)
        goto LAB5;

LAB7:
LAB1:    return;
LAB3:    *((char **)t7) = t2;
    goto LAB2;

LAB5:    t14 = (t5 + 0U);
    t15 = *((int *)t14);
    t16 = (t5 + 8U);
    t17 = *((int *)t16);
    t18 = (t12 - t15);
    t9 = (t18 * t17);
    t19 = (t5 + 4U);
    t20 = *((int *)t19);
    xsi_vhdl_check_range_of_index(t15, t20, t17, t12);
    t21 = (1U * t9);
    t22 = (0 + t21);
    t23 = (t2 + t22);
    t24 = *((unsigned char *)t23);
    work_a_0264794969_1949178628_sub_8074788807731879719_1099654824(t0, t1, t24);

LAB6:    if (t12 == t13)
        goto LAB7;

LAB8:    t8 = (t12 + -1);
    t12 = t8;
    goto LAB4;

}

void work_a_0264794969_1949178628_sub_17134350313124719543_1099654824(char *t0, char *t1, char *t2)
{
    char t4[24];
    char t5[16];
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    int t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    int t17;
    int t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned char t24;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 6;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t8 = (0 - 6);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t4 + 4U);
    t10 = (t2 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t4 + 12U);
    *((char **)t11) = t5;
    t12 = 6;
    t13 = 0;

LAB4:    if (t12 >= t13)
        goto LAB5;

LAB7:
LAB1:    return;
LAB3:    *((char **)t7) = t2;
    goto LAB2;

LAB5:    t14 = (t5 + 0U);
    t15 = *((int *)t14);
    t16 = (t5 + 8U);
    t17 = *((int *)t16);
    t18 = (t12 - t15);
    t9 = (t18 * t17);
    t19 = (t5 + 4U);
    t20 = *((int *)t19);
    xsi_vhdl_check_range_of_index(t15, t20, t17, t12);
    t21 = (1U * t9);
    t22 = (0 + t21);
    t23 = (t2 + t22);
    t24 = *((unsigned char *)t23);
    work_a_0264794969_1949178628_sub_8074788807731879719_1099654824(t0, t1, t24);

LAB6:    if (t12 == t13)
        goto LAB7;

LAB8:    t8 = (t12 + -1);
    t12 = t8;
    goto LAB4;

}

void work_a_0264794969_1949178628_sub_963677805374603289_1099654824(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5)
{
    char t6[248];
    char t8[16];
    char t15[8];
    char t20[16];
    char t26[8];
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    char *t32;
    char *t33;
    unsigned char t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;

LAB0:    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 7;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 7);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t6 + 4U);
    t13 = ((IEEE_P_2592010699) + 3312);
    t14 = (t10 + 88U);
    *((char **)t14) = t13;
    t16 = (t10 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t10 + 80U);
    *((unsigned int *)t17) = 1U;
    t18 = xsi_get_transient_memory(8U);
    memset(t18, 0, 8U);
    t19 = t18;
    memset(t19, (unsigned char)2, 8U);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 7;
    t22 = (t21 + 4U);
    *((int *)t22) = 0;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 7);
    t12 = (t23 * -1);
    t12 = (t12 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t12;
    t22 = (t6 + 124U);
    t24 = ((IEEE_P_2592010699) + 4000);
    t25 = (t22 + 88U);
    *((char **)t25) = t24;
    t27 = (t22 + 56U);
    *((char **)t27) = t26;
    memcpy(t26, t18, 8U);
    t28 = (t22 + 64U);
    *((char **)t28) = t20;
    t29 = (t22 + 80U);
    *((unsigned int *)t29) = 8U;
    t30 = 7;
    t31 = 0;

LAB2:    if (t30 >= t31)
        goto LAB3;

LAB5:    t9 = (t22 + 56U);
    t13 = *((char **)t9);
    t12 = (0 + t3);
    t9 = (t5 + 56U);
    t14 = *((char **)t9);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t8 + 12U);
    t37 = *((unsigned int *)t18);
    t37 = (t37 * 1U);
    memcpy(t17, t13, t37);
    t19 = (t8 + 12U);
    t38 = *((unsigned int *)t19);
    t39 = (1U * t38);
    xsi_driver_first_trans_delta(t5, t12, t39, 0LL);

LAB1:    return;
LAB3:    t32 = (t10 + 56U);
    t33 = *((char **)t32);
    t32 = (t33 + 0);
    work_a_0264794969_1949178628_sub_8654420119729047285_1099654824(t0, t1, t32);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t34 = *((unsigned char *)t13);
    t9 = (t22 + 56U);
    t14 = *((char **)t9);
    t9 = (t20 + 0U);
    t11 = *((int *)t9);
    t16 = (t20 + 8U);
    t23 = *((int *)t16);
    t35 = (t30 - t11);
    t12 = (t35 * t23);
    t17 = (t20 + 4U);
    t36 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t11, t36, t23, t30);
    t37 = (1U * t12);
    t38 = (0 + t37);
    t18 = (t14 + t38);
    *((unsigned char *)t18) = t34;

LAB4:    if (t30 == t31)
        goto LAB5;

LAB6:    t11 = (t30 + -1);
    t30 = t11;
    goto LAB2;

}

void work_a_0264794969_1949178628_sub_13875944873271731719_1099654824(char *t0, char *t1)
{
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t4 = (t0 + 9056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    t4 = (t0 + 9120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_2884837013734620179_1099654824(t0, t1);
    t4 = (t0 + 9056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t4 = (t0 + 9056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);

LAB1:    return;
}

void work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(char *t0, char *t1)
{
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t4 = (t0 + 9056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    t4 = (t0 + 9120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t4 = (t0 + 9056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t4 = (t0 + 9120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_2884837013734620179_1099654824(t0, t1);
    work_a_0264794969_1949178628_sub_2884837013734620179_1099654824(t0, t1);

LAB1:    return;
}

void work_a_0264794969_1949178628_sub_16083963538467743727_1099654824(char *t0, char *t1)
{

LAB0:    work_a_0264794969_1949178628_sub_8074788807731879719_1099654824(t0, t1, (unsigned char)2);

LAB1:    return;
}

void work_a_0264794969_1949178628_sub_7195306510337657632_1099654824(char *t0, char *t1)
{

LAB0:    work_a_0264794969_1949178628_sub_8074788807731879719_1099654824(t0, t1, (unsigned char)3);

LAB1:    return;
}

void work_a_0264794969_1949178628_sub_8291992696423367019_1099654824(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5)
{
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned int t15;

LAB0:    t8 = (t0 + 9056);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    t8 = (t0 + 9120);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)4;
    xsi_driver_first_trans_fast(t8);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t8 = (t0 + 9056);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t13 = *((unsigned char *)t9);
    t14 = (t13 == (unsigned char)2);
    if (t14 != 0)
        goto LAB2;

LAB4:    t15 = (0 + t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_delta(t5, t15, 1, 0LL);
    if ((unsigned char)0 == 0)
        goto LAB5;

LAB6:
LAB3:    work_a_0264794969_1949178628_sub_2884837013734620179_1099654824(t0, t1);
    t8 = (t0 + 9056);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);

LAB1:    return;
LAB2:    t15 = (0 + t3);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_delta(t5, t15, 1, 0LL);
    goto LAB3;

LAB5:    t8 = (t0 + 14427);
    xsi_report(t8, 29U, (unsigned char)0);
    goto LAB6;

}

void work_a_0264794969_1949178628_sub_14483337450050717504_1099654824(char *t0, char *t1)
{
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t4 = (t0 + 9056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    t4 = (t0 + 9120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t4 = (t0 + 9056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_2884837013734620179_1099654824(t0, t1);
    t4 = (t0 + 9056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);

LAB1:    return;
}

void work_a_0264794969_1949178628_sub_16090678604198441106_1099654824(char *t0, char *t1)
{
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t4 = (t0 + 9056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    t4 = (t0 + 9120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t4 = (t0 + 9056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_2884837013734620179_1099654824(t0, t1);
    t4 = (t0 + 9056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);

LAB1:    return;
}

void work_a_0264794969_1949178628_sub_18164678374491250930_1099654824(char *t0, char *t1, char *t2, char *t3)
{
    char t5[40];
    char t6[16];
    char t11[16];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 6;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 6);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 7;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 7);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t5 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t5 + 12U);
    *((char **)t15) = t6;
    t16 = (t5 + 20U);
    t17 = (t3 != 0);
    if (t17 == 1)
        goto LAB5;

LAB4:    t18 = (t5 + 28U);
    *((char **)t18) = t11;
    t19 = (t0 + 9184);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 0;
    xsi_driver_first_trans_fast(t19);
    work_a_0264794969_1949178628_sub_13875944873271731719_1099654824(t0, t1);
    t7 = (t0 + 9184);
    t8 = (t7 + 56U);
    t19 = *((char **)t8);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((int *)t21) = 1;
    xsi_driver_first_trans_fast(t7);
    t7 = (t6 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t8 = (char *)alloca(t10);
    memcpy(t8, t2, t10);
    work_a_0264794969_1949178628_sub_17134350313124719543_1099654824(t0, t1, t8);
    t7 = (t0 + 9184);
    t19 = (t7 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 2;
    xsi_driver_first_trans_fast(t7);
    work_a_0264794969_1949178628_sub_16083963538467743727_1099654824(t0, t1);
    t7 = (t0 + 9184);
    t19 = (t7 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 3;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 2272U);
    t19 = (t0 + 9248);
    work_a_0264794969_1949178628_sub_8291992696423367019_1099654824(t0, t1, t7, 0U, 0U, t19);
    t7 = (t0 + 2312U);
    t19 = *((char **)t7);
    t14 = *((unsigned char *)t19);
    t17 = (t14 == (unsigned char)2);
    if (t17 != 0)
        goto LAB6;

LAB8:
LAB7:    t7 = (t0 + 9184);
    t19 = (t7 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 4;
    xsi_driver_first_trans_fast(t7);
    t7 = (t11 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t19 = (char *)alloca(t10);
    memcpy(t19, t3, t10);
    work_a_0264794969_1949178628_sub_16310037970342244468_1099654824(t0, t1, t19);
    t7 = (t0 + 9184);
    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 5;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 2272U);
    t20 = (t0 + 9248);
    work_a_0264794969_1949178628_sub_8291992696423367019_1099654824(t0, t1, t7, 0U, 0U, t20);
    t7 = (t0 + 9184);
    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 6;
    xsi_driver_first_trans_fast(t7);
    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t1);

LAB1:    return;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t16) = t3;
    goto LAB4;

LAB6:    t7 = (t0 + 9184);
    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 6;
    xsi_driver_first_trans_fast(t7);
    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t1);
    t7 = (t0 + 9248);
    t19 = (t7 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB1;

LAB9:    goto LAB7;

}

void work_a_0264794969_1949178628_sub_11213553765256860686_1099654824(char *t0, char *t1, char *t2, char *t3)
{
    char t5[40];
    char t6[16];
    char t11[16];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 6;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 6);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 7;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 7);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t5 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t5 + 12U);
    *((char **)t15) = t6;
    t16 = (t5 + 20U);
    t17 = (t3 != 0);
    if (t17 == 1)
        goto LAB5;

LAB4:    t18 = (t5 + 28U);
    *((char **)t18) = t11;
    t19 = (t0 + 9184);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 0;
    xsi_driver_first_trans_fast(t19);
    work_a_0264794969_1949178628_sub_13875944873271731719_1099654824(t0, t1);
    t7 = (t0 + 9184);
    t8 = (t7 + 56U);
    t19 = *((char **)t8);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((int *)t21) = 1;
    xsi_driver_first_trans_fast(t7);
    t7 = (t6 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t8 = (char *)alloca(t10);
    memcpy(t8, t2, t10);
    work_a_0264794969_1949178628_sub_17134350313124719543_1099654824(t0, t1, t8);
    t7 = (t0 + 9184);
    t19 = (t7 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 2;
    xsi_driver_first_trans_fast(t7);
    work_a_0264794969_1949178628_sub_16083963538467743727_1099654824(t0, t1);
    t7 = (t0 + 9184);
    t19 = (t7 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 3;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 2272U);
    t19 = (t0 + 9248);
    work_a_0264794969_1949178628_sub_8291992696423367019_1099654824(t0, t1, t7, 0U, 0U, t19);
    t7 = (t0 + 2312U);
    t19 = *((char **)t7);
    t14 = *((unsigned char *)t19);
    t17 = (t14 == (unsigned char)2);
    if (t17 != 0)
        goto LAB6;

LAB8:
LAB7:    t7 = (t0 + 9184);
    t19 = (t7 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 4;
    xsi_driver_first_trans_fast(t7);
    t7 = (t11 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t19 = (char *)alloca(t10);
    memcpy(t19, t3, t10);
    work_a_0264794969_1949178628_sub_16310037970342244468_1099654824(t0, t1, t19);
    t7 = (t0 + 9184);
    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 5;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 2272U);
    t20 = (t0 + 9248);
    work_a_0264794969_1949178628_sub_8291992696423367019_1099654824(t0, t1, t7, 0U, 0U, t20);
    t7 = (t0 + 9056);
    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 9120);
    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t7 = (t0 + 9056);
    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 9120);
    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);

LAB1:    return;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t16) = t3;
    goto LAB4;

LAB6:    t7 = (t0 + 9184);
    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 6;
    xsi_driver_first_trans_fast(t7);
    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t1);
    t7 = (t0 + 9248);
    t19 = (t7 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB1;

LAB9:    goto LAB7;

}

void work_a_0264794969_1949178628_sub_1221919628536496706_1099654824(char *t0, char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[24];
    char t6[16];
    char t12[16];
    char t18[8];
    char t33[16];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    int t32;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 6;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 6);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = xsi_get_transient_memory(8U);
    memset(t8, 0, 8U);
    t11 = t8;
    memset(t11, (unsigned char)2, 8U);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 7;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - 7);
    t10 = (t15 * -1);
    t10 = (t10 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t10;
    t14 = (t4 + 4U);
    t16 = ((IEEE_P_2592010699) + 4000);
    t17 = (t14 + 88U);
    *((char **)t17) = t16;
    t19 = (t14 + 56U);
    *((char **)t19) = t18;
    memcpy(t18, t8, 8U);
    t20 = (t14 + 64U);
    *((char **)t20) = t12;
    t21 = (t14 + 80U);
    *((unsigned int *)t21) = 8U;
    t22 = (t5 + 4U);
    t23 = (t2 != 0);
    if (t23 == 1)
        goto LAB3;

LAB2:    t24 = (t5 + 12U);
    *((char **)t24) = t6;
    t25 = (t5 + 20U);
    *((int *)t25) = t3;
    t26 = (t0 + 9184);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((int *)t30) = 0;
    xsi_driver_first_trans_fast(t26);
    work_a_0264794969_1949178628_sub_13875944873271731719_1099654824(t0, t1);
    t7 = (t0 + 9184);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t16 = *((char **)t13);
    *((int *)t16) = 1;
    xsi_driver_first_trans_fast(t7);
    t7 = (t6 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t8 = (char *)alloca(t10);
    memcpy(t8, t2, t10);
    work_a_0264794969_1949178628_sub_17134350313124719543_1099654824(t0, t1, t8);
    t7 = (t0 + 9184);
    t11 = (t7 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 2;
    xsi_driver_first_trans_fast(t7);
    work_a_0264794969_1949178628_sub_16083963538467743727_1099654824(t0, t1);
    t7 = (t0 + 9184);
    t11 = (t7 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 3;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 2272U);
    t11 = (t0 + 9248);
    work_a_0264794969_1949178628_sub_8291992696423367019_1099654824(t0, t1, t7, 0U, 0U, t11);
    t7 = (t0 + 2312U);
    t11 = *((char **)t7);
    t23 = *((unsigned char *)t11);
    t31 = (t23 == (unsigned char)2);
    if (t31 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t0 + 9248);
    t11 = (t7 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    t9 = (t3 - 1);
    t15 = 0;
    t32 = t9;

LAB8:    if (t15 <= t32)
        goto LAB9;

LAB11:    t7 = (t0 + 9184);
    t11 = (t7 + 56U);
    t16 = *((char **)t11);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    *((int *)t19) = 6;
    xsi_driver_first_trans_fast(t7);
    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t1);

LAB1:    return;
LAB3:    *((char **)t22) = t2;
    goto LAB2;

LAB4:    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t1);
    goto LAB1;

LAB7:    goto LAB5;

LAB9:    t7 = (t0 + 9184);
    t11 = (t7 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 4;
    xsi_driver_first_trans_fast(t7);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t33, t15, 8);
    t11 = (t33 + 12U);
    t10 = *((unsigned int *)t11);
    t10 = (t10 * 1U);
    t13 = (char *)alloca(t10);
    memcpy(t13, t7, t10);
    work_a_0264794969_1949178628_sub_16310037970342244468_1099654824(t0, t1, t13);
    t7 = (t0 + 9184);
    t11 = (t7 + 56U);
    t16 = *((char **)t11);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    *((int *)t19) = 5;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 2272U);
    t11 = (t0 + 9248);
    work_a_0264794969_1949178628_sub_8291992696423367019_1099654824(t0, t1, t7, 0U, 0U, t11);
    t7 = (t0 + 2312U);
    t11 = *((char **)t7);
    t23 = *((unsigned char *)t11);
    t31 = (t23 == (unsigned char)2);
    if (t31 != 0)
        goto LAB12;

LAB14:
LAB13:    t7 = (t0 + 9248);
    t11 = (t7 + 56U);
    t16 = *((char **)t11);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);

LAB10:    if (t15 == t32)
        goto LAB11;

LAB16:    t9 = (t15 + 1);
    t15 = t9;
    goto LAB8;

LAB12:    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t1);
    goto LAB1;

LAB15:    goto LAB13;

}

void work_a_0264794969_1949178628_sub_12535114839410182041_1099654824(char *t0, char *t1, char *t2, char *t3, unsigned int t4, unsigned int t5, char *t6)
{
    char t8[24];
    char t9[16];
    char t14[16];
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t15;
    int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned int t25;

LAB0:    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 6;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 6);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t14 + 0U);
    t15 = (t11 + 0U);
    *((int *)t15) = 7;
    t15 = (t11 + 4U);
    *((int *)t15) = 0;
    t15 = (t11 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - 7);
    t13 = (t16 * -1);
    t13 = (t13 + 1);
    t15 = (t11 + 12U);
    *((unsigned int *)t15) = t13;
    t15 = (t8 + 4U);
    t17 = (t2 != 0);
    if (t17 == 1)
        goto LAB3;

LAB2:    t18 = (t8 + 12U);
    *((char **)t18) = t9;
    t19 = (t0 + 9184);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 0;
    xsi_driver_first_trans_fast(t19);
    work_a_0264794969_1949178628_sub_13875944873271731719_1099654824(t0, t1);
    t10 = (t0 + 9184);
    t11 = (t10 + 56U);
    t19 = *((char **)t11);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((int *)t21) = 1;
    xsi_driver_first_trans_fast(t10);
    t10 = (t9 + 12U);
    t13 = *((unsigned int *)t10);
    t13 = (t13 * 1U);
    t11 = (char *)alloca(t13);
    memcpy(t11, t2, t13);
    work_a_0264794969_1949178628_sub_17134350313124719543_1099654824(t0, t1, t11);
    t10 = (t0 + 9184);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 2;
    xsi_driver_first_trans_fast(t10);
    work_a_0264794969_1949178628_sub_7195306510337657632_1099654824(t0, t1);
    t10 = (t0 + 9184);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 3;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 2272U);
    t19 = (t0 + 9248);
    work_a_0264794969_1949178628_sub_8291992696423367019_1099654824(t0, t1, t10, 0U, 0U, t19);
    t10 = (t0 + 2312U);
    t19 = *((char **)t10);
    t17 = *((unsigned char *)t19);
    t24 = (t17 == (unsigned char)2);
    if (t24 != 0)
        goto LAB4;

LAB6:
LAB5:    t10 = (t0 + 9248);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 9184);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 4;
    xsi_driver_first_trans_fast(t10);
    t13 = (0U + t4);
    t25 = (0U + t5);
    work_a_0264794969_1949178628_sub_963677805374603289_1099654824(t0, t1, t3, t13, t25, t6);
    t10 = (t0 + 9184);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 5;
    xsi_driver_first_trans_fast(t10);
    work_a_0264794969_1949178628_sub_14483337450050717504_1099654824(t0, t1);
    t10 = (t0 + 9184);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 6;
    xsi_driver_first_trans_fast(t10);
    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t1);

LAB1:    return;
LAB3:    *((char **)t15) = t2;
    goto LAB2;

LAB4:    t10 = (t0 + 9184);
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 6;
    xsi_driver_first_trans_fast(t10);
    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t1);
    goto LAB1;

LAB7:    goto LAB5;

}

void work_a_0264794969_1949178628_sub_26645317263378229_1099654824(char *t0, char *t1, char *t2, char *t3, unsigned int t4, unsigned int t5, char *t6)
{
    char t8[24];
    char t9[16];
    char t14[16];
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t15;
    int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned int t25;

LAB0:    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 6;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 6);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t14 + 0U);
    t15 = (t11 + 0U);
    *((int *)t15) = 7;
    t15 = (t11 + 4U);
    *((int *)t15) = 0;
    t15 = (t11 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - 7);
    t13 = (t16 * -1);
    t13 = (t13 + 1);
    t15 = (t11 + 12U);
    *((unsigned int *)t15) = t13;
    t15 = (t8 + 4U);
    t17 = (t2 != 0);
    if (t17 == 1)
        goto LAB3;

LAB2:    t18 = (t8 + 12U);
    *((char **)t18) = t9;
    t19 = (t0 + 9184);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 0;
    xsi_driver_first_trans_fast(t19);
    work_a_0264794969_1949178628_sub_13875944873271731719_1099654824(t0, t1);
    t10 = (t0 + 9184);
    t11 = (t10 + 56U);
    t19 = *((char **)t11);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((int *)t21) = 1;
    xsi_driver_first_trans_fast(t10);
    t10 = (t9 + 12U);
    t13 = *((unsigned int *)t10);
    t13 = (t13 * 1U);
    t11 = (char *)alloca(t13);
    memcpy(t11, t2, t13);
    work_a_0264794969_1949178628_sub_17134350313124719543_1099654824(t0, t1, t11);
    t10 = (t0 + 9184);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 2;
    xsi_driver_first_trans_fast(t10);
    work_a_0264794969_1949178628_sub_7195306510337657632_1099654824(t0, t1);
    t10 = (t0 + 9184);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 3;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 2272U);
    t19 = (t0 + 9248);
    work_a_0264794969_1949178628_sub_8291992696423367019_1099654824(t0, t1, t10, 0U, 0U, t19);
    t10 = (t0 + 2312U);
    t19 = *((char **)t10);
    t17 = *((unsigned char *)t19);
    t24 = (t17 == (unsigned char)2);
    if (t24 != 0)
        goto LAB4;

LAB6:
LAB5:    t10 = (t0 + 9248);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 9184);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 4;
    xsi_driver_first_trans_fast(t10);
    t13 = (0U + t4);
    t25 = (0U + t5);
    work_a_0264794969_1949178628_sub_963677805374603289_1099654824(t0, t1, t3, t13, t25, t6);
    t10 = (t0 + 9184);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = 5;
    xsi_driver_first_trans_fast(t10);
    work_a_0264794969_1949178628_sub_14483337450050717504_1099654824(t0, t1);
    t10 = (t0 + 9056);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 9120);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);
    t10 = (t0 + 9056);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 9120);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    work_a_0264794969_1949178628_sub_17794079598382357692_1099654824(t0, t1);

LAB1:    return;
LAB3:    *((char **)t15) = t2;
    goto LAB2;

LAB4:    t10 = (t0 + 9184);
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 6;
    xsi_driver_first_trans_fast(t10);
    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t1);
    goto LAB1;

LAB7:    goto LAB5;

}

void work_a_0264794969_1949178628_sub_17238045045564128706_1099654824(char *t0, char *t1, char *t2, int t3, char *t4, unsigned int t5, unsigned int t6, char *t7)
{
    char t9[24];
    char t10[16];
    char t15[16];
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t16;
    int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    int t27;
    unsigned int t28;

LAB0:    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 6;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 6);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t15 + 0U);
    t16 = (t12 + 0U);
    *((int *)t16) = 7;
    t16 = (t12 + 4U);
    *((int *)t16) = 0;
    t16 = (t12 + 8U);
    *((int *)t16) = -1;
    t17 = (0 - 7);
    t14 = (t17 * -1);
    t14 = (t14 + 1);
    t16 = (t12 + 12U);
    *((unsigned int *)t16) = t14;
    t16 = (t9 + 4U);
    t18 = (t2 != 0);
    if (t18 == 1)
        goto LAB3;

LAB2:    t19 = (t9 + 12U);
    *((char **)t19) = t10;
    t20 = (t9 + 20U);
    *((int *)t20) = t3;
    t21 = (t0 + 9184);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((int *)t25) = 0;
    xsi_driver_first_trans_fast(t21);
    work_a_0264794969_1949178628_sub_13875944873271731719_1099654824(t0, t1);
    t11 = (t0 + 9184);
    t12 = (t11 + 56U);
    t21 = *((char **)t12);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = 1;
    xsi_driver_first_trans_fast(t11);
    t11 = (t10 + 12U);
    t14 = *((unsigned int *)t11);
    t14 = (t14 * 1U);
    t12 = (char *)alloca(t14);
    memcpy(t12, t2, t14);
    work_a_0264794969_1949178628_sub_17134350313124719543_1099654824(t0, t1, t12);
    t11 = (t0 + 9184);
    t21 = (t11 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((int *)t24) = 2;
    xsi_driver_first_trans_fast(t11);
    work_a_0264794969_1949178628_sub_7195306510337657632_1099654824(t0, t1);
    t11 = (t0 + 9184);
    t21 = (t11 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((int *)t24) = 3;
    xsi_driver_first_trans_fast(t11);
    t11 = (t0 + 2272U);
    t21 = (t0 + 9248);
    work_a_0264794969_1949178628_sub_8291992696423367019_1099654824(t0, t1, t11, 0U, 0U, t21);
    t11 = (t0 + 2312U);
    t21 = *((char **)t11);
    t18 = *((unsigned char *)t21);
    t26 = (t18 == (unsigned char)2);
    if (t26 != 0)
        goto LAB4;

LAB6:
LAB5:    t13 = (t3 - 1);
    t17 = 0;
    t27 = t13;

LAB8:    if (t17 <= t27)
        goto LAB9;

LAB11:    t11 = (t0 + 9184);
    t21 = (t11 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((int *)t24) = 6;
    xsi_driver_first_trans_fast(t11);
    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t1);

LAB1:    return;
LAB3:    *((char **)t16) = t2;
    goto LAB2;

LAB4:    t11 = (t0 + 9184);
    t22 = (t11 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((int *)t25) = 6;
    xsi_driver_first_trans_fast(t11);
    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t1);
    goto LAB1;

LAB7:    goto LAB5;

LAB9:    t11 = (t0 + 9184);
    t21 = (t11 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((int *)t24) = 4;
    xsi_driver_first_trans_fast(t11);
    t14 = (0U + t5);
    t28 = (0U + t6);
    work_a_0264794969_1949178628_sub_963677805374603289_1099654824(t0, t1, t4, t14, t28, t7);
    t11 = (t0 + 9184);
    t21 = (t11 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((int *)t24) = 5;
    xsi_driver_first_trans_fast(t11);
    t13 = (t3 - 1);
    t18 = (t17 < t13);
    if (t18 != 0)
        goto LAB12;

LAB14:    work_a_0264794969_1949178628_sub_14483337450050717504_1099654824(t0, t1);

LAB13:
LAB10:    if (t17 == t27)
        goto LAB11;

LAB15:    t13 = (t17 + 1);
    t17 = t13;
    goto LAB8;

LAB12:    work_a_0264794969_1949178628_sub_16090678604198441106_1099654824(t0, t1);
    goto LAB13;

}

static void work_a_0264794969_1949178628_p_5(char *t0)
{
    char t7[16];
    char t20[16];
    char t22[16];
    char t28[16];
    char t30[16];
    char t38[16];
    char t40[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    char *t18;
    char *t19;
    char *t21;
    char *t23;
    char *t24;
    int t25;
    char *t27;
    char *t29;
    char *t31;
    char *t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t39;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t1 = (t0 + 8304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(508, ng0);
    t2 = (t0 + 5848U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    t4 = (t0 + 5792U);
    xsi_variable_act(t4);
    xsi_set_current_line(510, ng0);
    t2 = (t0 + 9056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(511, ng0);
    t2 = (t0 + 9120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(513, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14456);
    t5 = (t7 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 59;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t8 = (59 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    work_p_4054474977_sub_139404078134298855_1800819092(WORK_P_4054474977, t2, t3, t7);
    xsi_set_current_line(514, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14515);
    t5 = (t0 + 14522);
    work_a_0264794969_1949178628_sub_18164678374491250930_1099654824(t0, t2, t3, t5);
    xsi_set_current_line(515, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 14530);
    t10 = 1;
    if (8U == 8U)
        goto LAB6;

LAB7:    t10 = 0;

LAB8:    if (t10 == 0)
        goto LAB4;

LAB5:    xsi_set_current_line(519, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14556);
    t5 = (t7 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 59;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t8 = (59 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    work_p_4054474977_sub_139404078134298855_1800819092(WORK_P_4054474977, t2, t3, t7);
    xsi_set_current_line(520, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14615);
    t5 = (t0 + 14622);
    work_a_0264794969_1949178628_sub_18164678374491250930_1099654824(t0, t2, t3, t5);
    xsi_set_current_line(521, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 14630);
    t10 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t10 = 0;

LAB16:    if (t10 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(525, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14656);
    t5 = (t7 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 59;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t8 = (59 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    work_p_4054474977_sub_139404078134298855_1800819092(WORK_P_4054474977, t2, t3, t7);
    xsi_set_current_line(526, ng0);

LAB22:    t2 = (t0 + 8640);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;

LAB1:    return;
LAB4:    t11 = (t0 + 14538);
    xsi_report(t11, 18U, (unsigned char)1);
    goto LAB5;

LAB6:    t9 = 0;

LAB9:    if (t9 < 8U)
        goto LAB10;
    else
        goto LAB8;

LAB10:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB7;

LAB11:    t9 = (t9 + 1);
    goto LAB9;

LAB12:    t11 = (t0 + 14638);
    xsi_report(t11, 18U, (unsigned char)1);
    goto LAB13;

LAB14:    t9 = 0;

LAB17:    if (t9 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB15;

LAB19:    t9 = (t9 + 1);
    goto LAB17;

LAB20:    t4 = (t0 + 8640);
    *((int *)t4) = 0;
    xsi_set_current_line(527, ng0);
    t2 = (t0 + 14715);
    *((int *)t2) = 0;
    t3 = (t0 + 14719);
    *((int *)t3) = 127;
    t8 = 0;
    t13 = 127;

LAB24:    if (t8 <= t13)
        goto LAB25;

LAB27:    xsi_set_current_line(534, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14755);
    t5 = (t7 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 59;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t8 = (59 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    work_p_4054474977_sub_139404078134298855_1800819092(WORK_P_4054474977, t2, t3, t7);
    xsi_set_current_line(535, ng0);
    t2 = (t0 + 14814);
    *((int *)t2) = 0;
    t3 = (t0 + 14818);
    *((int *)t3) = 127;
    t8 = 0;
    t13 = 127;

LAB31:    if (t8 <= t13)
        goto LAB32;

LAB34:    xsi_set_current_line(546, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14858);
    t5 = (t7 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 58;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t8 = (58 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    work_p_4054474977_sub_139404078134298855_1800819092(WORK_P_4054474977, t2, t3, t7);
    xsi_set_current_line(547, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14916);
    t5 = (t0 + 14923);
    work_a_0264794969_1949178628_sub_11213553765256860686_1099654824(t0, t2, t3, t5);
    xsi_set_current_line(548, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14931);
    t5 = (t0 + 14938);
    work_a_0264794969_1949178628_sub_11213553765256860686_1099654824(t0, t2, t3, t5);
    xsi_set_current_line(549, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14946);
    t5 = (t0 + 14953);
    work_a_0264794969_1949178628_sub_11213553765256860686_1099654824(t0, t2, t3, t5);
    xsi_set_current_line(550, ng0);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t7, 255, 8);
    t3 = (t0 + 9312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t11 = *((char **)t6);
    memcpy(t11, t2, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(551, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14961);
    t5 = (t0 + 2112U);
    t6 = (t0 + 9376);
    work_a_0264794969_1949178628_sub_26645317263378229_1099654824(t0, t2, t3, t5, 0U, 0U, t6);
    xsi_set_current_line(552, ng0);
    t2 = (t0 + 9184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 6;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(553, ng0);
    t2 = (t0 + 8112);
    work_a_0264794969_1949178628_sub_8246381343344196063_1099654824(t0, t2);
    xsi_set_current_line(560, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14968);
    t5 = (t7 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 59;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t8 = (59 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    work_p_4054474977_sub_139404078134298855_1800819092(WORK_P_4054474977, t2, t3, t7);
    xsi_set_current_line(561, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 15027);
    t5 = (t7 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 59;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t8 = (59 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    work_p_4054474977_sub_139404078134298855_1800819092(WORK_P_4054474977, t2, t3, t7);
    xsi_set_current_line(562, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 15086);
    work_a_0264794969_1949178628_sub_1221919628536496706_1099654824(t0, t2, t3, 100);
    xsi_set_current_line(563, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 15093);
    t5 = (t0 + 2112U);
    t6 = (t0 + 9376);
    work_a_0264794969_1949178628_sub_12535114839410182041_1099654824(t0, t2, t3, t5, 0U, 0U, t6);
    xsi_set_current_line(564, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 15100);
    t5 = (t0 + 2112U);
    t6 = (t0 + 9376);
    work_a_0264794969_1949178628_sub_17238045045564128706_1099654824(t0, t2, t3, 300, t5, 0U, 0U, t6);
    xsi_set_current_line(566, ng0);

LAB40:    t2 = (t0 + 8656);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB21:    t3 = (t0 + 1632U);
    t10 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t10 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB25:    xsi_set_current_line(528, ng0);
    t4 = (t0 + 8112);
    t5 = (t0 + 14723);
    t11 = (t0 + 14715);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t7, *((int *)t11), 8);
    t14 = (t7 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t15 = (char *)alloca(t9);
    memcpy(t15, t12, t9);
    work_a_0264794969_1949178628_sub_18164678374491250930_1099654824(t0, t4, t5, t15);
    xsi_set_current_line(529, ng0);
    t2 = (t0 + 14715);
    t3 = (t0 + 3112U);
    t4 = *((char **)t3);
    t3 = (t0 + 14224U);
    t16 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t4, t3);
    t17 = *((int *)t2);
    t10 = (t17 == t16);
    if (t10 == 0)
        goto LAB28;

LAB29:
LAB26:    t2 = (t0 + 14715);
    t8 = *((int *)t2);
    t3 = (t0 + 14719);
    t13 = *((int *)t3);
    if (t8 == t13)
        goto LAB27;

LAB30:    t16 = (t8 + 1);
    t8 = t16;
    t4 = (t0 + 14715);
    *((int *)t4) = t8;
    goto LAB24;

LAB28:    t5 = (t0 + 14730);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t0 + 14715);
    t14 = xsi_int_to_mem(*((int *)t12));
    t18 = xsi_string_variable_get_image(t7, t11, t14);
    t21 = ((STD_STANDARD) + 984);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 1;
    t24 = (t23 + 4U);
    *((int *)t24) = 14;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (14 - 1);
    t9 = (t25 * 1);
    t9 = (t9 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t9;
    t19 = xsi_base_array_concat(t19, t20, t21, (char)97, t5, t22, (char)97, t18, t7, (char)101);
    t24 = (t0 + 14744);
    t29 = ((STD_STANDARD) + 984);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 1;
    t32 = (t31 + 4U);
    *((int *)t32) = 11;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t33 = (11 - 1);
    t9 = (t33 * 1);
    t9 = (t9 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t9;
    t27 = xsi_base_array_concat(t27, t28, t29, (char)97, t19, t20, (char)97, t24, t30, (char)101);
    t32 = (t7 + 12U);
    t9 = *((unsigned int *)t32);
    t34 = (14U + t9);
    t35 = (t34 + 11U);
    xsi_report(t27, t35, (unsigned char)1);
    goto LAB29;

LAB32:    xsi_set_current_line(536, ng0);
    t4 = (t0 + 14814);
    t5 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t7, *((int *)t4), 8);
    t6 = (t0 + 9312);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t5, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(537, ng0);
    t2 = (t0 + 8112);
    t3 = (t0 + 14822);
    t5 = (t0 + 2112U);
    t6 = (t0 + 9376);
    work_a_0264794969_1949178628_sub_12535114839410182041_1099654824(t0, t2, t3, t5, 0U, 0U, t6);
    xsi_set_current_line(538, ng0);
    t2 = (t0 + 14814);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t3 = (t0 + 14176U);
    t16 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t4, t3);
    t17 = *((int *)t2);
    t10 = (t17 == t16);
    if (t10 == 0)
        goto LAB35;

LAB36:
LAB33:    t2 = (t0 + 14814);
    t8 = *((int *)t2);
    t3 = (t0 + 14818);
    t13 = *((int *)t3);
    if (t8 == t13)
        goto LAB34;

LAB37:    t16 = (t8 + 1);
    t8 = t16;
    t4 = (t0 + 14814);
    *((int *)t4) = t8;
    goto LAB31;

LAB35:    t5 = (t0 + 14829);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t0 + 14814);
    t14 = xsi_int_to_mem(*((int *)t12));
    t18 = xsi_string_variable_get_image(t7, t11, t14);
    t21 = ((STD_STANDARD) + 984);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 1;
    t24 = (t23 + 4U);
    *((int *)t24) = 14;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (14 - 1);
    t9 = (t25 * 1);
    t9 = (t9 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t9;
    t19 = xsi_base_array_concat(t19, t20, t21, (char)97, t5, t22, (char)97, t18, t7, (char)101);
    t24 = (t0 + 14843);
    t29 = ((STD_STANDARD) + 984);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 1;
    t32 = (t31 + 4U);
    *((int *)t32) = 11;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t33 = (11 - 1);
    t9 = (t33 * 1);
    t9 = (t9 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t9;
    t27 = xsi_base_array_concat(t27, t28, t29, (char)97, t19, t20, (char)97, t24, t30, (char)101);
    t32 = (t0 + 14854);
    t39 = ((STD_STANDARD) + 984);
    t41 = (t40 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = 1;
    t42 = (t41 + 4U);
    *((int *)t42) = 4;
    t42 = (t41 + 8U);
    *((int *)t42) = 1;
    t43 = (4 - 1);
    t9 = (t43 * 1);
    t9 = (t9 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t9;
    t37 = xsi_base_array_concat(t37, t38, t39, (char)97, t27, t28, (char)97, t32, t40, (char)101);
    t42 = (t7 + 12U);
    t9 = *((unsigned int *)t42);
    t34 = (14U + t9);
    t35 = (t34 + 11U);
    t44 = (t35 + 4U);
    xsi_report(t37, t44, (unsigned char)1);
    goto LAB36;

LAB38:    t4 = (t0 + 8656);
    *((int *)t4) = 0;
    xsi_set_current_line(568, ng0);
    t2 = (t0 + 6088U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)1;
    t4 = (t0 + 6032U);
    xsi_variable_act(t4);
    xsi_set_current_line(569, ng0);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB39:    t3 = (t0 + 1632U);
    t10 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t10 == 1)
        goto LAB38;
    else
        goto LAB40;

LAB41:    goto LAB39;

LAB42:    goto LAB2;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

}


extern void work_a_0264794969_1949178628_init()
{
	static char *pe[] = {(void *)work_a_0264794969_1949178628_p_0,(void *)work_a_0264794969_1949178628_p_1,(void *)work_a_0264794969_1949178628_p_2,(void *)work_a_0264794969_1949178628_p_3,(void *)work_a_0264794969_1949178628_p_4,(void *)work_a_0264794969_1949178628_p_5};
	static char *se[] = {(void *)work_a_0264794969_1949178628_sub_2884837013734620179_1099654824,(void *)work_a_0264794969_1949178628_sub_17794079598382357692_1099654824,(void *)work_a_0264794969_1949178628_sub_8074788807731879719_1099654824,(void *)work_a_0264794969_1949178628_sub_8654420119729047285_1099654824,(void *)work_a_0264794969_1949178628_sub_16310037970342244468_1099654824,(void *)work_a_0264794969_1949178628_sub_17134350313124719543_1099654824,(void *)work_a_0264794969_1949178628_sub_963677805374603289_1099654824,(void *)work_a_0264794969_1949178628_sub_13875944873271731719_1099654824,(void *)work_a_0264794969_1949178628_sub_8246381343344196063_1099654824,(void *)work_a_0264794969_1949178628_sub_16083963538467743727_1099654824,(void *)work_a_0264794969_1949178628_sub_7195306510337657632_1099654824,(void *)work_a_0264794969_1949178628_sub_8291992696423367019_1099654824,(void *)work_a_0264794969_1949178628_sub_14483337450050717504_1099654824,(void *)work_a_0264794969_1949178628_sub_16090678604198441106_1099654824,(void *)work_a_0264794969_1949178628_sub_18164678374491250930_1099654824,(void *)work_a_0264794969_1949178628_sub_11213553765256860686_1099654824,(void *)work_a_0264794969_1949178628_sub_1221919628536496706_1099654824,(void *)work_a_0264794969_1949178628_sub_12535114839410182041_1099654824,(void *)work_a_0264794969_1949178628_sub_26645317263378229_1099654824,(void *)work_a_0264794969_1949178628_sub_17238045045564128706_1099654824};
	xsi_register_didat("work_a_0264794969_1949178628", "isim/I2C_slave_TB_isim_beh.exe.sim/work/a_0264794969_1949178628.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
