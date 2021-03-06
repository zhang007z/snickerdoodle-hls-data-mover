// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module read_burst (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        m_axi_tx_buffer_V_AWVALID,
        m_axi_tx_buffer_V_AWREADY,
        m_axi_tx_buffer_V_AWADDR,
        m_axi_tx_buffer_V_AWID,
        m_axi_tx_buffer_V_AWLEN,
        m_axi_tx_buffer_V_AWSIZE,
        m_axi_tx_buffer_V_AWBURST,
        m_axi_tx_buffer_V_AWLOCK,
        m_axi_tx_buffer_V_AWCACHE,
        m_axi_tx_buffer_V_AWPROT,
        m_axi_tx_buffer_V_AWQOS,
        m_axi_tx_buffer_V_AWREGION,
        m_axi_tx_buffer_V_AWUSER,
        m_axi_tx_buffer_V_WVALID,
        m_axi_tx_buffer_V_WREADY,
        m_axi_tx_buffer_V_WDATA,
        m_axi_tx_buffer_V_WSTRB,
        m_axi_tx_buffer_V_WLAST,
        m_axi_tx_buffer_V_WID,
        m_axi_tx_buffer_V_WUSER,
        m_axi_tx_buffer_V_ARVALID,
        m_axi_tx_buffer_V_ARREADY,
        m_axi_tx_buffer_V_ARADDR,
        m_axi_tx_buffer_V_ARID,
        m_axi_tx_buffer_V_ARLEN,
        m_axi_tx_buffer_V_ARSIZE,
        m_axi_tx_buffer_V_ARBURST,
        m_axi_tx_buffer_V_ARLOCK,
        m_axi_tx_buffer_V_ARCACHE,
        m_axi_tx_buffer_V_ARPROT,
        m_axi_tx_buffer_V_ARQOS,
        m_axi_tx_buffer_V_ARREGION,
        m_axi_tx_buffer_V_ARUSER,
        m_axi_tx_buffer_V_RVALID,
        m_axi_tx_buffer_V_RREADY,
        m_axi_tx_buffer_V_RDATA,
        m_axi_tx_buffer_V_RLAST,
        m_axi_tx_buffer_V_RID,
        m_axi_tx_buffer_V_RUSER,
        m_axi_tx_buffer_V_RRESP,
        m_axi_tx_buffer_V_BVALID,
        m_axi_tx_buffer_V_BREADY,
        m_axi_tx_buffer_V_BRESP,
        m_axi_tx_buffer_V_BID,
        m_axi_tx_buffer_V_BUSER,
        tx_buffer_V_offset,
        tx_buffer_V_offset1,
        val_assign,
        loop_count_V,
        final_burst_length_V,
        cache_V_address0,
        cache_V_ce0,
        cache_V_we0,
        cache_V_d0,
        ap_return
);

parameter    ap_ST_fsm_state1 = 10'd1;
parameter    ap_ST_fsm_state2 = 10'd2;
parameter    ap_ST_fsm_state3 = 10'd4;
parameter    ap_ST_fsm_state4 = 10'd8;
parameter    ap_ST_fsm_state5 = 10'd16;
parameter    ap_ST_fsm_state6 = 10'd32;
parameter    ap_ST_fsm_state7 = 10'd64;
parameter    ap_ST_fsm_state8 = 10'd128;
parameter    ap_ST_fsm_pp0_stage0 = 10'd256;
parameter    ap_ST_fsm_state12 = 10'd512;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   m_axi_tx_buffer_V_AWVALID;
input   m_axi_tx_buffer_V_AWREADY;
output  [31:0] m_axi_tx_buffer_V_AWADDR;
output  [0:0] m_axi_tx_buffer_V_AWID;
output  [31:0] m_axi_tx_buffer_V_AWLEN;
output  [2:0] m_axi_tx_buffer_V_AWSIZE;
output  [1:0] m_axi_tx_buffer_V_AWBURST;
output  [1:0] m_axi_tx_buffer_V_AWLOCK;
output  [3:0] m_axi_tx_buffer_V_AWCACHE;
output  [2:0] m_axi_tx_buffer_V_AWPROT;
output  [3:0] m_axi_tx_buffer_V_AWQOS;
output  [3:0] m_axi_tx_buffer_V_AWREGION;
output  [0:0] m_axi_tx_buffer_V_AWUSER;
output   m_axi_tx_buffer_V_WVALID;
input   m_axi_tx_buffer_V_WREADY;
output  [63:0] m_axi_tx_buffer_V_WDATA;
output  [7:0] m_axi_tx_buffer_V_WSTRB;
output   m_axi_tx_buffer_V_WLAST;
output  [0:0] m_axi_tx_buffer_V_WID;
output  [0:0] m_axi_tx_buffer_V_WUSER;
output   m_axi_tx_buffer_V_ARVALID;
input   m_axi_tx_buffer_V_ARREADY;
output  [31:0] m_axi_tx_buffer_V_ARADDR;
output  [0:0] m_axi_tx_buffer_V_ARID;
output  [31:0] m_axi_tx_buffer_V_ARLEN;
output  [2:0] m_axi_tx_buffer_V_ARSIZE;
output  [1:0] m_axi_tx_buffer_V_ARBURST;
output  [1:0] m_axi_tx_buffer_V_ARLOCK;
output  [3:0] m_axi_tx_buffer_V_ARCACHE;
output  [2:0] m_axi_tx_buffer_V_ARPROT;
output  [3:0] m_axi_tx_buffer_V_ARQOS;
output  [3:0] m_axi_tx_buffer_V_ARREGION;
output  [0:0] m_axi_tx_buffer_V_ARUSER;
input   m_axi_tx_buffer_V_RVALID;
output   m_axi_tx_buffer_V_RREADY;
input  [63:0] m_axi_tx_buffer_V_RDATA;
input   m_axi_tx_buffer_V_RLAST;
input  [0:0] m_axi_tx_buffer_V_RID;
input  [0:0] m_axi_tx_buffer_V_RUSER;
input  [1:0] m_axi_tx_buffer_V_RRESP;
input   m_axi_tx_buffer_V_BVALID;
output   m_axi_tx_buffer_V_BREADY;
input  [1:0] m_axi_tx_buffer_V_BRESP;
input  [0:0] m_axi_tx_buffer_V_BID;
input  [0:0] m_axi_tx_buffer_V_BUSER;
input  [28:0] tx_buffer_V_offset;
input  [0:0] tx_buffer_V_offset1;
input  [11:0] val_assign;
input  [11:0] loop_count_V;
input  [12:0] final_burst_length_V;
output  [8:0] cache_V_address0;
output   cache_V_ce0;
output   cache_V_we0;
output  [63:0] cache_V_d0;
output  [12:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg m_axi_tx_buffer_V_ARVALID;
reg m_axi_tx_buffer_V_RREADY;
reg cache_V_ce0;
reg cache_V_we0;
reg[12:0] ap_return;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    tx_buffer_V_blk_n_AR;
wire    ap_CS_fsm_state2;
reg    tx_buffer_V_blk_n_R;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] exitcond_i_i_reg_250;
reg   [9:0] indvar_i_i_reg_132;
reg   [9:0] indvar_i_i_reg_132_pp0_iter1_reg;
wire    ap_block_state9_pp0_stage0_iter0;
reg    ap_block_state10_pp0_stage0_iter1;
wire    ap_block_state11_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
wire   [10:0] tmp_fu_144_p1;
reg   [10:0] tmp_reg_224;
reg    ap_block_state1;
wire   [29:0] sum_i_fu_166_p2;
reg   [29:0] sum_i_reg_229;
reg    ap_sig_ioackin_m_axi_tx_buffer_V_ARREADY;
wire    ap_CS_fsm_state8;
wire   [0:0] exitcond_i_i_fu_182_p2;
reg   [0:0] exitcond_i_i_reg_250_pp0_iter1_reg;
wire   [9:0] indvar_next_i_i_fu_188_p2;
reg   [9:0] indvar_next_i_i_reg_254;
reg    ap_enable_reg_pp0_iter0;
reg   [63:0] tx_buffer_V_addr_rea_reg_259;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state9;
reg    ap_enable_reg_pp0_iter2;
reg   [9:0] ap_phi_mux_indvar_i_i_phi_fu_136_p4;
wire   [63:0] indvar4_i_i_fu_194_p1;
wire   [63:0] sum_cast_i_fu_172_p1;
reg    ap_reg_ioackin_m_axi_tx_buffer_V_ARREADY;
wire   [20:0] tmp_7_i_fu_148_p4;
wire   [29:0] tmp_8_cast_i_fu_158_p1;
wire   [29:0] sext_cast_i_fu_162_p1;
wire    ap_CS_fsm_state12;
wire   [12:0] lhs_V_cast_i_i_fu_199_p1;
wire   [12:0] tmp_2_cast_i_i_fu_208_p1;
wire   [12:0] r_V_fu_202_p2;
wire   [0:0] tmp_3_i_i_fu_211_p2;
wire   [12:0] data_length_V_write_s_fu_217_p3;
reg   [12:0] ap_return_preg;
reg   [9:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 10'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_reg_ioackin_m_axi_tx_buffer_V_ARREADY = 1'b0;
#0 ap_return_preg = 13'd0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state12)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_condition_pp0_exit_iter0_state9) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state8)) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state9)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state9);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end else if ((1'b1 == ap_CS_fsm_state8)) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_reg_ioackin_m_axi_tx_buffer_V_ARREADY <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            if ((ap_sig_ioackin_m_axi_tx_buffer_V_ARREADY == 1'b1)) begin
                ap_reg_ioackin_m_axi_tx_buffer_V_ARREADY <= 1'b0;
            end else if ((m_axi_tx_buffer_V_ARREADY == 1'b1)) begin
                ap_reg_ioackin_m_axi_tx_buffer_V_ARREADY <= 1'b1;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_preg <= 13'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state12)) begin
            ap_return_preg <= data_length_V_write_s_fu_217_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_i_i_reg_250 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_i_i_reg_132 <= indvar_next_i_i_reg_254;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        indvar_i_i_reg_132 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exitcond_i_i_reg_250 <= exitcond_i_i_fu_182_p2;
        exitcond_i_i_reg_250_pp0_iter1_reg <= exitcond_i_i_reg_250;
        indvar_i_i_reg_132_pp0_iter1_reg <= indvar_i_i_reg_132;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_next_i_i_reg_254 <= indvar_next_i_i_fu_188_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        sum_i_reg_229 <= sum_i_fu_166_p2;
        tmp_reg_224 <= tmp_fu_144_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_i_i_reg_250 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tx_buffer_V_addr_rea_reg_259 <= m_axi_tx_buffer_V_RDATA;
    end
end

always @ (*) begin
    if ((exitcond_i_i_fu_182_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state9 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state9 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_i_i_reg_250 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_indvar_i_i_phi_fu_136_p4 = indvar_next_i_i_reg_254;
    end else begin
        ap_phi_mux_indvar_i_i_phi_fu_136_p4 = indvar_i_i_reg_132;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        ap_return = data_length_V_write_s_fu_217_p3;
    end else begin
        ap_return = ap_return_preg;
    end
end

always @ (*) begin
    if ((ap_reg_ioackin_m_axi_tx_buffer_V_ARREADY == 1'b0)) begin
        ap_sig_ioackin_m_axi_tx_buffer_V_ARREADY = m_axi_tx_buffer_V_ARREADY;
    end else begin
        ap_sig_ioackin_m_axi_tx_buffer_V_ARREADY = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        cache_V_ce0 = 1'b1;
    end else begin
        cache_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_i_i_reg_250_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        cache_V_we0 = 1'b1;
    end else begin
        cache_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_reg_ioackin_m_axi_tx_buffer_V_ARREADY == 1'b0) & (1'b1 == ap_CS_fsm_state2))) begin
        m_axi_tx_buffer_V_ARVALID = 1'b1;
    end else begin
        m_axi_tx_buffer_V_ARVALID = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_i_i_reg_250 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        m_axi_tx_buffer_V_RREADY = 1'b1;
    end else begin
        m_axi_tx_buffer_V_RREADY = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        tx_buffer_V_blk_n_AR = m_axi_tx_buffer_V_ARREADY;
    end else begin
        tx_buffer_V_blk_n_AR = 1'b1;
    end
end

always @ (*) begin
    if (((exitcond_i_i_reg_250 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0))) begin
        tx_buffer_V_blk_n_R = m_axi_tx_buffer_V_RVALID;
    end else begin
        tx_buffer_V_blk_n_R = 1'b1;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (ap_sig_ioackin_m_axi_tx_buffer_V_ARREADY == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (exitcond_i_i_fu_182_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0)) & ~((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0)) | ((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (exitcond_i_i_fu_182_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((exitcond_i_i_reg_250 == 1'd0) & (m_axi_tx_buffer_V_RVALID == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((exitcond_i_i_reg_250 == 1'd0) & (m_axi_tx_buffer_V_RVALID == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

always @ (*) begin
    ap_block_state1 = ((ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

always @ (*) begin
    ap_block_state10_pp0_stage0_iter1 = ((exitcond_i_i_reg_250 == 1'd0) & (m_axi_tx_buffer_V_RVALID == 1'b0));
end

assign ap_block_state11_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign cache_V_address0 = indvar4_i_i_fu_194_p1;

assign cache_V_d0 = tx_buffer_V_addr_rea_reg_259;

assign data_length_V_write_s_fu_217_p3 = ((tmp_3_i_i_fu_211_p2[0:0] === 1'b1) ? final_burst_length_V : 13'd4096);

assign exitcond_i_i_fu_182_p2 = ((ap_phi_mux_indvar_i_i_phi_fu_136_p4 == 10'd512) ? 1'b1 : 1'b0);

assign indvar4_i_i_fu_194_p1 = indvar_i_i_reg_132_pp0_iter1_reg;

assign indvar_next_i_i_fu_188_p2 = (ap_phi_mux_indvar_i_i_phi_fu_136_p4 + 10'd1);

assign lhs_V_cast_i_i_fu_199_p1 = loop_count_V;

assign m_axi_tx_buffer_V_ARADDR = sum_cast_i_fu_172_p1;

assign m_axi_tx_buffer_V_ARBURST = 2'd0;

assign m_axi_tx_buffer_V_ARCACHE = 4'd0;

assign m_axi_tx_buffer_V_ARID = 1'd0;

assign m_axi_tx_buffer_V_ARLEN = 32'd512;

assign m_axi_tx_buffer_V_ARLOCK = 2'd0;

assign m_axi_tx_buffer_V_ARPROT = 3'd0;

assign m_axi_tx_buffer_V_ARQOS = 4'd0;

assign m_axi_tx_buffer_V_ARREGION = 4'd0;

assign m_axi_tx_buffer_V_ARSIZE = 3'd0;

assign m_axi_tx_buffer_V_ARUSER = 1'd0;

assign m_axi_tx_buffer_V_AWADDR = 32'd0;

assign m_axi_tx_buffer_V_AWBURST = 2'd0;

assign m_axi_tx_buffer_V_AWCACHE = 4'd0;

assign m_axi_tx_buffer_V_AWID = 1'd0;

assign m_axi_tx_buffer_V_AWLEN = 32'd0;

assign m_axi_tx_buffer_V_AWLOCK = 2'd0;

assign m_axi_tx_buffer_V_AWPROT = 3'd0;

assign m_axi_tx_buffer_V_AWQOS = 4'd0;

assign m_axi_tx_buffer_V_AWREGION = 4'd0;

assign m_axi_tx_buffer_V_AWSIZE = 3'd0;

assign m_axi_tx_buffer_V_AWUSER = 1'd0;

assign m_axi_tx_buffer_V_AWVALID = 1'b0;

assign m_axi_tx_buffer_V_BREADY = 1'b0;

assign m_axi_tx_buffer_V_WDATA = 64'd0;

assign m_axi_tx_buffer_V_WID = 1'd0;

assign m_axi_tx_buffer_V_WLAST = 1'b0;

assign m_axi_tx_buffer_V_WSTRB = 8'd0;

assign m_axi_tx_buffer_V_WUSER = 1'd0;

assign m_axi_tx_buffer_V_WVALID = 1'b0;

assign r_V_fu_202_p2 = ($signed(lhs_V_cast_i_i_fu_199_p1) + $signed(13'd8191));

assign sext_cast_i_fu_162_p1 = tx_buffer_V_offset;

assign sum_cast_i_fu_172_p1 = sum_i_reg_229;

assign sum_i_fu_166_p2 = (tmp_8_cast_i_fu_158_p1 + sext_cast_i_fu_162_p1);

assign tmp_2_cast_i_i_fu_208_p1 = tmp_reg_224;

assign tmp_3_i_i_fu_211_p2 = ((tmp_2_cast_i_i_fu_208_p1 == r_V_fu_202_p2) ? 1'b1 : 1'b0);

assign tmp_7_i_fu_148_p4 = {{{tx_buffer_V_offset1}, {tmp_fu_144_p1}}, {9'd0}};

assign tmp_8_cast_i_fu_158_p1 = tmp_7_i_fu_148_p4;

assign tmp_fu_144_p1 = val_assign[10:0];

endmodule //read_burst
