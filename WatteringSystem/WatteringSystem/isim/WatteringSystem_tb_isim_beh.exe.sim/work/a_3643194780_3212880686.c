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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/University/FPGA amiri/VHDL exmaples/WatteringSystem/FSM.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3643194780_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4536);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 4664);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 4664);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_3643194780_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    static char *nl0[] = {&&LAB3, &&LAB4};

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4552);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(35, ng0);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB12;

LAB13:    t5 = (unsigned char)0;

LAB14:    if (t5 == 1)
        goto LAB9;

LAB10:    t4 = (unsigned char)0;

LAB11:    if (t4 != 0)
        goto LAB6;

LAB8:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB20;

LAB21:    t1 = (t0 + 1512U);
    t6 = *((char **)t1);
    t9 = *((unsigned char *)t6);
    t11 = (t9 == (unsigned char)3);
    t4 = t11;

LAB22:    if (t4 == 1)
        goto LAB17;

LAB18:    t3 = (unsigned char)0;

LAB19:    if (t3 != 0)
        goto LAB15;

LAB16:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB28;

LAB29:    t1 = (t0 + 1512U);
    t6 = *((char **)t1);
    t9 = *((unsigned char *)t6);
    t11 = (t9 == (unsigned char)3);
    t4 = t11;

LAB30:    if (t4 == 1)
        goto LAB25;

LAB26:    t3 = (unsigned char)0;

LAB27:    if (t3 != 0)
        goto LAB23;

LAB24:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t8 = (t5 == (unsigned char)2);
    if (t8 == 1)
        goto LAB36;

LAB37:    t4 = (unsigned char)0;

LAB38:    if (t4 == 1)
        goto LAB33;

LAB34:    t3 = (unsigned char)0;

LAB35:    if (t3 != 0)
        goto LAB31;

LAB32:
LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t8 = (t5 == (unsigned char)2);
    if (t8 == 1)
        goto LAB45;

LAB46:    t4 = (unsigned char)0;

LAB47:    if (t4 == 1)
        goto LAB42;

LAB43:    t3 = (unsigned char)0;

LAB44:    if (t3 != 0)
        goto LAB39;

LAB41:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB53;

LAB54:    t1 = (t0 + 1512U);
    t6 = *((char **)t1);
    t9 = *((unsigned char *)t6);
    t11 = (t9 == (unsigned char)3);
    t4 = t11;

LAB55:    if (t4 == 1)
        goto LAB50;

LAB51:    t3 = (unsigned char)0;

LAB52:    if (t3 != 0)
        goto LAB48;

LAB49:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB61;

LAB62:    t1 = (t0 + 1512U);
    t6 = *((char **)t1);
    t9 = *((unsigned char *)t6);
    t11 = (t9 == (unsigned char)3);
    t4 = t11;

LAB63:    if (t4 == 1)
        goto LAB58;

LAB59:    t3 = (unsigned char)0;

LAB60:    if (t3 != 0)
        goto LAB56;

LAB57:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 7338);
    t7 = ((IEEE_P_2592010699) + 4024);
    t3 = xsi_vhdl_greaterEqual(t7, t2, 3U, t1, 3U);
    if (t3 != 0)
        goto LAB64;

LAB65:
LAB40:    goto LAB2;

LAB5:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 4728);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);
    t17 = (t0 + 4728);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)0;
    xsi_driver_first_trans_fast(t17);
    goto LAB7;

LAB9:    t6 = (t0 + 1672U);
    t13 = *((char **)t6);
    t6 = (t0 + 7317);
    t15 = ((IEEE_P_2592010699) + 4024);
    t16 = xsi_vhdl_greater(t15, t13, 3U, t6, 3U);
    t4 = t16;
    goto LAB11;

LAB12:    t6 = (t0 + 1512U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t5 = t12;
    goto LAB14;

LAB15:    xsi_set_current_line(38, ng0);
    t14 = (t0 + 4728);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)0;
    xsi_driver_first_trans_fast(t14);
    goto LAB7;

LAB17:    t1 = (t0 + 1672U);
    t7 = *((char **)t1);
    t1 = (t0 + 7320);
    t13 = ((IEEE_P_2592010699) + 4024);
    t12 = xsi_vhdl_greater(t13, t7, 3U, t1, 3U);
    t3 = t12;
    goto LAB19;

LAB20:    t4 = (unsigned char)1;
    goto LAB22;

LAB23:    xsi_set_current_line(40, ng0);
    t14 = (t0 + 4728);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)1;
    xsi_driver_first_trans_fast(t14);
    goto LAB7;

LAB25:    t1 = (t0 + 1672U);
    t7 = *((char **)t1);
    t1 = (t0 + 7323);
    t13 = ((IEEE_P_2592010699) + 4024);
    t12 = xsi_vhdl_lessthanEqual(t13, t7, 3U, t1, 3U);
    t3 = t12;
    goto LAB27;

LAB28:    t4 = (unsigned char)1;
    goto LAB30;

LAB31:    xsi_set_current_line(42, ng0);
    t14 = (t0 + 4728);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)1;
    xsi_driver_first_trans_fast(t14);
    goto LAB7;

LAB33:    t1 = (t0 + 1672U);
    t7 = *((char **)t1);
    t1 = (t0 + 7326);
    t13 = ((IEEE_P_2592010699) + 4024);
    t12 = xsi_vhdl_lessthanEqual(t13, t7, 3U, t1, 3U);
    t3 = t12;
    goto LAB35;

LAB36:    t1 = (t0 + 1512U);
    t6 = *((char **)t1);
    t9 = *((unsigned char *)t6);
    t11 = (t9 == (unsigned char)2);
    t4 = t11;
    goto LAB38;

LAB39:    xsi_set_current_line(46, ng0);
    t14 = (t0 + 4728);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)1;
    xsi_driver_first_trans_fast(t14);
    goto LAB40;

LAB42:    t1 = (t0 + 1672U);
    t7 = *((char **)t1);
    t1 = (t0 + 7329);
    t13 = ((IEEE_P_2592010699) + 4024);
    t12 = xsi_vhdl_lessthan(t13, t7, 3U, t1, 3U);
    t3 = t12;
    goto LAB44;

LAB45:    t1 = (t0 + 1512U);
    t6 = *((char **)t1);
    t9 = *((unsigned char *)t6);
    t11 = (t9 == (unsigned char)2);
    t4 = t11;
    goto LAB47;

LAB48:    xsi_set_current_line(48, ng0);
    t14 = (t0 + 4728);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)1;
    xsi_driver_first_trans_fast(t14);
    goto LAB40;

LAB50:    t1 = (t0 + 1672U);
    t7 = *((char **)t1);
    t1 = (t0 + 7332);
    t13 = ((IEEE_P_2592010699) + 4024);
    t12 = xsi_vhdl_lessthan(t13, t7, 3U, t1, 3U);
    t3 = t12;
    goto LAB52;

LAB53:    t4 = (unsigned char)1;
    goto LAB55;

LAB56:    xsi_set_current_line(50, ng0);
    t14 = (t0 + 4728);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)0;
    xsi_driver_first_trans_fast(t14);
    goto LAB40;

LAB58:    t1 = (t0 + 1672U);
    t7 = *((char **)t1);
    t1 = (t0 + 7335);
    t13 = ((IEEE_P_2592010699) + 4024);
    t12 = xsi_vhdl_greaterEqual(t13, t7, 3U, t1, 3U);
    t3 = t12;
    goto LAB60;

LAB61:    t4 = (unsigned char)1;
    goto LAB63;

LAB64:    xsi_set_current_line(52, ng0);
    t10 = (t0 + 4728);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    *((unsigned char *)t17) = (unsigned char)0;
    xsi_driver_first_trans_fast(t10);
    goto LAB40;

}

static void work_a_3643194780_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 4792);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 4568);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4792);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3643194780_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 4856);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 4584);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4856);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_3643194780_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3643194780_3212880686_p_0,(void *)work_a_3643194780_3212880686_p_1,(void *)work_a_3643194780_3212880686_p_2,(void *)work_a_3643194780_3212880686_p_3};
	xsi_register_didat("work_a_3643194780_3212880686", "isim/WatteringSystem_tb_isim_beh.exe.sim/work/a_3643194780_3212880686.didat");
	xsi_register_executes(pe);
}
