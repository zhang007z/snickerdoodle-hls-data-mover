// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _rx_axis_words7131_HH_
#define _rx_axis_words7131_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct rx_axis_words7131 : public sc_module {
    // Port declarations 26
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > axis_V_V_TDATA;
    sc_in< sc_logic > axis_V_V_TVALID;
    sc_out< sc_logic > axis_V_V_TREADY;
    sc_in< sc_lv<12> > loop_count_V;
    sc_in< sc_lv<12> > final_burst_length_V;
    sc_in< sc_lv<12> > val_assign;
    sc_out< sc_lv<9> > cache_V1_address0;
    sc_out< sc_logic > cache_V1_ce0;
    sc_out< sc_logic > cache_V1_we0;
    sc_out< sc_lv<64> > cache_V1_d0;
    sc_in< sc_lv<1> > rx_buffer_V_offset;
    sc_out< sc_lv<1> > rx_buffer_V_offset_out_din;
    sc_in< sc_logic > rx_buffer_V_offset_out_full_n;
    sc_out< sc_logic > rx_buffer_V_offset_out_write;
    sc_in< sc_lv<29> > rx_buffer_V_offset1;
    sc_out< sc_lv<29> > rx_buffer_V_offset1_out_din;
    sc_in< sc_logic > rx_buffer_V_offset1_out_full_n;
    sc_out< sc_logic > rx_buffer_V_offset1_out_write;
    sc_out< sc_lv<20> > ap_return;


    // Module declarations
    rx_axis_words7131(sc_module_name name);
    SC_HAS_PROCESS(rx_axis_words7131);

    ~rx_axis_words7131();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > axis_V_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond1_i_i_i_i_i_fu_305_p2;
    sc_signal< sc_lv<1> > tmp_5_i_i_i_i_i_fu_320_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<1> > exitcond1_i_i_i_i_i_reg_415;
    sc_signal< sc_lv<1> > tmp_5_i_i_i_i_i_reg_424;
    sc_signal< sc_lv<1> > tmp_6_1_i_i_i_i_i_reg_438;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< sc_lv<1> > tmp_6_2_i_i_i_i_i_reg_452;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_lv<1> > tmp_6_3_i_i_i_i_i_reg_466;
    sc_signal< sc_logic > rx_buffer_V_offset_out_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > rx_buffer_V_offset1_out_blk_n;
    sc_signal< sc_lv<10> > i_i_i_i_i_i_reg_181;
    sc_signal< sc_lv<12> > p_098_3_2_i_i_i_i_i_reg_203;
    sc_signal< sc_lv<11> > tmp_fu_269_p1;
    sc_signal< sc_lv<11> > tmp_reg_405;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > tmp_i_i_i_i_i_fu_287_p2;
    sc_signal< sc_lv<1> > tmp_i_i_i_i_i_reg_410;
    sc_signal< bool > ap_predicate_op54_read_state3;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<10> > i_fu_311_p2;
    sc_signal< sc_lv<10> > i_reg_419;
    sc_signal< sc_lv<16> > tmp_V_reg_428;
    sc_signal< sc_lv<12> > data_length_V_1_i_i_s_fu_326_p2;
    sc_signal< sc_lv<1> > tmp_6_1_i_i_i_i_i_fu_332_p2;
    sc_signal< sc_lv<12> > data_length_V_1_1_i_s_fu_338_p2;
    sc_signal< sc_lv<12> > data_length_V_1_1_i_s_reg_442;
    sc_signal< bool > ap_predicate_op59_read_state4;
    sc_signal< bool > ap_block_state4_pp0_stage1_iter0;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<1> > tmp_6_2_i_i_i_i_i_fu_344_p2;
    sc_signal< sc_lv<12> > data_length_V_1_2_i_s_fu_350_p2;
    sc_signal< sc_lv<12> > data_length_V_1_2_i_s_reg_456;
    sc_signal< bool > ap_predicate_op65_read_state5;
    sc_signal< bool > ap_block_state5_pp0_stage2_iter0;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_lv<1> > tmp_6_3_i_i_i_i_i_fu_356_p2;
    sc_signal< bool > ap_predicate_op70_read_state6;
    sc_signal< bool > ap_block_state6_pp0_stage3_iter0;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< bool > ap_block_state2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< sc_lv<10> > ap_phi_mux_i_i_i_i_i_i_phi_fu_185_p4;
    sc_signal< sc_lv<12> > ap_phi_mux_p_098_3_1_i_i_i_i_i_phi_fu_196_p4;
    sc_signal< sc_lv<12> > ap_phi_reg_pp0_iter0_p_098_3_1_i_i_i_i_i_reg_193;
    sc_signal< sc_lv<12> > ap_phi_mux_p_098_3_2_i_i_i_i_i_phi_fu_206_p4;
    sc_signal< sc_lv<12> > ap_phi_reg_pp0_iter0_p_098_3_2_i_i_i_i_i_reg_203;
    sc_signal< sc_lv<12> > ap_phi_mux_p_098_3_3_i_i_i_i_i_phi_fu_217_p4;
    sc_signal< sc_lv<12> > data_length_V_1_3_i_s_fu_362_p2;
    sc_signal< sc_lv<12> > ap_phi_reg_pp0_iter0_p_098_3_3_i_i_i_i_i_reg_214;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_p_1_1_i_i_i_i_i_reg_224;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_p_1_1_i_i_i_i_i_reg_224;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_p_1_2_i_i_i_i_i_reg_235;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_p_1_2_i_i_i_i_i_reg_235;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_p_1_3_i_i_i_i_i_reg_246;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_p_1_3_i_i_i_i_i_reg_246;
    sc_signal< sc_lv<64> > ap_phi_mux_p_094_1_i_i_i_i_i_phi_fu_261_p4;
    sc_signal< sc_lv<64> > axi_word_V_3_i_i_i_i_fu_374_p5;
    sc_signal< sc_lv<64> > tmp_7_i_i_i_i_i_fu_386_p1;
    sc_signal< sc_lv<12> > p_098_1_i_i_i_i_i_fu_112;
    sc_signal< sc_lv<12> > final_burst_length_V_4_fu_293_p3;
    sc_signal< sc_lv<13> > lhs_V_cast_i_i_i_i_i_fu_273_p1;
    sc_signal< sc_lv<13> > tmp_cast_i_i_i_i_i_fu_283_p1;
    sc_signal< sc_lv<13> > r_V_fu_277_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< bool > ap_condition_429;
    sc_signal< bool > ap_condition_435;
    sc_signal< bool > ap_condition_441;
    sc_signal< bool > ap_condition_444;
    sc_signal< bool > ap_condition_439;
    sc_signal< bool > ap_condition_121;
    sc_signal< bool > ap_condition_225;
    sc_signal< bool > ap_condition_106;
    sc_signal< bool > ap_condition_211;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_pp0_stage0;
    static const sc_lv<7> ap_ST_fsm_pp0_stage1;
    static const sc_lv<7> ap_ST_fsm_pp0_stage2;
    static const sc_lv<7> ap_ST_fsm_pp0_stage3;
    static const sc_lv<7> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<13> ap_const_lv13_1FFF;
    static const sc_lv<12> ap_const_lv12_800;
    static const sc_lv<10> ap_const_lv10_200;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<12> ap_const_lv12_FFF;
    static const sc_lv<12> ap_const_lv12_FFE;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_6;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage1_iter0();
    void thread_ap_block_state5_pp0_stage2_iter0();
    void thread_ap_block_state6_pp0_stage3_iter0();
    void thread_ap_block_state7_pp0_stage0_iter1();
    void thread_ap_condition_106();
    void thread_ap_condition_121();
    void thread_ap_condition_211();
    void thread_ap_condition_225();
    void thread_ap_condition_429();
    void thread_ap_condition_435();
    void thread_ap_condition_439();
    void thread_ap_condition_441();
    void thread_ap_condition_444();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_i_i_i_i_i_phi_fu_185_p4();
    void thread_ap_phi_mux_p_094_1_i_i_i_i_i_phi_fu_261_p4();
    void thread_ap_phi_mux_p_098_3_1_i_i_i_i_i_phi_fu_196_p4();
    void thread_ap_phi_mux_p_098_3_2_i_i_i_i_i_phi_fu_206_p4();
    void thread_ap_phi_mux_p_098_3_3_i_i_i_i_i_phi_fu_217_p4();
    void thread_ap_phi_reg_pp0_iter0_p_1_3_i_i_i_i_i_reg_246();
    void thread_ap_predicate_op54_read_state3();
    void thread_ap_predicate_op59_read_state4();
    void thread_ap_predicate_op65_read_state5();
    void thread_ap_predicate_op70_read_state6();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_axi_word_V_3_i_i_i_i_fu_374_p5();
    void thread_axis_V_V_TDATA_blk_n();
    void thread_axis_V_V_TREADY();
    void thread_cache_V1_address0();
    void thread_cache_V1_ce0();
    void thread_cache_V1_d0();
    void thread_cache_V1_we0();
    void thread_data_length_V_1_1_i_s_fu_338_p2();
    void thread_data_length_V_1_2_i_s_fu_350_p2();
    void thread_data_length_V_1_3_i_s_fu_362_p2();
    void thread_data_length_V_1_i_i_s_fu_326_p2();
    void thread_exitcond1_i_i_i_i_i_fu_305_p2();
    void thread_final_burst_length_V_4_fu_293_p3();
    void thread_i_fu_311_p2();
    void thread_lhs_V_cast_i_i_i_i_i_fu_273_p1();
    void thread_r_V_fu_277_p2();
    void thread_rx_buffer_V_offset1_out_blk_n();
    void thread_rx_buffer_V_offset1_out_din();
    void thread_rx_buffer_V_offset1_out_write();
    void thread_rx_buffer_V_offset_out_blk_n();
    void thread_rx_buffer_V_offset_out_din();
    void thread_rx_buffer_V_offset_out_write();
    void thread_tmp_5_i_i_i_i_i_fu_320_p2();
    void thread_tmp_6_1_i_i_i_i_i_fu_332_p2();
    void thread_tmp_6_2_i_i_i_i_i_fu_344_p2();
    void thread_tmp_6_3_i_i_i_i_i_fu_356_p2();
    void thread_tmp_7_i_i_i_i_i_fu_386_p1();
    void thread_tmp_cast_i_i_i_i_i_fu_283_p1();
    void thread_tmp_fu_269_p1();
    void thread_tmp_i_i_i_i_i_fu_287_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
