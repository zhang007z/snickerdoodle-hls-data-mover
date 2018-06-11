// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dataflow_in_loop_HH_
#define _dataflow_in_loop_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "rx_axis_words25.h"
#include "write_burst.h"
#include "dataflow_in_loop_cud.h"
#include "fifo_w29_d2_A.h"
#include "fifo_w21_d2_A.h"

namespace ap_rtl {

struct dataflow_in_loop : public sc_module {
    // Port declarations 63
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<8> > axis_V_V_TDATA;
    sc_in< sc_lv<13> > loop_count_V;
    sc_in< sc_lv<13> > final_burst_length_V;
    sc_in< sc_lv<13> > val_assign;
    sc_out< sc_logic > m_axi_rx_buffer_V_AWVALID;
    sc_in< sc_logic > m_axi_rx_buffer_V_AWREADY;
    sc_out< sc_lv<32> > m_axi_rx_buffer_V_AWADDR;
    sc_out< sc_lv<1> > m_axi_rx_buffer_V_AWID;
    sc_out< sc_lv<32> > m_axi_rx_buffer_V_AWLEN;
    sc_out< sc_lv<3> > m_axi_rx_buffer_V_AWSIZE;
    sc_out< sc_lv<2> > m_axi_rx_buffer_V_AWBURST;
    sc_out< sc_lv<2> > m_axi_rx_buffer_V_AWLOCK;
    sc_out< sc_lv<4> > m_axi_rx_buffer_V_AWCACHE;
    sc_out< sc_lv<3> > m_axi_rx_buffer_V_AWPROT;
    sc_out< sc_lv<4> > m_axi_rx_buffer_V_AWQOS;
    sc_out< sc_lv<4> > m_axi_rx_buffer_V_AWREGION;
    sc_out< sc_lv<1> > m_axi_rx_buffer_V_AWUSER;
    sc_out< sc_logic > m_axi_rx_buffer_V_WVALID;
    sc_in< sc_logic > m_axi_rx_buffer_V_WREADY;
    sc_out< sc_lv<64> > m_axi_rx_buffer_V_WDATA;
    sc_out< sc_lv<8> > m_axi_rx_buffer_V_WSTRB;
    sc_out< sc_logic > m_axi_rx_buffer_V_WLAST;
    sc_out< sc_lv<1> > m_axi_rx_buffer_V_WID;
    sc_out< sc_lv<1> > m_axi_rx_buffer_V_WUSER;
    sc_out< sc_logic > m_axi_rx_buffer_V_ARVALID;
    sc_in< sc_logic > m_axi_rx_buffer_V_ARREADY;
    sc_out< sc_lv<32> > m_axi_rx_buffer_V_ARADDR;
    sc_out< sc_lv<1> > m_axi_rx_buffer_V_ARID;
    sc_out< sc_lv<32> > m_axi_rx_buffer_V_ARLEN;
    sc_out< sc_lv<3> > m_axi_rx_buffer_V_ARSIZE;
    sc_out< sc_lv<2> > m_axi_rx_buffer_V_ARBURST;
    sc_out< sc_lv<2> > m_axi_rx_buffer_V_ARLOCK;
    sc_out< sc_lv<4> > m_axi_rx_buffer_V_ARCACHE;
    sc_out< sc_lv<3> > m_axi_rx_buffer_V_ARPROT;
    sc_out< sc_lv<4> > m_axi_rx_buffer_V_ARQOS;
    sc_out< sc_lv<4> > m_axi_rx_buffer_V_ARREGION;
    sc_out< sc_lv<1> > m_axi_rx_buffer_V_ARUSER;
    sc_in< sc_logic > m_axi_rx_buffer_V_RVALID;
    sc_out< sc_logic > m_axi_rx_buffer_V_RREADY;
    sc_in< sc_lv<64> > m_axi_rx_buffer_V_RDATA;
    sc_in< sc_logic > m_axi_rx_buffer_V_RLAST;
    sc_in< sc_lv<1> > m_axi_rx_buffer_V_RID;
    sc_in< sc_lv<1> > m_axi_rx_buffer_V_RUSER;
    sc_in< sc_lv<2> > m_axi_rx_buffer_V_RRESP;
    sc_in< sc_logic > m_axi_rx_buffer_V_BVALID;
    sc_out< sc_logic > m_axi_rx_buffer_V_BREADY;
    sc_in< sc_lv<2> > m_axi_rx_buffer_V_BRESP;
    sc_in< sc_lv<1> > m_axi_rx_buffer_V_BID;
    sc_in< sc_lv<1> > m_axi_rx_buffer_V_BUSER;
    sc_in< sc_lv<29> > rx_buffer_V_offset;
    sc_in< sc_logic > axis_V_V_TVALID;
    sc_out< sc_logic > axis_V_V_TREADY;
    sc_in< sc_logic > loop_count_V_ap_vld;
    sc_in< sc_logic > final_burst_length_V_ap_vld;
    sc_in< sc_logic > val_assign_ap_vld;
    sc_in< sc_logic > rx_buffer_V_offset_ap_vld;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > ap_idle;
    sc_in< sc_logic > ap_continue;
    sc_signal< sc_logic > ap_var_for_const2;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<64> > ap_var_for_const1;
    sc_signal< sc_lv<1> > ap_var_for_const3;
    sc_signal< sc_lv<2> > ap_var_for_const4;


    // Module declarations
    dataflow_in_loop(sc_module_name name);
    SC_HAS_PROCESS(dataflow_in_loop);

    ~dataflow_in_loop();

    sc_trace_file* mVcdFile;

    dataflow_in_loop_cud* cache_V_U;
    rx_axis_words25* rx_axis_words25_U0;
    write_burst* write_burst_U0;
    fifo_w29_d2_A* rx_buffer_V_offset_c_U;
    fifo_w21_d2_A* buffer_offset_V_U;
    sc_signal< sc_lv<64> > cache_V_i_q0;
    sc_signal< sc_lv<64> > cache_V_t_q0;
    sc_signal< sc_logic > rx_axis_words25_U0_ap_start;
    sc_signal< sc_logic > rx_axis_words25_U0_ap_done;
    sc_signal< sc_logic > rx_axis_words25_U0_ap_continue;
    sc_signal< sc_logic > rx_axis_words25_U0_ap_idle;
    sc_signal< sc_logic > rx_axis_words25_U0_ap_ready;
    sc_signal< sc_logic > rx_axis_words25_U0_axis_V_V_TREADY;
    sc_signal< sc_lv<9> > rx_axis_words25_U0_cache_V_address0;
    sc_signal< sc_logic > rx_axis_words25_U0_cache_V_ce0;
    sc_signal< sc_logic > rx_axis_words25_U0_cache_V_we0;
    sc_signal< sc_lv<64> > rx_axis_words25_U0_cache_V_d0;
    sc_signal< sc_lv<29> > rx_axis_words25_U0_rx_buffer_V_offset_out_din;
    sc_signal< sc_logic > rx_axis_words25_U0_rx_buffer_V_offset_out_write;
    sc_signal< sc_lv<21> > rx_axis_words25_U0_ap_return;
    sc_signal< sc_logic > ap_channel_done_buffer_offset_V;
    sc_signal< sc_logic > buffer_offset_V_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_buffer_offset_V;
    sc_signal< sc_logic > ap_sync_channel_write_buffer_offset_V;
    sc_signal< sc_logic > ap_channel_done_cache_V;
    sc_signal< sc_logic > rx_axis_words25_U0_cache_V_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_cache_V;
    sc_signal< sc_logic > ap_sync_channel_write_cache_V;
    sc_signal< sc_logic > write_burst_U0_ap_start;
    sc_signal< sc_logic > write_burst_U0_ap_done;
    sc_signal< sc_logic > write_burst_U0_ap_continue;
    sc_signal< sc_logic > write_burst_U0_ap_idle;
    sc_signal< sc_logic > write_burst_U0_ap_ready;
    sc_signal< sc_lv<9> > write_burst_U0_cache_V_address0;
    sc_signal< sc_logic > write_burst_U0_cache_V_ce0;
    sc_signal< sc_logic > write_burst_U0_m_axi_rx_buffer_V_AWVALID;
    sc_signal< sc_lv<32> > write_burst_U0_m_axi_rx_buffer_V_AWADDR;
    sc_signal< sc_lv<1> > write_burst_U0_m_axi_rx_buffer_V_AWID;
    sc_signal< sc_lv<32> > write_burst_U0_m_axi_rx_buffer_V_AWLEN;
    sc_signal< sc_lv<3> > write_burst_U0_m_axi_rx_buffer_V_AWSIZE;
    sc_signal< sc_lv<2> > write_burst_U0_m_axi_rx_buffer_V_AWBURST;
    sc_signal< sc_lv<2> > write_burst_U0_m_axi_rx_buffer_V_AWLOCK;
    sc_signal< sc_lv<4> > write_burst_U0_m_axi_rx_buffer_V_AWCACHE;
    sc_signal< sc_lv<3> > write_burst_U0_m_axi_rx_buffer_V_AWPROT;
    sc_signal< sc_lv<4> > write_burst_U0_m_axi_rx_buffer_V_AWQOS;
    sc_signal< sc_lv<4> > write_burst_U0_m_axi_rx_buffer_V_AWREGION;
    sc_signal< sc_lv<1> > write_burst_U0_m_axi_rx_buffer_V_AWUSER;
    sc_signal< sc_logic > write_burst_U0_m_axi_rx_buffer_V_WVALID;
    sc_signal< sc_lv<64> > write_burst_U0_m_axi_rx_buffer_V_WDATA;
    sc_signal< sc_lv<8> > write_burst_U0_m_axi_rx_buffer_V_WSTRB;
    sc_signal< sc_logic > write_burst_U0_m_axi_rx_buffer_V_WLAST;
    sc_signal< sc_lv<1> > write_burst_U0_m_axi_rx_buffer_V_WID;
    sc_signal< sc_lv<1> > write_burst_U0_m_axi_rx_buffer_V_WUSER;
    sc_signal< sc_logic > write_burst_U0_m_axi_rx_buffer_V_ARVALID;
    sc_signal< sc_lv<32> > write_burst_U0_m_axi_rx_buffer_V_ARADDR;
    sc_signal< sc_lv<1> > write_burst_U0_m_axi_rx_buffer_V_ARID;
    sc_signal< sc_lv<32> > write_burst_U0_m_axi_rx_buffer_V_ARLEN;
    sc_signal< sc_lv<3> > write_burst_U0_m_axi_rx_buffer_V_ARSIZE;
    sc_signal< sc_lv<2> > write_burst_U0_m_axi_rx_buffer_V_ARBURST;
    sc_signal< sc_lv<2> > write_burst_U0_m_axi_rx_buffer_V_ARLOCK;
    sc_signal< sc_lv<4> > write_burst_U0_m_axi_rx_buffer_V_ARCACHE;
    sc_signal< sc_lv<3> > write_burst_U0_m_axi_rx_buffer_V_ARPROT;
    sc_signal< sc_lv<4> > write_burst_U0_m_axi_rx_buffer_V_ARQOS;
    sc_signal< sc_lv<4> > write_burst_U0_m_axi_rx_buffer_V_ARREGION;
    sc_signal< sc_lv<1> > write_burst_U0_m_axi_rx_buffer_V_ARUSER;
    sc_signal< sc_logic > write_burst_U0_m_axi_rx_buffer_V_RREADY;
    sc_signal< sc_logic > write_burst_U0_m_axi_rx_buffer_V_BREADY;
    sc_signal< sc_logic > write_burst_U0_rx_buffer_V_offset_read;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > cache_V_i_full_n;
    sc_signal< sc_logic > cache_V_t_empty_n;
    sc_signal< sc_logic > rx_buffer_V_offset_c_full_n;
    sc_signal< sc_lv<29> > rx_buffer_V_offset_c_dout;
    sc_signal< sc_logic > rx_buffer_V_offset_c_empty_n;
    sc_signal< sc_lv<21> > buffer_offset_V_dout;
    sc_signal< sc_logic > buffer_offset_V_empty_n;
    sc_signal< sc_logic > ap_sync_done;
    sc_signal< sc_logic > ap_sync_ready;
    sc_signal< sc_logic > rx_axis_words25_U0_start_full_n;
    sc_signal< sc_logic > rx_axis_words25_U0_start_write;
    sc_signal< sc_logic > write_burst_U0_start_full_n;
    sc_signal< sc_logic > write_burst_U0_start_write;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const4();
    void thread_ap_clk_no_reset_();
    void thread_ap_channel_done_buffer_offset_V();
    void thread_ap_channel_done_cache_V();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sync_channel_write_buffer_offset_V();
    void thread_ap_sync_channel_write_cache_V();
    void thread_ap_sync_continue();
    void thread_ap_sync_done();
    void thread_ap_sync_ready();
    void thread_axis_V_V_TREADY();
    void thread_m_axi_rx_buffer_V_ARADDR();
    void thread_m_axi_rx_buffer_V_ARBURST();
    void thread_m_axi_rx_buffer_V_ARCACHE();
    void thread_m_axi_rx_buffer_V_ARID();
    void thread_m_axi_rx_buffer_V_ARLEN();
    void thread_m_axi_rx_buffer_V_ARLOCK();
    void thread_m_axi_rx_buffer_V_ARPROT();
    void thread_m_axi_rx_buffer_V_ARQOS();
    void thread_m_axi_rx_buffer_V_ARREGION();
    void thread_m_axi_rx_buffer_V_ARSIZE();
    void thread_m_axi_rx_buffer_V_ARUSER();
    void thread_m_axi_rx_buffer_V_ARVALID();
    void thread_m_axi_rx_buffer_V_AWADDR();
    void thread_m_axi_rx_buffer_V_AWBURST();
    void thread_m_axi_rx_buffer_V_AWCACHE();
    void thread_m_axi_rx_buffer_V_AWID();
    void thread_m_axi_rx_buffer_V_AWLEN();
    void thread_m_axi_rx_buffer_V_AWLOCK();
    void thread_m_axi_rx_buffer_V_AWPROT();
    void thread_m_axi_rx_buffer_V_AWQOS();
    void thread_m_axi_rx_buffer_V_AWREGION();
    void thread_m_axi_rx_buffer_V_AWSIZE();
    void thread_m_axi_rx_buffer_V_AWUSER();
    void thread_m_axi_rx_buffer_V_AWVALID();
    void thread_m_axi_rx_buffer_V_BREADY();
    void thread_m_axi_rx_buffer_V_RREADY();
    void thread_m_axi_rx_buffer_V_WDATA();
    void thread_m_axi_rx_buffer_V_WID();
    void thread_m_axi_rx_buffer_V_WLAST();
    void thread_m_axi_rx_buffer_V_WSTRB();
    void thread_m_axi_rx_buffer_V_WUSER();
    void thread_m_axi_rx_buffer_V_WVALID();
    void thread_rx_axis_words25_U0_ap_continue();
    void thread_rx_axis_words25_U0_ap_start();
    void thread_rx_axis_words25_U0_cache_V_full_n();
    void thread_rx_axis_words25_U0_start_full_n();
    void thread_rx_axis_words25_U0_start_write();
    void thread_write_burst_U0_ap_continue();
    void thread_write_burst_U0_ap_start();
    void thread_write_burst_U0_start_full_n();
    void thread_write_burst_U0_start_write();
};

}

using namespace ap_rtl;

#endif
