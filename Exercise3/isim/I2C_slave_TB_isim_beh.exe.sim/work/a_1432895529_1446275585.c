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
static const char *ng0 = "/lhome/nriahid/Documents/AESL/Exercise3/I2C_slave.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1432895529_1446275585_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 9560);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1432895529_1446275585_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9576);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 9816);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 9880);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 9944);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 10008);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 10072);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 4712U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t10 = (t5 == (unsigned char)2);
    if (t10 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 10136);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 4712U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t10 = (t5 == (unsigned char)3);
    if (t10 == 1)
        goto LAB14;

LAB15:    t2 = (unsigned char)0;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 10200);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 10264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB26;

LAB27:    t10 = (unsigned char)0;

LAB28:    if (t10 == 1)
        goto LAB23;

LAB24:    t5 = (unsigned char)0;

LAB25:    if (t5 == 1)
        goto LAB20;

LAB21:    t2 = (unsigned char)0;

LAB22:    if (t2 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 4712U);
    t3 = *((char **)t1);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB38;

LAB39:    t10 = (unsigned char)0;

LAB40:    if (t10 == 1)
        goto LAB35;

LAB36:    t5 = (unsigned char)0;

LAB37:    if (t5 == 1)
        goto LAB32;

LAB33:    t2 = (unsigned char)0;

LAB34:    if (t2 != 0)
        goto LAB29;

LAB31:
LAB30:    goto LAB3;

LAB5:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 10072);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    t2 = t12;
    goto LAB10;

LAB11:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 10136);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t2 = t12;
    goto LAB16;

LAB17:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 10200);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t19 = (t9 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 10264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    t1 = (t0 + 3432U);
    t7 = *((char **)t1);
    t17 = *((unsigned char *)t7);
    t18 = (t17 == (unsigned char)2);
    t2 = t18;
    goto LAB22;

LAB23:    t1 = (t0 + 5192U);
    t6 = *((char **)t1);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)3);
    t5 = t16;
    goto LAB25;

LAB26:    t1 = (t0 + 4712U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB28;

LAB29:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 10200);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t19 = (t9 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 10264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB30;

LAB32:    t1 = (t0 + 3432U);
    t7 = *((char **)t1);
    t17 = *((unsigned char *)t7);
    t18 = (t17 == (unsigned char)3);
    t2 = t18;
    goto LAB34;

LAB35:    t1 = (t0 + 5192U);
    t6 = *((char **)t1);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)2);
    t5 = t16;
    goto LAB37;

LAB38:    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB40;

}

static void work_a_1432895529_1446275585_p_2(char *t0)
{
    char t23[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t24;
    unsigned char t25;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13};

LAB0:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9592);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 10328);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 10392);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 10456);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 10520);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(287, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB109;

LAB111:
LAB110:    xsi_set_current_line(292, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB112;

LAB114:
LAB113:    xsi_set_current_line(297, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB115;

LAB117:
LAB116:    goto LAB3;

LAB6:    xsi_set_current_line(133, ng0);
    t4 = (t0 + 6528U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = 0;
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB15;

LAB17:
LAB16:    goto LAB5;

LAB7:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 6528U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t1 = (t0 + 6408U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t11 = (1000 * t10);
    t2 = (t9 < t11);
    if (t2 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 10584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB19:    goto LAB5;

LAB8:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 6528U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t1 = (t0 + 6408U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t11 = (1000 * t10);
    t2 = (t9 < t11);
    if (t2 != 0)
        goto LAB49;

LAB51:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 10584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB50:    goto LAB5;

LAB9:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 6528U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t1 = (t0 + 6408U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t11 = (1000 * t10);
    t2 = (t9 < t11);
    if (t2 != 0)
        goto LAB58;

LAB60:    xsi_set_current_line(211, ng0);
    t1 = (t0 + 10584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB59:    goto LAB5;

LAB10:    xsi_set_current_line(218, ng0);
    t1 = (t0 + 6528U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t1 = (t0 + 6408U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t11 = (1000 * t10);
    t2 = (t9 < t11);
    if (t2 != 0)
        goto LAB75;

LAB77:    xsi_set_current_line(231, ng0);
    t1 = (t0 + 10584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB76:    goto LAB5;

LAB11:    xsi_set_current_line(238, ng0);
    t1 = (t0 + 6528U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t1 = (t0 + 6408U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t11 = (1000 * t10);
    t2 = (t9 < t11);
    if (t2 != 0)
        goto LAB86;

LAB88:    xsi_set_current_line(251, ng0);
    t1 = (t0 + 10584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB87:    goto LAB5;

LAB12:    xsi_set_current_line(255, ng0);
    t1 = (t0 + 6528U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t1 = (t0 + 6408U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t11 = (1000 * t10);
    t2 = (t9 < t11);
    if (t2 != 0)
        goto LAB95;

LAB97:    xsi_set_current_line(269, ng0);
    t1 = (t0 + 10584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB96:    goto LAB5;

LAB13:    xsi_set_current_line(274, ng0);
    goto LAB5;

LAB14:    xsi_set_current_line(278, ng0);
    if ((unsigned char)0 == 0)
        goto LAB107;

LAB108:    xsi_set_current_line(281, ng0);
    t1 = (t0 + 10584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB15:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 10584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 10648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB18:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 6528U);
    t5 = *((char **)t1);
    t12 = *((int *)t5);
    t13 = (t12 + 1);
    t1 = (t0 + 6528U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t13;
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB21;

LAB23:
LAB22:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t8 = (t9 == 8);
    if (t8 == 1)
        goto LAB32;

LAB33:    t2 = (unsigned char)0;

LAB34:    if (t2 != 0)
        goto LAB29;

LAB31:
LAB30:    goto LAB19;

LAB21:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t14 = (t9 < 7);
    if (t14 != 0)
        goto LAB24;

LAB26:    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t2 = (t9 == 7);
    if (t2 != 0)
        goto LAB27;

LAB28:
LAB25:    goto LAB22;

LAB24:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (t10 + 1);
    t1 = (t0 + 10648);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t11;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (6 - t9);
    t11 = (t10 - 6);
    t17 = (t11 * -1);
    t18 = (1 * t17);
    t19 = (0U + t18);
    t1 = (t0 + 10712);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t15 = *((char **)t7);
    *((unsigned char *)t15) = t2;
    xsi_driver_first_trans_delta(t1, t19, 1, 0LL);
    goto LAB25;

LAB27:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t1 = (t0 + 10648);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t15 = *((char **)t7);
    *((int *)t15) = t11;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 10776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t2;
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

LAB29:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 10648);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t15 = *((char **)t7);
    *((int *)t15) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 4232U);
    t3 = *((char **)t1);
    t1 = (t0 + 16540);
    t2 = 1;
    if (7U == 7U)
        goto LAB38;

LAB39:    t2 = 0;

LAB40:    if (t2 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(161, ng0);
    if ((unsigned char)0 == 0)
        goto LAB47;

LAB48:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 10584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB36:    goto LAB30;

LAB32:    t1 = (t0 + 4072U);
    t4 = *((char **)t1);
    t14 = *((unsigned char *)t4);
    t20 = (t14 == (unsigned char)3);
    t2 = t20;
    goto LAB34;

LAB35:    xsi_set_current_line(155, ng0);
    t7 = (t0 + 10584);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB44;

LAB46:
LAB45:    goto LAB36;

LAB38:    t17 = 0;

LAB41:    if (t17 < 7U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t5 = (t3 + t17);
    t6 = (t1 + t17);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB39;

LAB43:    t17 = (t17 + 1);
    goto LAB41;

LAB44:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 10520);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(158, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 10840);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB45;

LAB47:    t1 = (t0 + 16547);
    xsi_report(t1, 73U, (unsigned char)0);
    goto LAB48;

LAB49:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 6528U);
    t5 = *((char **)t1);
    t12 = *((int *)t5);
    t13 = (t12 + 1);
    t1 = (t0 + 6528U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t13;
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 10392);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 10328);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB52;

LAB54:
LAB53:    goto LAB50;

LAB52:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t14 = *((unsigned char *)t4);
    t20 = (t14 == (unsigned char)2);
    if (t20 != 0)
        goto LAB55;

LAB57:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 10584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB56:    goto LAB53;

LAB55:    xsi_set_current_line(181, ng0);
    t1 = (t0 + 10584);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t15 = *((char **)t7);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB56;

LAB58:    xsi_set_current_line(195, ng0);
    t1 = (t0 + 6528U);
    t5 = *((char **)t1);
    t12 = *((int *)t5);
    t13 = (t12 + 1);
    t1 = (t0 + 6528U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t13;
    xsi_set_current_line(196, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB61;

LAB63:
LAB62:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t8 = *((unsigned char *)t3);
    t14 = (t8 == (unsigned char)3);
    if (t14 == 1)
        goto LAB72;

LAB73:    t2 = (unsigned char)0;

LAB74:    if (t2 != 0)
        goto LAB69;

LAB71:
LAB70:    goto LAB59;

LAB61:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t1 = (t0 + 10648);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t15 = *((char **)t7);
    *((int *)t15) = t10;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(198, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t2 = (t9 < 7);
    if (t2 != 0)
        goto LAB64;

LAB66:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t0 + 16400U);
    t1 = xsi_base_array_concat(t1, t23, t5, (char)97, t3, t6, (char)99, t2, (char)101);
    t17 = (7U + 1U);
    t8 = (8U != t17);
    if (t8 == 1)
        goto LAB67;

LAB68:    t7 = (t0 + 10968);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(202, ng0);
    t1 = (t0 + 10456);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB65:    goto LAB62;

LAB64:    xsi_set_current_line(199, ng0);
    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t8 = *((unsigned char *)t4);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (6 - t10);
    t12 = (t11 - 6);
    t17 = (t12 * -1);
    t18 = (1 * t17);
    t19 = (0U + t18);
    t1 = (t0 + 10904);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t8;
    xsi_driver_first_trans_delta(t1, t19, 1, 0LL);
    goto LAB65;

LAB67:    xsi_size_not_matching(8U, t17, 0);
    goto LAB68;

LAB69:    xsi_set_current_line(207, ng0);
    t1 = (t0 + 10584);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t15 = *((char **)t7);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(208, ng0);
    t1 = (t0 + 10648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB70;

LAB72:    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t20 = (t9 == 8);
    t2 = t20;
    goto LAB74;

LAB75:    xsi_set_current_line(219, ng0);
    t1 = (t0 + 6528U);
    t5 = *((char **)t1);
    t12 = *((int *)t5);
    t13 = (t12 + 1);
    t1 = (t0 + 6528U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t13;
    xsi_set_current_line(220, ng0);
    t1 = (t0 + 10392);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(221, ng0);
    t1 = (t0 + 5992U);
    t3 = *((char **)t1);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (7 - t9);
    t11 = (t10 - 7);
    t17 = (t11 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t10);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t2 = *((unsigned char *)t1);
    t5 = (t0 + 10328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t2;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(222, ng0);
    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB78;

LAB80:
LAB79:    goto LAB76;

LAB78:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t14 = (t9 < 7);
    if (t14 != 0)
        goto LAB81;

LAB83:    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t2 = (t9 == 7);
    if (t2 != 0)
        goto LAB84;

LAB85:
LAB82:    goto LAB79;

LAB81:    xsi_set_current_line(224, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (t10 + 1);
    t1 = (t0 + 10648);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB82;

LAB84:    xsi_set_current_line(226, ng0);
    t1 = (t0 + 10584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(227, ng0);
    t1 = (t0 + 10648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB82;

LAB86:    xsi_set_current_line(239, ng0);
    t1 = (t0 + 6528U);
    t5 = *((char **)t1);
    t12 = *((int *)t5);
    t13 = (t12 + 1);
    t1 = (t0 + 6528U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t13;
    xsi_set_current_line(240, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB89;

LAB91:
LAB90:    goto LAB87;

LAB89:    xsi_set_current_line(241, ng0);
    t1 = (t0 + 10584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(242, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB92;

LAB94:    xsi_set_current_line(245, ng0);
    t1 = (t0 + 11032);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(246, ng0);
    t1 = (t0 + 10520);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(247, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 10840);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8U);
    xsi_driver_first_trans_fast(t1);

LAB93:    goto LAB90;

LAB92:    xsi_set_current_line(243, ng0);
    t1 = (t0 + 11032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB93;

LAB95:    xsi_set_current_line(256, ng0);
    t1 = (t0 + 6528U);
    t5 = *((char **)t1);
    t12 = *((int *)t5);
    t13 = (t12 + 1);
    t1 = (t0 + 6528U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t13;
    xsi_set_current_line(257, ng0);
    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)3);
    if (t8 != 0)
        goto LAB98;

LAB100:
LAB99:    goto LAB96;

LAB98:    xsi_set_current_line(258, ng0);
    t1 = (t0 + 2792U);
    t4 = *((char **)t1);
    t14 = *((unsigned char *)t4);
    t20 = (t14 == (unsigned char)3);
    if (t20 != 0)
        goto LAB101;

LAB103:    xsi_set_current_line(265, ng0);
    t1 = (t0 + 10584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB102:    goto LAB99;

LAB101:    xsi_set_current_line(259, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t24 = *((unsigned char *)t5);
    t25 = (t24 == (unsigned char)2);
    if (t25 != 0)
        goto LAB104;

LAB106:    xsi_set_current_line(262, ng0);
    t1 = (t0 + 10584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB105:    goto LAB102;

LAB104:    xsi_set_current_line(260, ng0);
    t1 = (t0 + 10584);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB105;

LAB107:    t1 = (t0 + 16620);
    xsi_report(t1, 41U, (unsigned char)2);
    goto LAB108;

LAB109:    xsi_set_current_line(288, ng0);
    t1 = (t0 + 10584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(289, ng0);
    t1 = (t0 + 10648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB110;

LAB112:    xsi_set_current_line(293, ng0);
    t1 = (t0 + 10584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(294, ng0);
    t1 = (t0 + 10648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB113;

LAB115:    xsi_set_current_line(298, ng0);
    t1 = (t0 + 10584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB116;

}

static void work_a_1432895529_1446275585_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(306, ng0);
    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 11096);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 9608);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5512U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 11096);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1432895529_1446275585_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(308, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 11160);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 9624);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5032U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 11160);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1432895529_1446275585_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(314, ng0);

LAB3:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11224);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9640);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1432895529_1446275585_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(315, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 11288);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9656);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1432895529_1446275585_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(317, ng0);

LAB3:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11352);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9672);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1432895529_1446275585_init()
{
	static char *pe[] = {(void *)work_a_1432895529_1446275585_p_0,(void *)work_a_1432895529_1446275585_p_1,(void *)work_a_1432895529_1446275585_p_2,(void *)work_a_1432895529_1446275585_p_3,(void *)work_a_1432895529_1446275585_p_4,(void *)work_a_1432895529_1446275585_p_5,(void *)work_a_1432895529_1446275585_p_6,(void *)work_a_1432895529_1446275585_p_7};
	xsi_register_didat("work_a_1432895529_1446275585", "isim/I2C_slave_TB_isim_beh.exe.sim/work/a_1432895529_1446275585.didat");
	xsi_register_executes(pe);
}
