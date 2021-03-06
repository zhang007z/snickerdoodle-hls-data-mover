// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "tx_axis_words.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic tx_axis_words::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic tx_axis_words::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> tx_axis_words::ap_ST_fsm_state1 = "1";
const sc_lv<3> tx_axis_words::ap_ST_fsm_pp0_stage0 = "10";
const sc_lv<3> tx_axis_words::ap_ST_fsm_state5 = "100";
const sc_lv<32> tx_axis_words::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool tx_axis_words::ap_const_boolean_1 = true;
const bool tx_axis_words::ap_const_boolean_0 = false;
const sc_lv<1> tx_axis_words::ap_const_lv1_0 = "0";
const sc_lv<32> tx_axis_words::ap_const_lv32_1 = "1";
const sc_lv<1> tx_axis_words::ap_const_lv1_1 = "1";
const sc_lv<13> tx_axis_words::ap_const_lv13_0 = "0000000000000";
const sc_lv<13> tx_axis_words::ap_const_lv13_1 = "1";
const sc_lv<32> tx_axis_words::ap_const_lv32_3 = "11";
const sc_lv<32> tx_axis_words::ap_const_lv32_C = "1100";
const sc_lv<3> tx_axis_words::ap_const_lv3_0 = "000";
const sc_lv<32> tx_axis_words::ap_const_lv32_2 = "10";

tx_axis_words::tx_axis_words(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_01001);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_block_state4_io );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_block_state4_io );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter1);

    SC_METHOD(thread_ap_block_state4_io);
    sensitive << ( exitcond_i_reg_142_pp0_iter1_reg );
    sensitive << ( ap_sig_ioackin_axis_V_V_TREADY );

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter2);

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state2);
    sensitive << ( exitcond_i_fu_86_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_ap_sig_ioackin_axis_V_V_TREADY);
    sensitive << ( axis_V_V_TREADY );
    sensitive << ( ap_reg_ioackin_axis_V_V_TREADY );

    SC_METHOD(thread_axis_V_V_TDATA);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( exitcond_i_reg_142_pp0_iter1_reg );
    sensitive << ( ap_block_pp0_stage0_01001 );
    sensitive << ( tmp_8_i_fu_127_p2 );

    SC_METHOD(thread_axis_V_V_TDATA_blk_n);
    sensitive << ( axis_V_V_TREADY );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( exitcond_i_reg_142_pp0_iter1_reg );

    SC_METHOD(thread_axis_V_V_TVALID);
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( exitcond_i_reg_142_pp0_iter1_reg );
    sensitive << ( ap_block_pp0_stage0_01001 );
    sensitive << ( ap_reg_ioackin_axis_V_V_TREADY );

    SC_METHOD(thread_cache_V_address0);
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( tmp_4_i_fu_107_p1 );

    SC_METHOD(thread_cache_V_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_exitcond_i_fu_86_p2);
    sensitive << ( p_read );
    sensitive << ( i_i_reg_75 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_i_fu_91_p2);
    sensitive << ( i_i_reg_75 );

    SC_METHOD(thread_op2_assign_fu_116_p3);
    sensitive << ( tmp_reg_156_pp0_iter1_reg );

    SC_METHOD(thread_p_lshr_f_cast_i_fu_97_p4);
    sensitive << ( i_i_reg_75 );

    SC_METHOD(thread_tmp_4_i_fu_107_p1);
    sensitive << ( p_lshr_f_cast_i_fu_97_p4 );

    SC_METHOD(thread_tmp_7_i_fu_123_p1);
    sensitive << ( op2_assign_fu_116_p3 );

    SC_METHOD(thread_tmp_8_i_fu_127_p2);
    sensitive << ( axi_word_V_reg_161 );
    sensitive << ( tmp_7_i_fu_123_p1 );

    SC_METHOD(thread_tmp_fu_112_p1);
    sensitive << ( i_i_reg_75 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( exitcond_i_fu_86_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "001";
    ap_enable_reg_pp0_iter2 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_reg_ioackin_axis_V_V_TREADY = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "tx_axis_words_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, cache_V_address0, "(port)cache_V_address0");
    sc_trace(mVcdFile, cache_V_ce0, "(port)cache_V_ce0");
    sc_trace(mVcdFile, cache_V_q0, "(port)cache_V_q0");
    sc_trace(mVcdFile, p_read, "(port)p_read");
    sc_trace(mVcdFile, axis_V_V_TDATA, "(port)axis_V_V_TDATA");
    sc_trace(mVcdFile, axis_V_V_TVALID, "(port)axis_V_V_TVALID");
    sc_trace(mVcdFile, axis_V_V_TREADY, "(port)axis_V_V_TREADY");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, axis_V_V_TDATA_blk_n, "axis_V_V_TDATA_blk_n");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter2, "ap_enable_reg_pp0_iter2");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, exitcond_i_reg_142, "exitcond_i_reg_142");
    sc_trace(mVcdFile, exitcond_i_reg_142_pp0_iter1_reg, "exitcond_i_reg_142_pp0_iter1_reg");
    sc_trace(mVcdFile, i_i_reg_75, "i_i_reg_75");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, exitcond_i_fu_86_p2, "exitcond_i_fu_86_p2");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter0, "ap_block_state2_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter1, "ap_block_state3_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter2, "ap_block_state4_pp0_stage0_iter2");
    sc_trace(mVcdFile, ap_sig_ioackin_axis_V_V_TREADY, "ap_sig_ioackin_axis_V_V_TREADY");
    sc_trace(mVcdFile, ap_block_state4_io, "ap_block_state4_io");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, i_fu_91_p2, "i_fu_91_p2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, tmp_fu_112_p1, "tmp_fu_112_p1");
    sc_trace(mVcdFile, tmp_reg_156, "tmp_reg_156");
    sc_trace(mVcdFile, tmp_reg_156_pp0_iter1_reg, "tmp_reg_156_pp0_iter1_reg");
    sc_trace(mVcdFile, axi_word_V_reg_161, "axi_word_V_reg_161");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state2, "ap_condition_pp0_exit_iter0_state2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, tmp_4_i_fu_107_p1, "tmp_4_i_fu_107_p1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_01001, "ap_block_pp0_stage0_01001");
    sc_trace(mVcdFile, ap_reg_ioackin_axis_V_V_TREADY, "ap_reg_ioackin_axis_V_V_TREADY");
    sc_trace(mVcdFile, p_lshr_f_cast_i_fu_97_p4, "p_lshr_f_cast_i_fu_97_p4");
    sc_trace(mVcdFile, op2_assign_fu_116_p3, "op2_assign_fu_116_p3");
    sc_trace(mVcdFile, tmp_7_i_fu_123_p1, "tmp_7_i_fu_123_p1");
    sc_trace(mVcdFile, tmp_8_i_fu_127_p2, "tmp_8_i_fu_127_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
}

tx_axis_words::~tx_axis_words() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void tx_axis_words::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read())) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read())) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        } else if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
            ap_enable_reg_pp0_iter2 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ioackin_axis_V_V_TREADY = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_1) && esl_seteq<1,1,1>(exitcond_i_reg_142_pp0_iter1_reg.read(), ap_const_lv1_0))) {
            if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
                ap_reg_ioackin_axis_V_V_TREADY = ap_const_logic_0;
            } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0) && 
                        esl_seteq<1,1,1>(ap_const_logic_1, axis_V_V_TREADY.read()))) {
                ap_reg_ioackin_axis_V_V_TREADY = ap_const_logic_1;
            }
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_fu_86_p2.read()))) {
        i_i_reg_75 = i_fu_91_p2.read();
    } else if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        i_i_reg_75 = ap_const_lv13_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_i_reg_142.read(), ap_const_lv1_0))) {
        axi_word_V_reg_161 = cache_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond_i_reg_142 = exitcond_i_fu_86_p2.read();
        exitcond_i_reg_142_pp0_iter1_reg = exitcond_i_reg_142.read();
        tmp_reg_156_pp0_iter1_reg = tmp_reg_156.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_fu_86_p2.read()))) {
        tmp_reg_156 = tmp_fu_112_p1.read();
    }
}

void tx_axis_words::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void tx_axis_words::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void tx_axis_words::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[2];
}

void tx_axis_words::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void tx_axis_words::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void tx_axis_words::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state4_io.read()));
}

void tx_axis_words::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state4_io.read()));
}

void tx_axis_words::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void tx_axis_words::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void tx_axis_words::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void tx_axis_words::thread_ap_block_state4_io() {
    ap_block_state4_io = (esl_seteq<1,1,1>(exitcond_i_reg_142_pp0_iter1_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_axis_V_V_TREADY.read()));
}

void tx_axis_words::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void tx_axis_words::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond_i_fu_86_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void tx_axis_words::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void tx_axis_words::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void tx_axis_words::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void tx_axis_words::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void tx_axis_words::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void tx_axis_words::thread_ap_sig_ioackin_axis_V_V_TREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_axis_V_V_TREADY.read())) {
        ap_sig_ioackin_axis_V_V_TREADY = axis_V_V_TREADY.read();
    } else {
        ap_sig_ioackin_axis_V_V_TREADY = ap_const_logic_1;
    }
}

void tx_axis_words::thread_axis_V_V_TDATA() {
    axis_V_V_TDATA = tmp_8_i_fu_127_p2.read().range(8-1, 0);
}

void tx_axis_words::thread_axis_V_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond_i_reg_142_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        axis_V_V_TDATA_blk_n = axis_V_V_TREADY.read();
    } else {
        axis_V_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void tx_axis_words::thread_axis_V_V_TVALID() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_i_reg_142_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_axis_V_V_TREADY.read()))) {
        axis_V_V_TVALID = ap_const_logic_1;
    } else {
        axis_V_V_TVALID = ap_const_logic_0;
    }
}

void tx_axis_words::thread_cache_V_address0() {
    cache_V_address0 =  (sc_lv<9>) (tmp_4_i_fu_107_p1.read());
}

void tx_axis_words::thread_cache_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        cache_V_ce0 = ap_const_logic_1;
    } else {
        cache_V_ce0 = ap_const_logic_0;
    }
}

void tx_axis_words::thread_exitcond_i_fu_86_p2() {
    exitcond_i_fu_86_p2 = (!i_i_reg_75.read().is_01() || !p_read.read().is_01())? sc_lv<1>(): sc_lv<1>(i_i_reg_75.read() == p_read.read());
}

void tx_axis_words::thread_i_fu_91_p2() {
    i_fu_91_p2 = (!i_i_reg_75.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_biguint<13>(i_i_reg_75.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void tx_axis_words::thread_op2_assign_fu_116_p3() {
    op2_assign_fu_116_p3 = esl_concat<3,3>(tmp_reg_156_pp0_iter1_reg.read(), ap_const_lv3_0);
}

void tx_axis_words::thread_p_lshr_f_cast_i_fu_97_p4() {
    p_lshr_f_cast_i_fu_97_p4 = i_i_reg_75.read().range(12, 3);
}

void tx_axis_words::thread_tmp_4_i_fu_107_p1() {
    tmp_4_i_fu_107_p1 = esl_zext<64,10>(p_lshr_f_cast_i_fu_97_p4.read());
}

void tx_axis_words::thread_tmp_7_i_fu_123_p1() {
    tmp_7_i_fu_123_p1 = esl_zext<64,6>(op2_assign_fu_116_p3.read());
}

void tx_axis_words::thread_tmp_8_i_fu_127_p2() {
    tmp_8_i_fu_127_p2 = (!tmp_7_i_fu_123_p1.read().is_01())? sc_lv<64>(): axi_word_V_reg_161.read() >> (unsigned short)tmp_7_i_fu_123_p1.read().to_uint();
}

void tx_axis_words::thread_tmp_fu_112_p1() {
    tmp_fu_112_p1 = i_i_reg_75.read().range(3-1, 0);
}

void tx_axis_words::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()) && esl_seteq<1,1,1>(exitcond_i_fu_86_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()) && 
  esl_seteq<1,1,1>(exitcond_i_fu_86_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

