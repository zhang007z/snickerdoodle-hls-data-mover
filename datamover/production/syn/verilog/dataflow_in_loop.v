// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dataflow_in_loop (
        ap_clk,
        ap_rst,
        axis_V_V_TDATA,
        loop_count_V,
        final_burst_length_V,
        val_assign,
        m_axi_rx_buffer_V_AWVALID,
        m_axi_rx_buffer_V_AWREADY,
        m_axi_rx_buffer_V_AWADDR,
        m_axi_rx_buffer_V_AWID,
        m_axi_rx_buffer_V_AWLEN,
        m_axi_rx_buffer_V_AWSIZE,
        m_axi_rx_buffer_V_AWBURST,
        m_axi_rx_buffer_V_AWLOCK,
        m_axi_rx_buffer_V_AWCACHE,
        m_axi_rx_buffer_V_AWPROT,
        m_axi_rx_buffer_V_AWQOS,
        m_axi_rx_buffer_V_AWREGION,
        m_axi_rx_buffer_V_AWUSER,
        m_axi_rx_buffer_V_WVALID,
        m_axi_rx_buffer_V_WREADY,
        m_axi_rx_buffer_V_WDATA,
        m_axi_rx_buffer_V_WSTRB,
        m_axi_rx_buffer_V_WLAST,
        m_axi_rx_buffer_V_WID,
        m_axi_rx_buffer_V_WUSER,
        m_axi_rx_buffer_V_ARVALID,
        m_axi_rx_buffer_V_ARREADY,
        m_axi_rx_buffer_V_ARADDR,
        m_axi_rx_buffer_V_ARID,
        m_axi_rx_buffer_V_ARLEN,
        m_axi_rx_buffer_V_ARSIZE,
        m_axi_rx_buffer_V_ARBURST,
        m_axi_rx_buffer_V_ARLOCK,
        m_axi_rx_buffer_V_ARCACHE,
        m_axi_rx_buffer_V_ARPROT,
        m_axi_rx_buffer_V_ARQOS,
        m_axi_rx_buffer_V_ARREGION,
        m_axi_rx_buffer_V_ARUSER,
        m_axi_rx_buffer_V_RVALID,
        m_axi_rx_buffer_V_RREADY,
        m_axi_rx_buffer_V_RDATA,
        m_axi_rx_buffer_V_RLAST,
        m_axi_rx_buffer_V_RID,
        m_axi_rx_buffer_V_RUSER,
        m_axi_rx_buffer_V_RRESP,
        m_axi_rx_buffer_V_BVALID,
        m_axi_rx_buffer_V_BREADY,
        m_axi_rx_buffer_V_BRESP,
        m_axi_rx_buffer_V_BID,
        m_axi_rx_buffer_V_BUSER,
        rx_buffer_V_offset,
        axis_V_V_TVALID,
        axis_V_V_TREADY,
        loop_count_V_ap_vld,
        final_burst_length_V_ap_vld,
        val_assign_ap_vld,
        rx_buffer_V_offset_ap_vld,
        ap_done,
        ap_start,
        ap_ready,
        ap_idle,
        ap_continue
);


input   ap_clk;
input   ap_rst;
input  [7:0] axis_V_V_TDATA;
input  [12:0] loop_count_V;
input  [12:0] final_burst_length_V;
input  [12:0] val_assign;
output   m_axi_rx_buffer_V_AWVALID;
input   m_axi_rx_buffer_V_AWREADY;
output  [31:0] m_axi_rx_buffer_V_AWADDR;
output  [0:0] m_axi_rx_buffer_V_AWID;
output  [31:0] m_axi_rx_buffer_V_AWLEN;
output  [2:0] m_axi_rx_buffer_V_AWSIZE;
output  [1:0] m_axi_rx_buffer_V_AWBURST;
output  [1:0] m_axi_rx_buffer_V_AWLOCK;
output  [3:0] m_axi_rx_buffer_V_AWCACHE;
output  [2:0] m_axi_rx_buffer_V_AWPROT;
output  [3:0] m_axi_rx_buffer_V_AWQOS;
output  [3:0] m_axi_rx_buffer_V_AWREGION;
output  [0:0] m_axi_rx_buffer_V_AWUSER;
output   m_axi_rx_buffer_V_WVALID;
input   m_axi_rx_buffer_V_WREADY;
output  [63:0] m_axi_rx_buffer_V_WDATA;
output  [7:0] m_axi_rx_buffer_V_WSTRB;
output   m_axi_rx_buffer_V_WLAST;
output  [0:0] m_axi_rx_buffer_V_WID;
output  [0:0] m_axi_rx_buffer_V_WUSER;
output   m_axi_rx_buffer_V_ARVALID;
input   m_axi_rx_buffer_V_ARREADY;
output  [31:0] m_axi_rx_buffer_V_ARADDR;
output  [0:0] m_axi_rx_buffer_V_ARID;
output  [31:0] m_axi_rx_buffer_V_ARLEN;
output  [2:0] m_axi_rx_buffer_V_ARSIZE;
output  [1:0] m_axi_rx_buffer_V_ARBURST;
output  [1:0] m_axi_rx_buffer_V_ARLOCK;
output  [3:0] m_axi_rx_buffer_V_ARCACHE;
output  [2:0] m_axi_rx_buffer_V_ARPROT;
output  [3:0] m_axi_rx_buffer_V_ARQOS;
output  [3:0] m_axi_rx_buffer_V_ARREGION;
output  [0:0] m_axi_rx_buffer_V_ARUSER;
input   m_axi_rx_buffer_V_RVALID;
output   m_axi_rx_buffer_V_RREADY;
input  [63:0] m_axi_rx_buffer_V_RDATA;
input   m_axi_rx_buffer_V_RLAST;
input  [0:0] m_axi_rx_buffer_V_RID;
input  [0:0] m_axi_rx_buffer_V_RUSER;
input  [1:0] m_axi_rx_buffer_V_RRESP;
input   m_axi_rx_buffer_V_BVALID;
output   m_axi_rx_buffer_V_BREADY;
input  [1:0] m_axi_rx_buffer_V_BRESP;
input  [0:0] m_axi_rx_buffer_V_BID;
input  [0:0] m_axi_rx_buffer_V_BUSER;
input  [28:0] rx_buffer_V_offset;
input   axis_V_V_TVALID;
output   axis_V_V_TREADY;
input   loop_count_V_ap_vld;
input   final_burst_length_V_ap_vld;
input   val_assign_ap_vld;
input   rx_buffer_V_offset_ap_vld;
output   ap_done;
input   ap_start;
output   ap_ready;
output   ap_idle;
input   ap_continue;

wire   [63:0] cache_V_i_q0;
wire   [63:0] cache_V_t_q0;
wire    rx_axis_words25_U0_ap_start;
wire    rx_axis_words25_U0_ap_done;
wire    rx_axis_words25_U0_ap_continue;
wire    rx_axis_words25_U0_ap_idle;
wire    rx_axis_words25_U0_ap_ready;
wire    rx_axis_words25_U0_axis_V_V_TREADY;
wire   [8:0] rx_axis_words25_U0_cache_V_address0;
wire    rx_axis_words25_U0_cache_V_ce0;
wire    rx_axis_words25_U0_cache_V_we0;
wire   [63:0] rx_axis_words25_U0_cache_V_d0;
wire   [28:0] rx_axis_words25_U0_rx_buffer_V_offset_out_din;
wire    rx_axis_words25_U0_rx_buffer_V_offset_out_write;
wire   [20:0] rx_axis_words25_U0_ap_return;
wire    ap_channel_done_buffer_offset_V;
wire    buffer_offset_V_full_n;
reg    ap_sync_reg_channel_write_buffer_offset_V;
wire    ap_sync_channel_write_buffer_offset_V;
wire    ap_channel_done_cache_V;
wire    rx_axis_words25_U0_cache_V_full_n;
reg    ap_sync_reg_channel_write_cache_V;
wire    ap_sync_channel_write_cache_V;
wire    write_burst_U0_ap_start;
wire    write_burst_U0_ap_done;
wire    write_burst_U0_ap_continue;
wire    write_burst_U0_ap_idle;
wire    write_burst_U0_ap_ready;
wire   [8:0] write_burst_U0_cache_V_address0;
wire    write_burst_U0_cache_V_ce0;
wire    write_burst_U0_m_axi_rx_buffer_V_AWVALID;
wire   [31:0] write_burst_U0_m_axi_rx_buffer_V_AWADDR;
wire   [0:0] write_burst_U0_m_axi_rx_buffer_V_AWID;
wire   [31:0] write_burst_U0_m_axi_rx_buffer_V_AWLEN;
wire   [2:0] write_burst_U0_m_axi_rx_buffer_V_AWSIZE;
wire   [1:0] write_burst_U0_m_axi_rx_buffer_V_AWBURST;
wire   [1:0] write_burst_U0_m_axi_rx_buffer_V_AWLOCK;
wire   [3:0] write_burst_U0_m_axi_rx_buffer_V_AWCACHE;
wire   [2:0] write_burst_U0_m_axi_rx_buffer_V_AWPROT;
wire   [3:0] write_burst_U0_m_axi_rx_buffer_V_AWQOS;
wire   [3:0] write_burst_U0_m_axi_rx_buffer_V_AWREGION;
wire   [0:0] write_burst_U0_m_axi_rx_buffer_V_AWUSER;
wire    write_burst_U0_m_axi_rx_buffer_V_WVALID;
wire   [63:0] write_burst_U0_m_axi_rx_buffer_V_WDATA;
wire   [7:0] write_burst_U0_m_axi_rx_buffer_V_WSTRB;
wire    write_burst_U0_m_axi_rx_buffer_V_WLAST;
wire   [0:0] write_burst_U0_m_axi_rx_buffer_V_WID;
wire   [0:0] write_burst_U0_m_axi_rx_buffer_V_WUSER;
wire    write_burst_U0_m_axi_rx_buffer_V_ARVALID;
wire   [31:0] write_burst_U0_m_axi_rx_buffer_V_ARADDR;
wire   [0:0] write_burst_U0_m_axi_rx_buffer_V_ARID;
wire   [31:0] write_burst_U0_m_axi_rx_buffer_V_ARLEN;
wire   [2:0] write_burst_U0_m_axi_rx_buffer_V_ARSIZE;
wire   [1:0] write_burst_U0_m_axi_rx_buffer_V_ARBURST;
wire   [1:0] write_burst_U0_m_axi_rx_buffer_V_ARLOCK;
wire   [3:0] write_burst_U0_m_axi_rx_buffer_V_ARCACHE;
wire   [2:0] write_burst_U0_m_axi_rx_buffer_V_ARPROT;
wire   [3:0] write_burst_U0_m_axi_rx_buffer_V_ARQOS;
wire   [3:0] write_burst_U0_m_axi_rx_buffer_V_ARREGION;
wire   [0:0] write_burst_U0_m_axi_rx_buffer_V_ARUSER;
wire    write_burst_U0_m_axi_rx_buffer_V_RREADY;
wire    write_burst_U0_m_axi_rx_buffer_V_BREADY;
wire    write_burst_U0_rx_buffer_V_offset_read;
wire    ap_sync_continue;
wire    cache_V_i_full_n;
wire    cache_V_t_empty_n;
wire    rx_buffer_V_offset_c_full_n;
wire   [28:0] rx_buffer_V_offset_c_dout;
wire    rx_buffer_V_offset_c_empty_n;
wire   [20:0] buffer_offset_V_dout;
wire    buffer_offset_V_empty_n;
wire    ap_sync_done;
wire    ap_sync_ready;
wire    rx_axis_words25_U0_start_full_n;
wire    rx_axis_words25_U0_start_write;
wire    write_burst_U0_start_full_n;
wire    write_burst_U0_start_write;

// power-on initialization
initial begin
#0 ap_sync_reg_channel_write_buffer_offset_V = 1'b0;
#0 ap_sync_reg_channel_write_cache_V = 1'b0;
end

dataflow_in_loop_cud #(
    .DataWidth( 64 ),
    .AddressRange( 512 ),
    .AddressWidth( 9 ))
cache_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .i_address0(rx_axis_words25_U0_cache_V_address0),
    .i_ce0(rx_axis_words25_U0_cache_V_ce0),
    .i_we0(rx_axis_words25_U0_cache_V_we0),
    .i_d0(rx_axis_words25_U0_cache_V_d0),
    .i_q0(cache_V_i_q0),
    .t_address0(write_burst_U0_cache_V_address0),
    .t_ce0(write_burst_U0_cache_V_ce0),
    .t_we0(1'b0),
    .t_d0(64'd0),
    .t_q0(cache_V_t_q0),
    .i_ce(1'b1),
    .t_ce(1'b1),
    .i_full_n(cache_V_i_full_n),
    .i_write(ap_channel_done_cache_V),
    .t_empty_n(cache_V_t_empty_n),
    .t_read(write_burst_U0_ap_ready)
);

rx_axis_words25 rx_axis_words25_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(rx_axis_words25_U0_ap_start),
    .ap_done(rx_axis_words25_U0_ap_done),
    .ap_continue(rx_axis_words25_U0_ap_continue),
    .ap_idle(rx_axis_words25_U0_ap_idle),
    .ap_ready(rx_axis_words25_U0_ap_ready),
    .axis_V_V_TDATA(axis_V_V_TDATA),
    .axis_V_V_TVALID(axis_V_V_TVALID),
    .axis_V_V_TREADY(rx_axis_words25_U0_axis_V_V_TREADY),
    .loop_count_V(loop_count_V),
    .final_burst_length_V(final_burst_length_V),
    .val_assign(val_assign),
    .cache_V_address0(rx_axis_words25_U0_cache_V_address0),
    .cache_V_ce0(rx_axis_words25_U0_cache_V_ce0),
    .cache_V_we0(rx_axis_words25_U0_cache_V_we0),
    .cache_V_d0(rx_axis_words25_U0_cache_V_d0),
    .rx_buffer_V_offset(rx_buffer_V_offset),
    .rx_buffer_V_offset_out_din(rx_axis_words25_U0_rx_buffer_V_offset_out_din),
    .rx_buffer_V_offset_out_full_n(rx_buffer_V_offset_c_full_n),
    .rx_buffer_V_offset_out_write(rx_axis_words25_U0_rx_buffer_V_offset_out_write),
    .ap_return(rx_axis_words25_U0_ap_return)
);

write_burst write_burst_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(write_burst_U0_ap_start),
    .ap_done(write_burst_U0_ap_done),
    .ap_continue(write_burst_U0_ap_continue),
    .ap_idle(write_burst_U0_ap_idle),
    .ap_ready(write_burst_U0_ap_ready),
    .cache_V_address0(write_burst_U0_cache_V_address0),
    .cache_V_ce0(write_burst_U0_cache_V_ce0),
    .cache_V_q0(cache_V_t_q0),
    .buffer_offset_V(buffer_offset_V_dout),
    .m_axi_rx_buffer_V_AWVALID(write_burst_U0_m_axi_rx_buffer_V_AWVALID),
    .m_axi_rx_buffer_V_AWREADY(m_axi_rx_buffer_V_AWREADY),
    .m_axi_rx_buffer_V_AWADDR(write_burst_U0_m_axi_rx_buffer_V_AWADDR),
    .m_axi_rx_buffer_V_AWID(write_burst_U0_m_axi_rx_buffer_V_AWID),
    .m_axi_rx_buffer_V_AWLEN(write_burst_U0_m_axi_rx_buffer_V_AWLEN),
    .m_axi_rx_buffer_V_AWSIZE(write_burst_U0_m_axi_rx_buffer_V_AWSIZE),
    .m_axi_rx_buffer_V_AWBURST(write_burst_U0_m_axi_rx_buffer_V_AWBURST),
    .m_axi_rx_buffer_V_AWLOCK(write_burst_U0_m_axi_rx_buffer_V_AWLOCK),
    .m_axi_rx_buffer_V_AWCACHE(write_burst_U0_m_axi_rx_buffer_V_AWCACHE),
    .m_axi_rx_buffer_V_AWPROT(write_burst_U0_m_axi_rx_buffer_V_AWPROT),
    .m_axi_rx_buffer_V_AWQOS(write_burst_U0_m_axi_rx_buffer_V_AWQOS),
    .m_axi_rx_buffer_V_AWREGION(write_burst_U0_m_axi_rx_buffer_V_AWREGION),
    .m_axi_rx_buffer_V_AWUSER(write_burst_U0_m_axi_rx_buffer_V_AWUSER),
    .m_axi_rx_buffer_V_WVALID(write_burst_U0_m_axi_rx_buffer_V_WVALID),
    .m_axi_rx_buffer_V_WREADY(m_axi_rx_buffer_V_WREADY),
    .m_axi_rx_buffer_V_WDATA(write_burst_U0_m_axi_rx_buffer_V_WDATA),
    .m_axi_rx_buffer_V_WSTRB(write_burst_U0_m_axi_rx_buffer_V_WSTRB),
    .m_axi_rx_buffer_V_WLAST(write_burst_U0_m_axi_rx_buffer_V_WLAST),
    .m_axi_rx_buffer_V_WID(write_burst_U0_m_axi_rx_buffer_V_WID),
    .m_axi_rx_buffer_V_WUSER(write_burst_U0_m_axi_rx_buffer_V_WUSER),
    .m_axi_rx_buffer_V_ARVALID(write_burst_U0_m_axi_rx_buffer_V_ARVALID),
    .m_axi_rx_buffer_V_ARREADY(1'b0),
    .m_axi_rx_buffer_V_ARADDR(write_burst_U0_m_axi_rx_buffer_V_ARADDR),
    .m_axi_rx_buffer_V_ARID(write_burst_U0_m_axi_rx_buffer_V_ARID),
    .m_axi_rx_buffer_V_ARLEN(write_burst_U0_m_axi_rx_buffer_V_ARLEN),
    .m_axi_rx_buffer_V_ARSIZE(write_burst_U0_m_axi_rx_buffer_V_ARSIZE),
    .m_axi_rx_buffer_V_ARBURST(write_burst_U0_m_axi_rx_buffer_V_ARBURST),
    .m_axi_rx_buffer_V_ARLOCK(write_burst_U0_m_axi_rx_buffer_V_ARLOCK),
    .m_axi_rx_buffer_V_ARCACHE(write_burst_U0_m_axi_rx_buffer_V_ARCACHE),
    .m_axi_rx_buffer_V_ARPROT(write_burst_U0_m_axi_rx_buffer_V_ARPROT),
    .m_axi_rx_buffer_V_ARQOS(write_burst_U0_m_axi_rx_buffer_V_ARQOS),
    .m_axi_rx_buffer_V_ARREGION(write_burst_U0_m_axi_rx_buffer_V_ARREGION),
    .m_axi_rx_buffer_V_ARUSER(write_burst_U0_m_axi_rx_buffer_V_ARUSER),
    .m_axi_rx_buffer_V_RVALID(1'b0),
    .m_axi_rx_buffer_V_RREADY(write_burst_U0_m_axi_rx_buffer_V_RREADY),
    .m_axi_rx_buffer_V_RDATA(64'd0),
    .m_axi_rx_buffer_V_RLAST(1'b0),
    .m_axi_rx_buffer_V_RID(1'd0),
    .m_axi_rx_buffer_V_RUSER(1'd0),
    .m_axi_rx_buffer_V_RRESP(2'd0),
    .m_axi_rx_buffer_V_BVALID(m_axi_rx_buffer_V_BVALID),
    .m_axi_rx_buffer_V_BREADY(write_burst_U0_m_axi_rx_buffer_V_BREADY),
    .m_axi_rx_buffer_V_BRESP(m_axi_rx_buffer_V_BRESP),
    .m_axi_rx_buffer_V_BID(m_axi_rx_buffer_V_BID),
    .m_axi_rx_buffer_V_BUSER(m_axi_rx_buffer_V_BUSER),
    .rx_buffer_V_offset_dout(rx_buffer_V_offset_c_dout),
    .rx_buffer_V_offset_empty_n(rx_buffer_V_offset_c_empty_n),
    .rx_buffer_V_offset_read(write_burst_U0_rx_buffer_V_offset_read)
);

fifo_w29_d2_A rx_buffer_V_offset_c_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(rx_axis_words25_U0_rx_buffer_V_offset_out_din),
    .if_full_n(rx_buffer_V_offset_c_full_n),
    .if_write(rx_axis_words25_U0_rx_buffer_V_offset_out_write),
    .if_dout(rx_buffer_V_offset_c_dout),
    .if_empty_n(rx_buffer_V_offset_c_empty_n),
    .if_read(write_burst_U0_rx_buffer_V_offset_read)
);

fifo_w21_d2_A buffer_offset_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(rx_axis_words25_U0_ap_return),
    .if_full_n(buffer_offset_V_full_n),
    .if_write(ap_channel_done_buffer_offset_V),
    .if_dout(buffer_offset_V_dout),
    .if_empty_n(buffer_offset_V_empty_n),
    .if_read(write_burst_U0_ap_ready)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_sync_reg_channel_write_buffer_offset_V <= 1'b0;
    end else begin
        if (((rx_axis_words25_U0_ap_done & rx_axis_words25_U0_ap_continue) == 1'b1)) begin
            ap_sync_reg_channel_write_buffer_offset_V <= 1'b0;
        end else begin
            ap_sync_reg_channel_write_buffer_offset_V <= ap_sync_channel_write_buffer_offset_V;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_sync_reg_channel_write_cache_V <= 1'b0;
    end else begin
        if (((rx_axis_words25_U0_ap_done & rx_axis_words25_U0_ap_continue) == 1'b1)) begin
            ap_sync_reg_channel_write_cache_V <= 1'b0;
        end else begin
            ap_sync_reg_channel_write_cache_V <= ap_sync_channel_write_cache_V;
        end
    end
end

assign ap_channel_done_buffer_offset_V = (rx_axis_words25_U0_ap_done & (ap_sync_reg_channel_write_buffer_offset_V ^ 1'b1));

assign ap_channel_done_cache_V = (rx_axis_words25_U0_ap_done & (ap_sync_reg_channel_write_cache_V ^ 1'b1));

assign ap_done = write_burst_U0_ap_done;

assign ap_idle = (write_burst_U0_ap_idle & rx_axis_words25_U0_ap_idle & (buffer_offset_V_empty_n ^ 1'b1) & (cache_V_t_empty_n ^ 1'b1));

assign ap_ready = rx_axis_words25_U0_ap_ready;

assign ap_sync_channel_write_buffer_offset_V = ((buffer_offset_V_full_n & ap_channel_done_buffer_offset_V) | ap_sync_reg_channel_write_buffer_offset_V);

assign ap_sync_channel_write_cache_V = ((rx_axis_words25_U0_cache_V_full_n & ap_channel_done_cache_V) | ap_sync_reg_channel_write_cache_V);

assign ap_sync_continue = ap_continue;

assign ap_sync_done = write_burst_U0_ap_done;

assign ap_sync_ready = rx_axis_words25_U0_ap_ready;

assign axis_V_V_TREADY = rx_axis_words25_U0_axis_V_V_TREADY;

assign m_axi_rx_buffer_V_ARADDR = 32'd0;

assign m_axi_rx_buffer_V_ARBURST = 2'd0;

assign m_axi_rx_buffer_V_ARCACHE = 4'd0;

assign m_axi_rx_buffer_V_ARID = 1'd0;

assign m_axi_rx_buffer_V_ARLEN = 32'd0;

assign m_axi_rx_buffer_V_ARLOCK = 2'd0;

assign m_axi_rx_buffer_V_ARPROT = 3'd0;

assign m_axi_rx_buffer_V_ARQOS = 4'd0;

assign m_axi_rx_buffer_V_ARREGION = 4'd0;

assign m_axi_rx_buffer_V_ARSIZE = 3'd0;

assign m_axi_rx_buffer_V_ARUSER = 1'd0;

assign m_axi_rx_buffer_V_ARVALID = 1'b0;

assign m_axi_rx_buffer_V_AWADDR = write_burst_U0_m_axi_rx_buffer_V_AWADDR;

assign m_axi_rx_buffer_V_AWBURST = write_burst_U0_m_axi_rx_buffer_V_AWBURST;

assign m_axi_rx_buffer_V_AWCACHE = write_burst_U0_m_axi_rx_buffer_V_AWCACHE;

assign m_axi_rx_buffer_V_AWID = write_burst_U0_m_axi_rx_buffer_V_AWID;

assign m_axi_rx_buffer_V_AWLEN = write_burst_U0_m_axi_rx_buffer_V_AWLEN;

assign m_axi_rx_buffer_V_AWLOCK = write_burst_U0_m_axi_rx_buffer_V_AWLOCK;

assign m_axi_rx_buffer_V_AWPROT = write_burst_U0_m_axi_rx_buffer_V_AWPROT;

assign m_axi_rx_buffer_V_AWQOS = write_burst_U0_m_axi_rx_buffer_V_AWQOS;

assign m_axi_rx_buffer_V_AWREGION = write_burst_U0_m_axi_rx_buffer_V_AWREGION;

assign m_axi_rx_buffer_V_AWSIZE = write_burst_U0_m_axi_rx_buffer_V_AWSIZE;

assign m_axi_rx_buffer_V_AWUSER = write_burst_U0_m_axi_rx_buffer_V_AWUSER;

assign m_axi_rx_buffer_V_AWVALID = write_burst_U0_m_axi_rx_buffer_V_AWVALID;

assign m_axi_rx_buffer_V_BREADY = write_burst_U0_m_axi_rx_buffer_V_BREADY;

assign m_axi_rx_buffer_V_RREADY = 1'b0;

assign m_axi_rx_buffer_V_WDATA = write_burst_U0_m_axi_rx_buffer_V_WDATA;

assign m_axi_rx_buffer_V_WID = write_burst_U0_m_axi_rx_buffer_V_WID;

assign m_axi_rx_buffer_V_WLAST = write_burst_U0_m_axi_rx_buffer_V_WLAST;

assign m_axi_rx_buffer_V_WSTRB = write_burst_U0_m_axi_rx_buffer_V_WSTRB;

assign m_axi_rx_buffer_V_WUSER = write_burst_U0_m_axi_rx_buffer_V_WUSER;

assign m_axi_rx_buffer_V_WVALID = write_burst_U0_m_axi_rx_buffer_V_WVALID;

assign rx_axis_words25_U0_ap_continue = (ap_sync_channel_write_cache_V & ap_sync_channel_write_buffer_offset_V);

assign rx_axis_words25_U0_ap_start = ap_start;

assign rx_axis_words25_U0_cache_V_full_n = cache_V_i_full_n;

assign rx_axis_words25_U0_start_full_n = 1'b1;

assign rx_axis_words25_U0_start_write = 1'b0;

assign write_burst_U0_ap_continue = ap_continue;

assign write_burst_U0_ap_start = (cache_V_t_empty_n & buffer_offset_V_empty_n);

assign write_burst_U0_start_full_n = 1'b1;

assign write_burst_U0_start_write = 1'b0;

endmodule //dataflow_in_loop
