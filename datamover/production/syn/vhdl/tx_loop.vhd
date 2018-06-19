-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.1
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity tx_loop is
port (
    axis_V_V_TDATA : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_tx_buffer_V_AWVALID : OUT STD_LOGIC;
    m_axi_tx_buffer_V_AWREADY : IN STD_LOGIC;
    m_axi_tx_buffer_V_AWADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_tx_buffer_V_AWID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_tx_buffer_V_AWLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_tx_buffer_V_AWSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_tx_buffer_V_AWBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_tx_buffer_V_AWLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_tx_buffer_V_AWCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_tx_buffer_V_AWPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_tx_buffer_V_AWQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_tx_buffer_V_AWREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_tx_buffer_V_AWUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_tx_buffer_V_WVALID : OUT STD_LOGIC;
    m_axi_tx_buffer_V_WREADY : IN STD_LOGIC;
    m_axi_tx_buffer_V_WDATA : OUT STD_LOGIC_VECTOR (63 downto 0);
    m_axi_tx_buffer_V_WSTRB : OUT STD_LOGIC_VECTOR (7 downto 0);
    m_axi_tx_buffer_V_WLAST : OUT STD_LOGIC;
    m_axi_tx_buffer_V_WID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_tx_buffer_V_WUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_tx_buffer_V_ARVALID : OUT STD_LOGIC;
    m_axi_tx_buffer_V_ARREADY : IN STD_LOGIC;
    m_axi_tx_buffer_V_ARADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_tx_buffer_V_ARID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_tx_buffer_V_ARLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_tx_buffer_V_ARSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_tx_buffer_V_ARBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_tx_buffer_V_ARLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_tx_buffer_V_ARCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_tx_buffer_V_ARPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_tx_buffer_V_ARQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_tx_buffer_V_ARREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_tx_buffer_V_ARUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_tx_buffer_V_RVALID : IN STD_LOGIC;
    m_axi_tx_buffer_V_RREADY : OUT STD_LOGIC;
    m_axi_tx_buffer_V_RDATA : IN STD_LOGIC_VECTOR (63 downto 0);
    m_axi_tx_buffer_V_RLAST : IN STD_LOGIC;
    m_axi_tx_buffer_V_RID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_tx_buffer_V_RUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_tx_buffer_V_RRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_tx_buffer_V_BVALID : IN STD_LOGIC;
    m_axi_tx_buffer_V_BREADY : OUT STD_LOGIC;
    m_axi_tx_buffer_V_BRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_tx_buffer_V_BID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_tx_buffer_V_BUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    tx_buffer_V_offset : IN STD_LOGIC_VECTOR (28 downto 0);
    tx_buffer_V_offset1 : IN STD_LOGIC_VECTOR (0 downto 0);
    loop_count_V : IN STD_LOGIC_VECTOR (11 downto 0);
    final_burst_length_V : IN STD_LOGIC_VECTOR (10 downto 0);
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    tx_buffer_V_offset_ap_vld : IN STD_LOGIC;
    tx_buffer_V_offset1_ap_vld : IN STD_LOGIC;
    loop_count_V_ap_vld : IN STD_LOGIC;
    final_burst_length_V_ap_vld : IN STD_LOGIC;
    axis_V_V_TVALID : OUT STD_LOGIC;
    axis_V_V_TREADY : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC );
end;


architecture behav of tx_loop is 
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv12_0 : STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
    constant ap_const_lv12_1 : STD_LOGIC_VECTOR (11 downto 0) := "000000000001";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv64_0 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";

    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWVALID : STD_LOGIC;
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWADDR : STD_LOGIC_VECTOR (31 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWID : STD_LOGIC_VECTOR (0 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWLEN : STD_LOGIC_VECTOR (31 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWSIZE : STD_LOGIC_VECTOR (2 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWBURST : STD_LOGIC_VECTOR (1 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWLOCK : STD_LOGIC_VECTOR (1 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWCACHE : STD_LOGIC_VECTOR (3 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWPROT : STD_LOGIC_VECTOR (2 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWQOS : STD_LOGIC_VECTOR (3 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWREGION : STD_LOGIC_VECTOR (3 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWUSER : STD_LOGIC_VECTOR (0 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_WVALID : STD_LOGIC;
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_WDATA : STD_LOGIC_VECTOR (63 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_WSTRB : STD_LOGIC_VECTOR (7 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_WLAST : STD_LOGIC;
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_WID : STD_LOGIC_VECTOR (0 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_WUSER : STD_LOGIC_VECTOR (0 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARVALID : STD_LOGIC;
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARADDR : STD_LOGIC_VECTOR (31 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARID : STD_LOGIC_VECTOR (0 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARLEN : STD_LOGIC_VECTOR (31 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARSIZE : STD_LOGIC_VECTOR (2 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARBURST : STD_LOGIC_VECTOR (1 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARLOCK : STD_LOGIC_VECTOR (1 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARCACHE : STD_LOGIC_VECTOR (3 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARPROT : STD_LOGIC_VECTOR (2 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARQOS : STD_LOGIC_VECTOR (3 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARREGION : STD_LOGIC_VECTOR (3 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARUSER : STD_LOGIC_VECTOR (0 downto 0);
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_RREADY : STD_LOGIC;
    signal dataflow_in_loop66_U0_m_axi_tx_buffer_V_BREADY : STD_LOGIC;
    signal dataflow_in_loop66_U0_axis_V_V_TDATA : STD_LOGIC_VECTOR (31 downto 0);
    signal dataflow_in_loop66_U0_axis_V_V_TVALID : STD_LOGIC;
    signal dataflow_in_loop66_U0_ap_done : STD_LOGIC;
    signal dataflow_in_loop66_U0_ap_start : STD_LOGIC;
    signal dataflow_in_loop66_U0_ap_ready : STD_LOGIC;
    signal dataflow_in_loop66_U0_ap_idle : STD_LOGIC;
    signal dataflow_in_loop66_U0_ap_continue : STD_LOGIC;
    signal ap_sync_continue : STD_LOGIC;
    signal ap_sync_done : STD_LOGIC;
    signal ap_sync_ready : STD_LOGIC;
    signal loop_dataflow_enable : STD_LOGIC := '0';
    signal loop_dataflow_input_count : STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
    signal loop_dataflow_output_count : STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
    signal loop_dataflow_busy : STD_LOGIC := '0';
    signal dataflow_in_loop66_U0_start_full_n : STD_LOGIC;
    signal dataflow_in_loop66_U0_start_write : STD_LOGIC;

    component dataflow_in_loop66 IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        m_axi_tx_buffer_V_AWVALID : OUT STD_LOGIC;
        m_axi_tx_buffer_V_AWREADY : IN STD_LOGIC;
        m_axi_tx_buffer_V_AWADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
        m_axi_tx_buffer_V_AWID : OUT STD_LOGIC_VECTOR (0 downto 0);
        m_axi_tx_buffer_V_AWLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
        m_axi_tx_buffer_V_AWSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
        m_axi_tx_buffer_V_AWBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
        m_axi_tx_buffer_V_AWLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
        m_axi_tx_buffer_V_AWCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
        m_axi_tx_buffer_V_AWPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
        m_axi_tx_buffer_V_AWQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
        m_axi_tx_buffer_V_AWREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
        m_axi_tx_buffer_V_AWUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
        m_axi_tx_buffer_V_WVALID : OUT STD_LOGIC;
        m_axi_tx_buffer_V_WREADY : IN STD_LOGIC;
        m_axi_tx_buffer_V_WDATA : OUT STD_LOGIC_VECTOR (63 downto 0);
        m_axi_tx_buffer_V_WSTRB : OUT STD_LOGIC_VECTOR (7 downto 0);
        m_axi_tx_buffer_V_WLAST : OUT STD_LOGIC;
        m_axi_tx_buffer_V_WID : OUT STD_LOGIC_VECTOR (0 downto 0);
        m_axi_tx_buffer_V_WUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
        m_axi_tx_buffer_V_ARVALID : OUT STD_LOGIC;
        m_axi_tx_buffer_V_ARREADY : IN STD_LOGIC;
        m_axi_tx_buffer_V_ARADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
        m_axi_tx_buffer_V_ARID : OUT STD_LOGIC_VECTOR (0 downto 0);
        m_axi_tx_buffer_V_ARLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
        m_axi_tx_buffer_V_ARSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
        m_axi_tx_buffer_V_ARBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
        m_axi_tx_buffer_V_ARLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
        m_axi_tx_buffer_V_ARCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
        m_axi_tx_buffer_V_ARPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
        m_axi_tx_buffer_V_ARQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
        m_axi_tx_buffer_V_ARREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
        m_axi_tx_buffer_V_ARUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
        m_axi_tx_buffer_V_RVALID : IN STD_LOGIC;
        m_axi_tx_buffer_V_RREADY : OUT STD_LOGIC;
        m_axi_tx_buffer_V_RDATA : IN STD_LOGIC_VECTOR (63 downto 0);
        m_axi_tx_buffer_V_RLAST : IN STD_LOGIC;
        m_axi_tx_buffer_V_RID : IN STD_LOGIC_VECTOR (0 downto 0);
        m_axi_tx_buffer_V_RUSER : IN STD_LOGIC_VECTOR (0 downto 0);
        m_axi_tx_buffer_V_RRESP : IN STD_LOGIC_VECTOR (1 downto 0);
        m_axi_tx_buffer_V_BVALID : IN STD_LOGIC;
        m_axi_tx_buffer_V_BREADY : OUT STD_LOGIC;
        m_axi_tx_buffer_V_BRESP : IN STD_LOGIC_VECTOR (1 downto 0);
        m_axi_tx_buffer_V_BID : IN STD_LOGIC_VECTOR (0 downto 0);
        m_axi_tx_buffer_V_BUSER : IN STD_LOGIC_VECTOR (0 downto 0);
        tx_buffer_V_offset : IN STD_LOGIC_VECTOR (28 downto 0);
        tx_buffer_V_offset1 : IN STD_LOGIC_VECTOR (0 downto 0);
        val_assign : IN STD_LOGIC_VECTOR (11 downto 0);
        loop_count_V : IN STD_LOGIC_VECTOR (11 downto 0);
        final_burst_length_V : IN STD_LOGIC_VECTOR (10 downto 0);
        axis_V_V_TDATA : OUT STD_LOGIC_VECTOR (31 downto 0);
        tx_buffer_V_offset_ap_vld : IN STD_LOGIC;
        tx_buffer_V_offset1_ap_vld : IN STD_LOGIC;
        val_assign_ap_vld : IN STD_LOGIC;
        loop_count_V_ap_vld : IN STD_LOGIC;
        final_burst_length_V_ap_vld : IN STD_LOGIC;
        axis_V_V_TVALID : OUT STD_LOGIC;
        axis_V_V_TREADY : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_continue : IN STD_LOGIC );
    end component;



begin
    dataflow_in_loop66_U0 : component dataflow_in_loop66
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        m_axi_tx_buffer_V_AWVALID => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWVALID,
        m_axi_tx_buffer_V_AWREADY => ap_const_logic_0,
        m_axi_tx_buffer_V_AWADDR => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWADDR,
        m_axi_tx_buffer_V_AWID => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWID,
        m_axi_tx_buffer_V_AWLEN => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWLEN,
        m_axi_tx_buffer_V_AWSIZE => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWSIZE,
        m_axi_tx_buffer_V_AWBURST => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWBURST,
        m_axi_tx_buffer_V_AWLOCK => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWLOCK,
        m_axi_tx_buffer_V_AWCACHE => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWCACHE,
        m_axi_tx_buffer_V_AWPROT => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWPROT,
        m_axi_tx_buffer_V_AWQOS => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWQOS,
        m_axi_tx_buffer_V_AWREGION => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWREGION,
        m_axi_tx_buffer_V_AWUSER => dataflow_in_loop66_U0_m_axi_tx_buffer_V_AWUSER,
        m_axi_tx_buffer_V_WVALID => dataflow_in_loop66_U0_m_axi_tx_buffer_V_WVALID,
        m_axi_tx_buffer_V_WREADY => ap_const_logic_0,
        m_axi_tx_buffer_V_WDATA => dataflow_in_loop66_U0_m_axi_tx_buffer_V_WDATA,
        m_axi_tx_buffer_V_WSTRB => dataflow_in_loop66_U0_m_axi_tx_buffer_V_WSTRB,
        m_axi_tx_buffer_V_WLAST => dataflow_in_loop66_U0_m_axi_tx_buffer_V_WLAST,
        m_axi_tx_buffer_V_WID => dataflow_in_loop66_U0_m_axi_tx_buffer_V_WID,
        m_axi_tx_buffer_V_WUSER => dataflow_in_loop66_U0_m_axi_tx_buffer_V_WUSER,
        m_axi_tx_buffer_V_ARVALID => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARVALID,
        m_axi_tx_buffer_V_ARREADY => m_axi_tx_buffer_V_ARREADY,
        m_axi_tx_buffer_V_ARADDR => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARADDR,
        m_axi_tx_buffer_V_ARID => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARID,
        m_axi_tx_buffer_V_ARLEN => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARLEN,
        m_axi_tx_buffer_V_ARSIZE => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARSIZE,
        m_axi_tx_buffer_V_ARBURST => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARBURST,
        m_axi_tx_buffer_V_ARLOCK => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARLOCK,
        m_axi_tx_buffer_V_ARCACHE => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARCACHE,
        m_axi_tx_buffer_V_ARPROT => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARPROT,
        m_axi_tx_buffer_V_ARQOS => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARQOS,
        m_axi_tx_buffer_V_ARREGION => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARREGION,
        m_axi_tx_buffer_V_ARUSER => dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARUSER,
        m_axi_tx_buffer_V_RVALID => m_axi_tx_buffer_V_RVALID,
        m_axi_tx_buffer_V_RREADY => dataflow_in_loop66_U0_m_axi_tx_buffer_V_RREADY,
        m_axi_tx_buffer_V_RDATA => m_axi_tx_buffer_V_RDATA,
        m_axi_tx_buffer_V_RLAST => m_axi_tx_buffer_V_RLAST,
        m_axi_tx_buffer_V_RID => m_axi_tx_buffer_V_RID,
        m_axi_tx_buffer_V_RUSER => m_axi_tx_buffer_V_RUSER,
        m_axi_tx_buffer_V_RRESP => m_axi_tx_buffer_V_RRESP,
        m_axi_tx_buffer_V_BVALID => ap_const_logic_0,
        m_axi_tx_buffer_V_BREADY => dataflow_in_loop66_U0_m_axi_tx_buffer_V_BREADY,
        m_axi_tx_buffer_V_BRESP => ap_const_lv2_0,
        m_axi_tx_buffer_V_BID => ap_const_lv1_0,
        m_axi_tx_buffer_V_BUSER => ap_const_lv1_0,
        tx_buffer_V_offset => tx_buffer_V_offset,
        tx_buffer_V_offset1 => tx_buffer_V_offset1,
        val_assign => loop_dataflow_input_count,
        loop_count_V => loop_count_V,
        final_burst_length_V => final_burst_length_V,
        axis_V_V_TDATA => dataflow_in_loop66_U0_axis_V_V_TDATA,
        tx_buffer_V_offset_ap_vld => tx_buffer_V_offset_ap_vld,
        tx_buffer_V_offset1_ap_vld => tx_buffer_V_offset1_ap_vld,
        val_assign_ap_vld => ap_const_logic_0,
        loop_count_V_ap_vld => loop_count_V_ap_vld,
        final_burst_length_V_ap_vld => final_burst_length_V_ap_vld,
        axis_V_V_TVALID => dataflow_in_loop66_U0_axis_V_V_TVALID,
        axis_V_V_TREADY => axis_V_V_TREADY,
        ap_done => dataflow_in_loop66_U0_ap_done,
        ap_start => dataflow_in_loop66_U0_ap_start,
        ap_ready => dataflow_in_loop66_U0_ap_ready,
        ap_idle => dataflow_in_loop66_U0_ap_idle,
        ap_continue => dataflow_in_loop66_U0_ap_continue);





    loop_dataflow_busy_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                loop_dataflow_busy <= ap_const_logic_0;
            else
                if (((loop_dataflow_output_count = loop_count_V) and (ap_continue = ap_const_logic_1))) then 
                    loop_dataflow_busy <= ap_const_logic_0;
                elsif ((ap_start = ap_const_logic_1)) then 
                    loop_dataflow_busy <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    loop_dataflow_enable_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                loop_dataflow_enable <= ap_const_logic_0;
            else
                if (((loop_dataflow_enable = ap_const_logic_0) and (ap_start = ap_const_logic_1))) then 
                    loop_dataflow_enable <= ap_const_logic_1;
                elsif (((loop_dataflow_input_count = loop_count_V) and (loop_dataflow_enable = ap_const_logic_1))) then 
                    loop_dataflow_enable <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    loop_dataflow_input_count_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                loop_dataflow_input_count <= ap_const_lv12_0;
            else
                if (((loop_dataflow_input_count = loop_count_V) and (loop_dataflow_enable = ap_const_logic_1))) then 
                    loop_dataflow_input_count <= ap_const_lv12_0;
                elsif (((loop_dataflow_enable = ap_const_logic_1) and (dataflow_in_loop66_U0_ap_ready = ap_const_logic_1))) then 
                    loop_dataflow_input_count <= std_logic_vector(unsigned(loop_dataflow_input_count) + unsigned(ap_const_lv12_1));
                end if; 
            end if;
        end if;
    end process;


    loop_dataflow_output_count_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                loop_dataflow_output_count <= ap_const_lv12_0;
            else
                if (((loop_dataflow_output_count = loop_count_V) and (ap_continue = ap_const_logic_1))) then 
                    loop_dataflow_output_count <= ap_const_lv12_0;
                elsif ((dataflow_in_loop66_U0_ap_done = ap_const_logic_1)) then 
                    loop_dataflow_output_count <= std_logic_vector(unsigned(loop_dataflow_output_count) + unsigned(ap_const_lv12_1));
                end if; 
            end if;
        end if;
    end process;


    ap_done_assign_proc : process(loop_count_V, loop_dataflow_output_count, loop_dataflow_busy)
    begin
        if (((loop_dataflow_output_count = loop_count_V) and (loop_dataflow_busy = ap_const_logic_1))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_idle <= dataflow_in_loop66_U0_ap_idle;

    ap_ready_assign_proc : process(loop_count_V, loop_dataflow_input_count)
    begin
        if ((loop_dataflow_input_count = loop_count_V)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_sync_continue <= ap_continue;
    ap_sync_done <= dataflow_in_loop66_U0_ap_done;
    ap_sync_ready <= dataflow_in_loop66_U0_ap_ready;
    axis_V_V_TDATA <= dataflow_in_loop66_U0_axis_V_V_TDATA;
    axis_V_V_TVALID <= dataflow_in_loop66_U0_axis_V_V_TVALID;
    dataflow_in_loop66_U0_ap_continue <= ap_const_logic_1;

    dataflow_in_loop66_U0_ap_start_assign_proc : process(loop_count_V, loop_dataflow_enable, loop_dataflow_input_count)
    begin
        if ((not((loop_dataflow_input_count = loop_count_V)) and (loop_dataflow_enable = ap_const_logic_1))) then 
            dataflow_in_loop66_U0_ap_start <= ap_const_logic_1;
        else 
            dataflow_in_loop66_U0_ap_start <= ap_const_logic_0;
        end if; 
    end process;

    dataflow_in_loop66_U0_start_full_n <= ap_const_logic_1;
    dataflow_in_loop66_U0_start_write <= ap_const_logic_0;
    m_axi_tx_buffer_V_ARADDR <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARADDR;
    m_axi_tx_buffer_V_ARBURST <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARBURST;
    m_axi_tx_buffer_V_ARCACHE <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARCACHE;
    m_axi_tx_buffer_V_ARID <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARID;
    m_axi_tx_buffer_V_ARLEN <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARLEN;
    m_axi_tx_buffer_V_ARLOCK <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARLOCK;
    m_axi_tx_buffer_V_ARPROT <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARPROT;
    m_axi_tx_buffer_V_ARQOS <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARQOS;
    m_axi_tx_buffer_V_ARREGION <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARREGION;
    m_axi_tx_buffer_V_ARSIZE <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARSIZE;
    m_axi_tx_buffer_V_ARUSER <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARUSER;
    m_axi_tx_buffer_V_ARVALID <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_ARVALID;
    m_axi_tx_buffer_V_AWADDR <= ap_const_lv32_0;
    m_axi_tx_buffer_V_AWBURST <= ap_const_lv2_0;
    m_axi_tx_buffer_V_AWCACHE <= ap_const_lv4_0;
    m_axi_tx_buffer_V_AWID <= ap_const_lv1_0;
    m_axi_tx_buffer_V_AWLEN <= ap_const_lv32_0;
    m_axi_tx_buffer_V_AWLOCK <= ap_const_lv2_0;
    m_axi_tx_buffer_V_AWPROT <= ap_const_lv3_0;
    m_axi_tx_buffer_V_AWQOS <= ap_const_lv4_0;
    m_axi_tx_buffer_V_AWREGION <= ap_const_lv4_0;
    m_axi_tx_buffer_V_AWSIZE <= ap_const_lv3_0;
    m_axi_tx_buffer_V_AWUSER <= ap_const_lv1_0;
    m_axi_tx_buffer_V_AWVALID <= ap_const_logic_0;
    m_axi_tx_buffer_V_BREADY <= ap_const_logic_0;
    m_axi_tx_buffer_V_RREADY <= dataflow_in_loop66_U0_m_axi_tx_buffer_V_RREADY;
    m_axi_tx_buffer_V_WDATA <= ap_const_lv64_0;
    m_axi_tx_buffer_V_WID <= ap_const_lv1_0;
    m_axi_tx_buffer_V_WLAST <= ap_const_logic_0;
    m_axi_tx_buffer_V_WSTRB <= ap_const_lv8_0;
    m_axi_tx_buffer_V_WUSER <= ap_const_lv1_0;
    m_axi_tx_buffer_V_WVALID <= ap_const_logic_0;
end behav;
