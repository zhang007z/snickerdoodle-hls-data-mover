-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.1
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity dataflow_in_loop is
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
    val_assign : IN STD_LOGIC_VECTOR (12 downto 0);
    loop_count_V : IN STD_LOGIC_VECTOR (12 downto 0);
    final_burst_length_V : IN STD_LOGIC_VECTOR (12 downto 0);
    axis_V_V_TDATA : OUT STD_LOGIC_VECTOR (7 downto 0);
    tx_buffer_V_offset_ap_vld : IN STD_LOGIC;
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
end;


architecture behav of dataflow_in_loop is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_const_lv64_0 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal cache_V_i_q0 : STD_LOGIC_VECTOR (63 downto 0);
    signal cache_V_t_q0 : STD_LOGIC_VECTOR (63 downto 0);
    signal read_burst_U0_ap_start : STD_LOGIC;
    signal read_burst_U0_ap_done : STD_LOGIC;
    signal read_burst_U0_ap_continue : STD_LOGIC;
    signal read_burst_U0_ap_idle : STD_LOGIC;
    signal read_burst_U0_ap_ready : STD_LOGIC;
    signal read_burst_U0_m_axi_tx_buffer_V_AWVALID : STD_LOGIC;
    signal read_burst_U0_m_axi_tx_buffer_V_AWADDR : STD_LOGIC_VECTOR (31 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_AWID : STD_LOGIC_VECTOR (0 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_AWLEN : STD_LOGIC_VECTOR (31 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_AWSIZE : STD_LOGIC_VECTOR (2 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_AWBURST : STD_LOGIC_VECTOR (1 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_AWLOCK : STD_LOGIC_VECTOR (1 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_AWCACHE : STD_LOGIC_VECTOR (3 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_AWPROT : STD_LOGIC_VECTOR (2 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_AWQOS : STD_LOGIC_VECTOR (3 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_AWREGION : STD_LOGIC_VECTOR (3 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_AWUSER : STD_LOGIC_VECTOR (0 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_WVALID : STD_LOGIC;
    signal read_burst_U0_m_axi_tx_buffer_V_WDATA : STD_LOGIC_VECTOR (63 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_WSTRB : STD_LOGIC_VECTOR (7 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_WLAST : STD_LOGIC;
    signal read_burst_U0_m_axi_tx_buffer_V_WID : STD_LOGIC_VECTOR (0 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_WUSER : STD_LOGIC_VECTOR (0 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_ARVALID : STD_LOGIC;
    signal read_burst_U0_m_axi_tx_buffer_V_ARADDR : STD_LOGIC_VECTOR (31 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_ARID : STD_LOGIC_VECTOR (0 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_ARLEN : STD_LOGIC_VECTOR (31 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_ARSIZE : STD_LOGIC_VECTOR (2 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_ARBURST : STD_LOGIC_VECTOR (1 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_ARLOCK : STD_LOGIC_VECTOR (1 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_ARCACHE : STD_LOGIC_VECTOR (3 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_ARPROT : STD_LOGIC_VECTOR (2 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_ARQOS : STD_LOGIC_VECTOR (3 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_ARREGION : STD_LOGIC_VECTOR (3 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_ARUSER : STD_LOGIC_VECTOR (0 downto 0);
    signal read_burst_U0_m_axi_tx_buffer_V_RREADY : STD_LOGIC;
    signal read_burst_U0_m_axi_tx_buffer_V_BREADY : STD_LOGIC;
    signal read_burst_U0_cache_V_address0 : STD_LOGIC_VECTOR (8 downto 0);
    signal read_burst_U0_cache_V_ce0 : STD_LOGIC;
    signal read_burst_U0_cache_V_we0 : STD_LOGIC;
    signal read_burst_U0_cache_V_d0 : STD_LOGIC_VECTOR (63 downto 0);
    signal read_burst_U0_ap_return : STD_LOGIC_VECTOR (12 downto 0);
    signal ap_channel_done_data_length_V : STD_LOGIC;
    signal data_length_V_full_n : STD_LOGIC;
    signal ap_sync_reg_channel_write_data_length_V : STD_LOGIC := '0';
    signal ap_sync_channel_write_data_length_V : STD_LOGIC;
    signal ap_channel_done_cache_V : STD_LOGIC;
    signal read_burst_U0_cache_V_full_n : STD_LOGIC;
    signal ap_sync_reg_channel_write_cache_V : STD_LOGIC := '0';
    signal ap_sync_channel_write_cache_V : STD_LOGIC;
    signal tx_axis_words_U0_ap_start : STD_LOGIC;
    signal tx_axis_words_U0_ap_done : STD_LOGIC;
    signal tx_axis_words_U0_ap_continue : STD_LOGIC;
    signal tx_axis_words_U0_ap_idle : STD_LOGIC;
    signal tx_axis_words_U0_ap_ready : STD_LOGIC;
    signal tx_axis_words_U0_cache_V_address0 : STD_LOGIC_VECTOR (8 downto 0);
    signal tx_axis_words_U0_cache_V_ce0 : STD_LOGIC;
    signal tx_axis_words_U0_axis_V_V_TDATA : STD_LOGIC_VECTOR (7 downto 0);
    signal tx_axis_words_U0_axis_V_V_TVALID : STD_LOGIC;
    signal ap_sync_continue : STD_LOGIC;
    signal cache_V_i_full_n : STD_LOGIC;
    signal cache_V_t_empty_n : STD_LOGIC;
    signal data_length_V_dout : STD_LOGIC_VECTOR (12 downto 0);
    signal data_length_V_empty_n : STD_LOGIC;
    signal ap_sync_done : STD_LOGIC;
    signal ap_sync_ready : STD_LOGIC;
    signal read_burst_U0_start_full_n : STD_LOGIC;
    signal read_burst_U0_start_write : STD_LOGIC;
    signal tx_axis_words_U0_start_full_n : STD_LOGIC;
    signal tx_axis_words_U0_start_write : STD_LOGIC;

    component read_burst IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_continue : IN STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
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
        val_assign : IN STD_LOGIC_VECTOR (12 downto 0);
        loop_count_V : IN STD_LOGIC_VECTOR (12 downto 0);
        final_burst_length_V : IN STD_LOGIC_VECTOR (12 downto 0);
        cache_V_address0 : OUT STD_LOGIC_VECTOR (8 downto 0);
        cache_V_ce0 : OUT STD_LOGIC;
        cache_V_we0 : OUT STD_LOGIC;
        cache_V_d0 : OUT STD_LOGIC_VECTOR (63 downto 0);
        ap_return : OUT STD_LOGIC_VECTOR (12 downto 0) );
    end component;


    component tx_axis_words IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_continue : IN STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        cache_V_address0 : OUT STD_LOGIC_VECTOR (8 downto 0);
        cache_V_ce0 : OUT STD_LOGIC;
        cache_V_q0 : IN STD_LOGIC_VECTOR (63 downto 0);
        p_read : IN STD_LOGIC_VECTOR (12 downto 0);
        axis_V_V_TDATA : OUT STD_LOGIC_VECTOR (7 downto 0);
        axis_V_V_TVALID : OUT STD_LOGIC;
        axis_V_V_TREADY : IN STD_LOGIC );
    end component;


    component dataflow_in_loop_bkb IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        i_address0 : IN STD_LOGIC_VECTOR (8 downto 0);
        i_ce0 : IN STD_LOGIC;
        i_we0 : IN STD_LOGIC;
        i_d0 : IN STD_LOGIC_VECTOR (63 downto 0);
        i_q0 : OUT STD_LOGIC_VECTOR (63 downto 0);
        t_address0 : IN STD_LOGIC_VECTOR (8 downto 0);
        t_ce0 : IN STD_LOGIC;
        t_we0 : IN STD_LOGIC;
        t_d0 : IN STD_LOGIC_VECTOR (63 downto 0);
        t_q0 : OUT STD_LOGIC_VECTOR (63 downto 0);
        i_ce : IN STD_LOGIC;
        t_ce : IN STD_LOGIC;
        i_full_n : OUT STD_LOGIC;
        i_write : IN STD_LOGIC;
        t_empty_n : OUT STD_LOGIC;
        t_read : IN STD_LOGIC );
    end component;


    component fifo_w13_d2_A IS
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        if_read_ce : IN STD_LOGIC;
        if_write_ce : IN STD_LOGIC;
        if_din : IN STD_LOGIC_VECTOR (12 downto 0);
        if_full_n : OUT STD_LOGIC;
        if_write : IN STD_LOGIC;
        if_dout : OUT STD_LOGIC_VECTOR (12 downto 0);
        if_empty_n : OUT STD_LOGIC;
        if_read : IN STD_LOGIC );
    end component;



begin
    cache_V_U : component dataflow_in_loop_bkb
    generic map (
        DataWidth => 64,
        AddressRange => 512,
        AddressWidth => 9)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        i_address0 => read_burst_U0_cache_V_address0,
        i_ce0 => read_burst_U0_cache_V_ce0,
        i_we0 => read_burst_U0_cache_V_we0,
        i_d0 => read_burst_U0_cache_V_d0,
        i_q0 => cache_V_i_q0,
        t_address0 => tx_axis_words_U0_cache_V_address0,
        t_ce0 => tx_axis_words_U0_cache_V_ce0,
        t_we0 => ap_const_logic_0,
        t_d0 => ap_const_lv64_0,
        t_q0 => cache_V_t_q0,
        i_ce => ap_const_logic_1,
        t_ce => ap_const_logic_1,
        i_full_n => cache_V_i_full_n,
        i_write => ap_channel_done_cache_V,
        t_empty_n => cache_V_t_empty_n,
        t_read => tx_axis_words_U0_ap_ready);

    read_burst_U0 : component read_burst
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => read_burst_U0_ap_start,
        ap_done => read_burst_U0_ap_done,
        ap_continue => read_burst_U0_ap_continue,
        ap_idle => read_burst_U0_ap_idle,
        ap_ready => read_burst_U0_ap_ready,
        m_axi_tx_buffer_V_AWVALID => read_burst_U0_m_axi_tx_buffer_V_AWVALID,
        m_axi_tx_buffer_V_AWREADY => ap_const_logic_0,
        m_axi_tx_buffer_V_AWADDR => read_burst_U0_m_axi_tx_buffer_V_AWADDR,
        m_axi_tx_buffer_V_AWID => read_burst_U0_m_axi_tx_buffer_V_AWID,
        m_axi_tx_buffer_V_AWLEN => read_burst_U0_m_axi_tx_buffer_V_AWLEN,
        m_axi_tx_buffer_V_AWSIZE => read_burst_U0_m_axi_tx_buffer_V_AWSIZE,
        m_axi_tx_buffer_V_AWBURST => read_burst_U0_m_axi_tx_buffer_V_AWBURST,
        m_axi_tx_buffer_V_AWLOCK => read_burst_U0_m_axi_tx_buffer_V_AWLOCK,
        m_axi_tx_buffer_V_AWCACHE => read_burst_U0_m_axi_tx_buffer_V_AWCACHE,
        m_axi_tx_buffer_V_AWPROT => read_burst_U0_m_axi_tx_buffer_V_AWPROT,
        m_axi_tx_buffer_V_AWQOS => read_burst_U0_m_axi_tx_buffer_V_AWQOS,
        m_axi_tx_buffer_V_AWREGION => read_burst_U0_m_axi_tx_buffer_V_AWREGION,
        m_axi_tx_buffer_V_AWUSER => read_burst_U0_m_axi_tx_buffer_V_AWUSER,
        m_axi_tx_buffer_V_WVALID => read_burst_U0_m_axi_tx_buffer_V_WVALID,
        m_axi_tx_buffer_V_WREADY => ap_const_logic_0,
        m_axi_tx_buffer_V_WDATA => read_burst_U0_m_axi_tx_buffer_V_WDATA,
        m_axi_tx_buffer_V_WSTRB => read_burst_U0_m_axi_tx_buffer_V_WSTRB,
        m_axi_tx_buffer_V_WLAST => read_burst_U0_m_axi_tx_buffer_V_WLAST,
        m_axi_tx_buffer_V_WID => read_burst_U0_m_axi_tx_buffer_V_WID,
        m_axi_tx_buffer_V_WUSER => read_burst_U0_m_axi_tx_buffer_V_WUSER,
        m_axi_tx_buffer_V_ARVALID => read_burst_U0_m_axi_tx_buffer_V_ARVALID,
        m_axi_tx_buffer_V_ARREADY => m_axi_tx_buffer_V_ARREADY,
        m_axi_tx_buffer_V_ARADDR => read_burst_U0_m_axi_tx_buffer_V_ARADDR,
        m_axi_tx_buffer_V_ARID => read_burst_U0_m_axi_tx_buffer_V_ARID,
        m_axi_tx_buffer_V_ARLEN => read_burst_U0_m_axi_tx_buffer_V_ARLEN,
        m_axi_tx_buffer_V_ARSIZE => read_burst_U0_m_axi_tx_buffer_V_ARSIZE,
        m_axi_tx_buffer_V_ARBURST => read_burst_U0_m_axi_tx_buffer_V_ARBURST,
        m_axi_tx_buffer_V_ARLOCK => read_burst_U0_m_axi_tx_buffer_V_ARLOCK,
        m_axi_tx_buffer_V_ARCACHE => read_burst_U0_m_axi_tx_buffer_V_ARCACHE,
        m_axi_tx_buffer_V_ARPROT => read_burst_U0_m_axi_tx_buffer_V_ARPROT,
        m_axi_tx_buffer_V_ARQOS => read_burst_U0_m_axi_tx_buffer_V_ARQOS,
        m_axi_tx_buffer_V_ARREGION => read_burst_U0_m_axi_tx_buffer_V_ARREGION,
        m_axi_tx_buffer_V_ARUSER => read_burst_U0_m_axi_tx_buffer_V_ARUSER,
        m_axi_tx_buffer_V_RVALID => m_axi_tx_buffer_V_RVALID,
        m_axi_tx_buffer_V_RREADY => read_burst_U0_m_axi_tx_buffer_V_RREADY,
        m_axi_tx_buffer_V_RDATA => m_axi_tx_buffer_V_RDATA,
        m_axi_tx_buffer_V_RLAST => m_axi_tx_buffer_V_RLAST,
        m_axi_tx_buffer_V_RID => m_axi_tx_buffer_V_RID,
        m_axi_tx_buffer_V_RUSER => m_axi_tx_buffer_V_RUSER,
        m_axi_tx_buffer_V_RRESP => m_axi_tx_buffer_V_RRESP,
        m_axi_tx_buffer_V_BVALID => ap_const_logic_0,
        m_axi_tx_buffer_V_BREADY => read_burst_U0_m_axi_tx_buffer_V_BREADY,
        m_axi_tx_buffer_V_BRESP => ap_const_lv2_0,
        m_axi_tx_buffer_V_BID => ap_const_lv1_0,
        m_axi_tx_buffer_V_BUSER => ap_const_lv1_0,
        tx_buffer_V_offset => tx_buffer_V_offset,
        val_assign => val_assign,
        loop_count_V => loop_count_V,
        final_burst_length_V => final_burst_length_V,
        cache_V_address0 => read_burst_U0_cache_V_address0,
        cache_V_ce0 => read_burst_U0_cache_V_ce0,
        cache_V_we0 => read_burst_U0_cache_V_we0,
        cache_V_d0 => read_burst_U0_cache_V_d0,
        ap_return => read_burst_U0_ap_return);

    tx_axis_words_U0 : component tx_axis_words
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => tx_axis_words_U0_ap_start,
        ap_done => tx_axis_words_U0_ap_done,
        ap_continue => tx_axis_words_U0_ap_continue,
        ap_idle => tx_axis_words_U0_ap_idle,
        ap_ready => tx_axis_words_U0_ap_ready,
        cache_V_address0 => tx_axis_words_U0_cache_V_address0,
        cache_V_ce0 => tx_axis_words_U0_cache_V_ce0,
        cache_V_q0 => cache_V_t_q0,
        p_read => data_length_V_dout,
        axis_V_V_TDATA => tx_axis_words_U0_axis_V_V_TDATA,
        axis_V_V_TVALID => tx_axis_words_U0_axis_V_V_TVALID,
        axis_V_V_TREADY => axis_V_V_TREADY);

    data_length_V_U : component fifo_w13_d2_A
    port map (
        clk => ap_clk,
        reset => ap_rst,
        if_read_ce => ap_const_logic_1,
        if_write_ce => ap_const_logic_1,
        if_din => read_burst_U0_ap_return,
        if_full_n => data_length_V_full_n,
        if_write => ap_channel_done_data_length_V,
        if_dout => data_length_V_dout,
        if_empty_n => data_length_V_empty_n,
        if_read => tx_axis_words_U0_ap_ready);





    ap_sync_reg_channel_write_cache_V_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_sync_reg_channel_write_cache_V <= ap_const_logic_0;
            else
                if (((read_burst_U0_ap_done and read_burst_U0_ap_continue) = ap_const_logic_1)) then 
                    ap_sync_reg_channel_write_cache_V <= ap_const_logic_0;
                else 
                    ap_sync_reg_channel_write_cache_V <= ap_sync_channel_write_cache_V;
                end if; 
            end if;
        end if;
    end process;


    ap_sync_reg_channel_write_data_length_V_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_sync_reg_channel_write_data_length_V <= ap_const_logic_0;
            else
                if (((read_burst_U0_ap_done and read_burst_U0_ap_continue) = ap_const_logic_1)) then 
                    ap_sync_reg_channel_write_data_length_V <= ap_const_logic_0;
                else 
                    ap_sync_reg_channel_write_data_length_V <= ap_sync_channel_write_data_length_V;
                end if; 
            end if;
        end if;
    end process;

    ap_channel_done_cache_V <= (read_burst_U0_ap_done and (ap_sync_reg_channel_write_cache_V xor ap_const_logic_1));
    ap_channel_done_data_length_V <= (read_burst_U0_ap_done and (ap_sync_reg_channel_write_data_length_V xor ap_const_logic_1));
    ap_done <= tx_axis_words_U0_ap_done;
    ap_idle <= (tx_axis_words_U0_ap_idle and read_burst_U0_ap_idle and (data_length_V_empty_n xor ap_const_logic_1) and (cache_V_t_empty_n xor ap_const_logic_1));
    ap_ready <= read_burst_U0_ap_ready;
    ap_sync_channel_write_cache_V <= ((read_burst_U0_cache_V_full_n and ap_channel_done_cache_V) or ap_sync_reg_channel_write_cache_V);
    ap_sync_channel_write_data_length_V <= ((data_length_V_full_n and ap_channel_done_data_length_V) or ap_sync_reg_channel_write_data_length_V);
    ap_sync_continue <= ap_continue;
    ap_sync_done <= tx_axis_words_U0_ap_done;
    ap_sync_ready <= read_burst_U0_ap_ready;
    axis_V_V_TDATA <= tx_axis_words_U0_axis_V_V_TDATA;
    axis_V_V_TVALID <= tx_axis_words_U0_axis_V_V_TVALID;
    m_axi_tx_buffer_V_ARADDR <= read_burst_U0_m_axi_tx_buffer_V_ARADDR;
    m_axi_tx_buffer_V_ARBURST <= read_burst_U0_m_axi_tx_buffer_V_ARBURST;
    m_axi_tx_buffer_V_ARCACHE <= read_burst_U0_m_axi_tx_buffer_V_ARCACHE;
    m_axi_tx_buffer_V_ARID <= read_burst_U0_m_axi_tx_buffer_V_ARID;
    m_axi_tx_buffer_V_ARLEN <= read_burst_U0_m_axi_tx_buffer_V_ARLEN;
    m_axi_tx_buffer_V_ARLOCK <= read_burst_U0_m_axi_tx_buffer_V_ARLOCK;
    m_axi_tx_buffer_V_ARPROT <= read_burst_U0_m_axi_tx_buffer_V_ARPROT;
    m_axi_tx_buffer_V_ARQOS <= read_burst_U0_m_axi_tx_buffer_V_ARQOS;
    m_axi_tx_buffer_V_ARREGION <= read_burst_U0_m_axi_tx_buffer_V_ARREGION;
    m_axi_tx_buffer_V_ARSIZE <= read_burst_U0_m_axi_tx_buffer_V_ARSIZE;
    m_axi_tx_buffer_V_ARUSER <= read_burst_U0_m_axi_tx_buffer_V_ARUSER;
    m_axi_tx_buffer_V_ARVALID <= read_burst_U0_m_axi_tx_buffer_V_ARVALID;
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
    m_axi_tx_buffer_V_RREADY <= read_burst_U0_m_axi_tx_buffer_V_RREADY;
    m_axi_tx_buffer_V_WDATA <= ap_const_lv64_0;
    m_axi_tx_buffer_V_WID <= ap_const_lv1_0;
    m_axi_tx_buffer_V_WLAST <= ap_const_logic_0;
    m_axi_tx_buffer_V_WSTRB <= ap_const_lv8_0;
    m_axi_tx_buffer_V_WUSER <= ap_const_lv1_0;
    m_axi_tx_buffer_V_WVALID <= ap_const_logic_0;
    read_burst_U0_ap_continue <= (ap_sync_channel_write_data_length_V and ap_sync_channel_write_cache_V);
    read_burst_U0_ap_start <= ap_start;
    read_burst_U0_cache_V_full_n <= cache_V_i_full_n;
    read_burst_U0_start_full_n <= ap_const_logic_1;
    read_burst_U0_start_write <= ap_const_logic_0;
    tx_axis_words_U0_ap_continue <= ap_continue;
    tx_axis_words_U0_ap_start <= (data_length_V_empty_n and cache_V_t_empty_n);
    tx_axis_words_U0_start_full_n <= ap_const_logic_1;
    tx_axis_words_U0_start_write <= ap_const_logic_0;
end behav;
