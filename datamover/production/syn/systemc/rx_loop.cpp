// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "rx_loop.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic rx_loop::ap_const_logic_0 = sc_dt::Log_0;
const sc_logic rx_loop::ap_const_logic_1 = sc_dt::Log_1;
const bool rx_loop::ap_const_boolean_1 = true;
const sc_lv<12> rx_loop::ap_const_lv12_0 = "000000000000";
const sc_lv<12> rx_loop::ap_const_lv12_1 = "1";
const sc_lv<64> rx_loop::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<64> rx_loop::ap_const_lv64_1 = "1";
const sc_lv<1> rx_loop::ap_const_lv1_0 = "0";
const sc_lv<1> rx_loop::ap_const_lv1_1 = "1";
const sc_lv<2> rx_loop::ap_const_lv2_0 = "00";
const sc_lv<2> rx_loop::ap_const_lv2_1 = "1";
const sc_lv<32> rx_loop::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<3> rx_loop::ap_const_lv3_0 = "000";
const sc_lv<4> rx_loop::ap_const_lv4_0 = "0000";

rx_loop::rx_loop(sc_module_name name) : sc_module(name), mVcdFile(0) {
    dataflow_in_loop_U0 = new dataflow_in_loop("dataflow_in_loop_U0");
    dataflow_in_loop_U0->ap_clk(ap_clk);
    dataflow_in_loop_U0->ap_rst(ap_rst);
    dataflow_in_loop_U0->axis_V_V_TDATA(axis_V_V_TDATA);
    dataflow_in_loop_U0->loop_count_V(loop_count_V);
    dataflow_in_loop_U0->final_burst_length_V(final_burst_length_V);
    dataflow_in_loop_U0->val_assign(loop_dataflow_input_count);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWVALID(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWVALID);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWREADY(m_axi_rx_buffer_V_AWREADY);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWADDR(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWADDR);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWID(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWID);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWLEN(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWLEN);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWSIZE(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWSIZE);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWBURST(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWBURST);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWLOCK(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWLOCK);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWCACHE(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWCACHE);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWPROT(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWPROT);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWQOS(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWQOS);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWREGION(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWREGION);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_AWUSER(dataflow_in_loop_U0_m_axi_rx_buffer_V_AWUSER);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_WVALID(dataflow_in_loop_U0_m_axi_rx_buffer_V_WVALID);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_WREADY(m_axi_rx_buffer_V_WREADY);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_WDATA(dataflow_in_loop_U0_m_axi_rx_buffer_V_WDATA);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_WSTRB(dataflow_in_loop_U0_m_axi_rx_buffer_V_WSTRB);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_WLAST(dataflow_in_loop_U0_m_axi_rx_buffer_V_WLAST);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_WID(dataflow_in_loop_U0_m_axi_rx_buffer_V_WID);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_WUSER(dataflow_in_loop_U0_m_axi_rx_buffer_V_WUSER);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARVALID(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARVALID);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARREADY(ap_var_for_const0);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARADDR(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARADDR);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARID(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARID);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARLEN(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARLEN);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARSIZE(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARSIZE);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARBURST(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARBURST);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARLOCK(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARLOCK);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARCACHE(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARCACHE);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARPROT(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARPROT);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARQOS(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARQOS);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARREGION(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARREGION);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_ARUSER(dataflow_in_loop_U0_m_axi_rx_buffer_V_ARUSER);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_RVALID(ap_var_for_const0);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_RREADY(dataflow_in_loop_U0_m_axi_rx_buffer_V_RREADY);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_RDATA(ap_var_for_const1);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_RLAST(ap_var_for_const0);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_RID(ap_var_for_const2);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_RUSER(ap_var_for_const2);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_RRESP(ap_var_for_const3);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_BVALID(m_axi_rx_buffer_V_BVALID);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_BREADY(dataflow_in_loop_U0_m_axi_rx_buffer_V_BREADY);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_BRESP(m_axi_rx_buffer_V_BRESP);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_BID(m_axi_rx_buffer_V_BID);
    dataflow_in_loop_U0->m_axi_rx_buffer_V_BUSER(m_axi_rx_buffer_V_BUSER);
    dataflow_in_loop_U0->rx_buffer_V_offset(rx_buffer_V_offset);
    dataflow_in_loop_U0->rx_buffer_V_offset1(rx_buffer_V_offset1);
    dataflow_in_loop_U0->axis_V_V_TVALID(axis_V_V_TVALID);
    dataflow_in_loop_U0->axis_V_V_TREADY(dataflow_in_loop_U0_axis_V_V_TREADY);
    dataflow_in_loop_U0->loop_count_V_ap_vld(loop_count_V_ap_vld);
    dataflow_in_loop_U0->final_burst_length_V_ap_vld(final_burst_length_V_ap_vld);
    dataflow_in_loop_U0->val_assign_ap_vld(ap_var_for_const0);
    dataflow_in_loop_U0->rx_buffer_V_offset1_ap_vld(rx_buffer_V_offset1_ap_vld);
    dataflow_in_loop_U0->rx_buffer_V_offset_ap_vld(rx_buffer_V_offset_ap_vld);
    dataflow_in_loop_U0->ap_done(dataflow_in_loop_U0_ap_done);
    dataflow_in_loop_U0->ap_start(dataflow_in_loop_U0_ap_start);
    dataflow_in_loop_U0->ap_ready(dataflow_in_loop_U0_ap_ready);
    dataflow_in_loop_U0->ap_idle(dataflow_in_loop_U0_ap_idle);
    dataflow_in_loop_U0->ap_continue(dataflow_in_loop_U0_ap_continue);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( loop_count_V );
    sensitive << ( loop_dataflow_output_count );
    sensitive << ( loop_dataflow_busy );

    SC_METHOD(thread_ap_idle);
    sensitive << ( dataflow_in_loop_U0_ap_idle );

    SC_METHOD(thread_ap_ready);
    sensitive << ( loop_count_V );
    sensitive << ( loop_dataflow_input_count );

    SC_METHOD(thread_ap_sync_continue);
    sensitive << ( ap_continue );

    SC_METHOD(thread_ap_sync_done);
    sensitive << ( dataflow_in_loop_U0_ap_done );

    SC_METHOD(thread_ap_sync_ready);
    sensitive << ( dataflow_in_loop_U0_ap_ready );

    SC_METHOD(thread_axis_V_V_TREADY);
    sensitive << ( dataflow_in_loop_U0_axis_V_V_TREADY );

    SC_METHOD(thread_dataflow_in_loop_U0_ap_continue);

    SC_METHOD(thread_dataflow_in_loop_U0_ap_start);
    sensitive << ( loop_count_V );
    sensitive << ( loop_dataflow_enable );
    sensitive << ( loop_dataflow_input_count );

    SC_METHOD(thread_dataflow_in_loop_U0_start_full_n);

    SC_METHOD(thread_dataflow_in_loop_U0_start_write);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARADDR);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARBURST);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARCACHE);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARID);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARLEN);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARLOCK);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARPROT);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARQOS);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARREGION);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARSIZE);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARUSER);

    SC_METHOD(thread_m_axi_rx_buffer_V_ARVALID);

    SC_METHOD(thread_m_axi_rx_buffer_V_AWADDR);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWADDR );

    SC_METHOD(thread_m_axi_rx_buffer_V_AWBURST);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWBURST );

    SC_METHOD(thread_m_axi_rx_buffer_V_AWCACHE);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWCACHE );

    SC_METHOD(thread_m_axi_rx_buffer_V_AWID);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWID );

    SC_METHOD(thread_m_axi_rx_buffer_V_AWLEN);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWLEN );

    SC_METHOD(thread_m_axi_rx_buffer_V_AWLOCK);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWLOCK );

    SC_METHOD(thread_m_axi_rx_buffer_V_AWPROT);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWPROT );

    SC_METHOD(thread_m_axi_rx_buffer_V_AWQOS);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWQOS );

    SC_METHOD(thread_m_axi_rx_buffer_V_AWREGION);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWREGION );

    SC_METHOD(thread_m_axi_rx_buffer_V_AWSIZE);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWSIZE );

    SC_METHOD(thread_m_axi_rx_buffer_V_AWUSER);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWUSER );

    SC_METHOD(thread_m_axi_rx_buffer_V_AWVALID);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_AWVALID );

    SC_METHOD(thread_m_axi_rx_buffer_V_BREADY);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_BREADY );

    SC_METHOD(thread_m_axi_rx_buffer_V_RREADY);

    SC_METHOD(thread_m_axi_rx_buffer_V_WDATA);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_WDATA );

    SC_METHOD(thread_m_axi_rx_buffer_V_WID);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_WID );

    SC_METHOD(thread_m_axi_rx_buffer_V_WLAST);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_WLAST );

    SC_METHOD(thread_m_axi_rx_buffer_V_WSTRB);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_WSTRB );

    SC_METHOD(thread_m_axi_rx_buffer_V_WUSER);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_WUSER );

    SC_METHOD(thread_m_axi_rx_buffer_V_WVALID);
    sensitive << ( dataflow_in_loop_U0_m_axi_rx_buffer_V_WVALID );

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const1);

    SC_THREAD(thread_ap_var_for_const2);

    SC_THREAD(thread_ap_var_for_const3);

    loop_dataflow_enable = SC_LOGIC_0;
    loop_dataflow_input_count = "000000000000";
    loop_dataflow_output_count = "000000000000";
    loop_dataflow_busy = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "rx_loop_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, axis_V_V_TDATA, "(port)axis_V_V_TDATA");
    sc_trace(mVcdFile, loop_count_V, "(port)loop_count_V");
    sc_trace(mVcdFile, final_burst_length_V, "(port)final_burst_length_V");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWVALID, "(port)m_axi_rx_buffer_V_AWVALID");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWREADY, "(port)m_axi_rx_buffer_V_AWREADY");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWADDR, "(port)m_axi_rx_buffer_V_AWADDR");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWID, "(port)m_axi_rx_buffer_V_AWID");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWLEN, "(port)m_axi_rx_buffer_V_AWLEN");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWSIZE, "(port)m_axi_rx_buffer_V_AWSIZE");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWBURST, "(port)m_axi_rx_buffer_V_AWBURST");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWLOCK, "(port)m_axi_rx_buffer_V_AWLOCK");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWCACHE, "(port)m_axi_rx_buffer_V_AWCACHE");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWPROT, "(port)m_axi_rx_buffer_V_AWPROT");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWQOS, "(port)m_axi_rx_buffer_V_AWQOS");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWREGION, "(port)m_axi_rx_buffer_V_AWREGION");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_AWUSER, "(port)m_axi_rx_buffer_V_AWUSER");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_WVALID, "(port)m_axi_rx_buffer_V_WVALID");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_WREADY, "(port)m_axi_rx_buffer_V_WREADY");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_WDATA, "(port)m_axi_rx_buffer_V_WDATA");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_WSTRB, "(port)m_axi_rx_buffer_V_WSTRB");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_WLAST, "(port)m_axi_rx_buffer_V_WLAST");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_WID, "(port)m_axi_rx_buffer_V_WID");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_WUSER, "(port)m_axi_rx_buffer_V_WUSER");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARVALID, "(port)m_axi_rx_buffer_V_ARVALID");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARREADY, "(port)m_axi_rx_buffer_V_ARREADY");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARADDR, "(port)m_axi_rx_buffer_V_ARADDR");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARID, "(port)m_axi_rx_buffer_V_ARID");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARLEN, "(port)m_axi_rx_buffer_V_ARLEN");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARSIZE, "(port)m_axi_rx_buffer_V_ARSIZE");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARBURST, "(port)m_axi_rx_buffer_V_ARBURST");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARLOCK, "(port)m_axi_rx_buffer_V_ARLOCK");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARCACHE, "(port)m_axi_rx_buffer_V_ARCACHE");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARPROT, "(port)m_axi_rx_buffer_V_ARPROT");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARQOS, "(port)m_axi_rx_buffer_V_ARQOS");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARREGION, "(port)m_axi_rx_buffer_V_ARREGION");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_ARUSER, "(port)m_axi_rx_buffer_V_ARUSER");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_RVALID, "(port)m_axi_rx_buffer_V_RVALID");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_RREADY, "(port)m_axi_rx_buffer_V_RREADY");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_RDATA, "(port)m_axi_rx_buffer_V_RDATA");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_RLAST, "(port)m_axi_rx_buffer_V_RLAST");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_RID, "(port)m_axi_rx_buffer_V_RID");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_RUSER, "(port)m_axi_rx_buffer_V_RUSER");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_RRESP, "(port)m_axi_rx_buffer_V_RRESP");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_BVALID, "(port)m_axi_rx_buffer_V_BVALID");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_BREADY, "(port)m_axi_rx_buffer_V_BREADY");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_BRESP, "(port)m_axi_rx_buffer_V_BRESP");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_BID, "(port)m_axi_rx_buffer_V_BID");
    sc_trace(mVcdFile, m_axi_rx_buffer_V_BUSER, "(port)m_axi_rx_buffer_V_BUSER");
    sc_trace(mVcdFile, rx_buffer_V_offset, "(port)rx_buffer_V_offset");
    sc_trace(mVcdFile, rx_buffer_V_offset1, "(port)rx_buffer_V_offset1");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, axis_V_V_TVALID, "(port)axis_V_V_TVALID");
    sc_trace(mVcdFile, axis_V_V_TREADY, "(port)axis_V_V_TREADY");
    sc_trace(mVcdFile, loop_count_V_ap_vld, "(port)loop_count_V_ap_vld");
    sc_trace(mVcdFile, final_burst_length_V_ap_vld, "(port)final_burst_length_V_ap_vld");
    sc_trace(mVcdFile, rx_buffer_V_offset_ap_vld, "(port)rx_buffer_V_offset_ap_vld");
    sc_trace(mVcdFile, rx_buffer_V_offset1_ap_vld, "(port)rx_buffer_V_offset1_ap_vld");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWVALID, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWVALID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWADDR, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWADDR");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWID, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWLEN, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWLEN");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWSIZE, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWSIZE");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWBURST, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWBURST");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWLOCK, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWLOCK");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWCACHE, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWCACHE");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWPROT, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWPROT");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWQOS, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWQOS");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWREGION, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWREGION");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_AWUSER, "dataflow_in_loop_U0_m_axi_rx_buffer_V_AWUSER");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_WVALID, "dataflow_in_loop_U0_m_axi_rx_buffer_V_WVALID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_WDATA, "dataflow_in_loop_U0_m_axi_rx_buffer_V_WDATA");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_WSTRB, "dataflow_in_loop_U0_m_axi_rx_buffer_V_WSTRB");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_WLAST, "dataflow_in_loop_U0_m_axi_rx_buffer_V_WLAST");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_WID, "dataflow_in_loop_U0_m_axi_rx_buffer_V_WID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_WUSER, "dataflow_in_loop_U0_m_axi_rx_buffer_V_WUSER");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARVALID, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARVALID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARADDR, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARADDR");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARID, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARID");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARLEN, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARLEN");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARSIZE, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARSIZE");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARBURST, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARBURST");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARLOCK, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARLOCK");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARCACHE, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARCACHE");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARPROT, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARPROT");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARQOS, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARQOS");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARREGION, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARREGION");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_ARUSER, "dataflow_in_loop_U0_m_axi_rx_buffer_V_ARUSER");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_RREADY, "dataflow_in_loop_U0_m_axi_rx_buffer_V_RREADY");
    sc_trace(mVcdFile, dataflow_in_loop_U0_m_axi_rx_buffer_V_BREADY, "dataflow_in_loop_U0_m_axi_rx_buffer_V_BREADY");
    sc_trace(mVcdFile, dataflow_in_loop_U0_axis_V_V_TREADY, "dataflow_in_loop_U0_axis_V_V_TREADY");
    sc_trace(mVcdFile, dataflow_in_loop_U0_ap_done, "dataflow_in_loop_U0_ap_done");
    sc_trace(mVcdFile, dataflow_in_loop_U0_ap_start, "dataflow_in_loop_U0_ap_start");
    sc_trace(mVcdFile, dataflow_in_loop_U0_ap_ready, "dataflow_in_loop_U0_ap_ready");
    sc_trace(mVcdFile, dataflow_in_loop_U0_ap_idle, "dataflow_in_loop_U0_ap_idle");
    sc_trace(mVcdFile, dataflow_in_loop_U0_ap_continue, "dataflow_in_loop_U0_ap_continue");
    sc_trace(mVcdFile, ap_sync_continue, "ap_sync_continue");
    sc_trace(mVcdFile, ap_sync_done, "ap_sync_done");
    sc_trace(mVcdFile, ap_sync_ready, "ap_sync_ready");
    sc_trace(mVcdFile, loop_dataflow_enable, "loop_dataflow_enable");
    sc_trace(mVcdFile, loop_dataflow_input_count, "loop_dataflow_input_count");
    sc_trace(mVcdFile, loop_dataflow_output_count, "loop_dataflow_output_count");
    sc_trace(mVcdFile, loop_dataflow_busy, "loop_dataflow_busy");
    sc_trace(mVcdFile, dataflow_in_loop_U0_start_full_n, "dataflow_in_loop_U0_start_full_n");
    sc_trace(mVcdFile, dataflow_in_loop_U0_start_write, "dataflow_in_loop_U0_start_write");
#endif

    }
}

rx_loop::~rx_loop() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete dataflow_in_loop_U0;
}

void rx_loop::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_0;
}

void rx_loop::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv64_0;
}

void rx_loop::thread_ap_var_for_const2() {
    ap_var_for_const2 = ap_const_lv1_0;
}

void rx_loop::thread_ap_var_for_const3() {
    ap_var_for_const3 = ap_const_lv2_0;
}

void rx_loop::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        loop_dataflow_busy = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read()) && 
             esl_seteq<1,12,12>(loop_count_V.read(), loop_dataflow_output_count.read()))) {
            loop_dataflow_busy = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read())) {
            loop_dataflow_busy = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        loop_dataflow_enable = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(loop_dataflow_enable.read(), ap_const_logic_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()))) {
            loop_dataflow_enable = ap_const_logic_1;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, loop_dataflow_enable.read()) && 
                    esl_seteq<1,12,12>(loop_count_V.read(), loop_dataflow_input_count.read()))) {
            loop_dataflow_enable = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        loop_dataflow_input_count = ap_const_lv12_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, loop_dataflow_enable.read()) && 
             esl_seteq<1,12,12>(loop_count_V.read(), loop_dataflow_input_count.read()))) {
            loop_dataflow_input_count = ap_const_lv12_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, loop_dataflow_enable.read()) && 
                    esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_ready.read(), ap_const_logic_1))) {
            loop_dataflow_input_count = (!loop_dataflow_input_count.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_biguint<12>(loop_dataflow_input_count.read()) + sc_biguint<12>(ap_const_lv12_1));
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        loop_dataflow_output_count = ap_const_lv12_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read()) && 
             esl_seteq<1,12,12>(loop_count_V.read(), loop_dataflow_output_count.read()))) {
            loop_dataflow_output_count = ap_const_lv12_0;
        } else if (esl_seteq<1,1,1>(dataflow_in_loop_U0_ap_done.read(), ap_const_logic_1)) {
            loop_dataflow_output_count = (!loop_dataflow_output_count.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_biguint<12>(loop_dataflow_output_count.read()) + sc_biguint<12>(ap_const_lv12_1));
        }
    }
}

void rx_loop::thread_ap_done() {
    if ((esl_seteq<1,12,12>(loop_count_V.read(), loop_dataflow_output_count.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, loop_dataflow_busy.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void rx_loop::thread_ap_idle() {
    ap_idle = dataflow_in_loop_U0_ap_idle.read();
}

void rx_loop::thread_ap_ready() {
    if (esl_seteq<1,12,12>(loop_count_V.read(), loop_dataflow_input_count.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void rx_loop::thread_ap_sync_continue() {
    ap_sync_continue = ap_continue.read();
}

void rx_loop::thread_ap_sync_done() {
    ap_sync_done = dataflow_in_loop_U0_ap_done.read();
}

void rx_loop::thread_ap_sync_ready() {
    ap_sync_ready = dataflow_in_loop_U0_ap_ready.read();
}

void rx_loop::thread_axis_V_V_TREADY() {
    axis_V_V_TREADY = dataflow_in_loop_U0_axis_V_V_TREADY.read();
}

void rx_loop::thread_dataflow_in_loop_U0_ap_continue() {
    dataflow_in_loop_U0_ap_continue = ap_const_logic_1;
}

void rx_loop::thread_dataflow_in_loop_U0_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, loop_dataflow_enable.read()) && 
         !esl_seteq<1,12,12>(loop_count_V.read(), loop_dataflow_input_count.read()))) {
        dataflow_in_loop_U0_ap_start = ap_const_logic_1;
    } else {
        dataflow_in_loop_U0_ap_start = ap_const_logic_0;
    }
}

void rx_loop::thread_dataflow_in_loop_U0_start_full_n() {
    dataflow_in_loop_U0_start_full_n = ap_const_logic_1;
}

void rx_loop::thread_dataflow_in_loop_U0_start_write() {
    dataflow_in_loop_U0_start_write = ap_const_logic_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARADDR() {
    m_axi_rx_buffer_V_ARADDR = ap_const_lv32_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARBURST() {
    m_axi_rx_buffer_V_ARBURST = ap_const_lv2_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARCACHE() {
    m_axi_rx_buffer_V_ARCACHE = ap_const_lv4_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARID() {
    m_axi_rx_buffer_V_ARID = ap_const_lv1_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARLEN() {
    m_axi_rx_buffer_V_ARLEN = ap_const_lv32_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARLOCK() {
    m_axi_rx_buffer_V_ARLOCK = ap_const_lv2_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARPROT() {
    m_axi_rx_buffer_V_ARPROT = ap_const_lv3_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARQOS() {
    m_axi_rx_buffer_V_ARQOS = ap_const_lv4_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARREGION() {
    m_axi_rx_buffer_V_ARREGION = ap_const_lv4_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARSIZE() {
    m_axi_rx_buffer_V_ARSIZE = ap_const_lv3_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARUSER() {
    m_axi_rx_buffer_V_ARUSER = ap_const_lv1_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_ARVALID() {
    m_axi_rx_buffer_V_ARVALID = ap_const_logic_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_AWADDR() {
    m_axi_rx_buffer_V_AWADDR = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWADDR.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_AWBURST() {
    m_axi_rx_buffer_V_AWBURST = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWBURST.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_AWCACHE() {
    m_axi_rx_buffer_V_AWCACHE = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWCACHE.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_AWID() {
    m_axi_rx_buffer_V_AWID = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWID.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_AWLEN() {
    m_axi_rx_buffer_V_AWLEN = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWLEN.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_AWLOCK() {
    m_axi_rx_buffer_V_AWLOCK = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWLOCK.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_AWPROT() {
    m_axi_rx_buffer_V_AWPROT = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWPROT.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_AWQOS() {
    m_axi_rx_buffer_V_AWQOS = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWQOS.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_AWREGION() {
    m_axi_rx_buffer_V_AWREGION = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWREGION.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_AWSIZE() {
    m_axi_rx_buffer_V_AWSIZE = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWSIZE.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_AWUSER() {
    m_axi_rx_buffer_V_AWUSER = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWUSER.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_AWVALID() {
    m_axi_rx_buffer_V_AWVALID = dataflow_in_loop_U0_m_axi_rx_buffer_V_AWVALID.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_BREADY() {
    m_axi_rx_buffer_V_BREADY = dataflow_in_loop_U0_m_axi_rx_buffer_V_BREADY.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_RREADY() {
    m_axi_rx_buffer_V_RREADY = ap_const_logic_0;
}

void rx_loop::thread_m_axi_rx_buffer_V_WDATA() {
    m_axi_rx_buffer_V_WDATA = dataflow_in_loop_U0_m_axi_rx_buffer_V_WDATA.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_WID() {
    m_axi_rx_buffer_V_WID = dataflow_in_loop_U0_m_axi_rx_buffer_V_WID.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_WLAST() {
    m_axi_rx_buffer_V_WLAST = dataflow_in_loop_U0_m_axi_rx_buffer_V_WLAST.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_WSTRB() {
    m_axi_rx_buffer_V_WSTRB = dataflow_in_loop_U0_m_axi_rx_buffer_V_WSTRB.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_WUSER() {
    m_axi_rx_buffer_V_WUSER = dataflow_in_loop_U0_m_axi_rx_buffer_V_WUSER.read();
}

void rx_loop::thread_m_axi_rx_buffer_V_WVALID() {
    m_axi_rx_buffer_V_WVALID = dataflow_in_loop_U0_m_axi_rx_buffer_V_WVALID.read();
}

}

