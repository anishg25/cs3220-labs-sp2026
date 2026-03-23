// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi4_ram_burst__Syms.h"


VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+415,"clk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__tb_axi4_ram_burst__0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__tb_axi4_ram_burst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+415,"clk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBus(c+420,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+421,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+422,"STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+423,"ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"PIPELINE_OUTPUT", false,-1, 31,0);
    tracep->declBus(c+425,"s_axi_awid", false,-1, 7,0);
    tracep->declBus(c+2,"s_axi_awaddr", false,-1, 15,0);
    tracep->declBus(c+3,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+426,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+427,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+428,"s_axi_awlock", false,-1);
    tracep->declBus(c+429,"s_axi_awcache", false,-1, 3,0);
    tracep->declBus(c+430,"s_axi_awprot", false,-1, 2,0);
    tracep->declBit(c+4,"s_axi_awvalid", false,-1);
    tracep->declBit(c+5,"s_axi_awready", false,-1);
    tracep->declBus(c+6,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"s_axi_wlast", false,-1);
    tracep->declBit(c+9,"s_axi_wvalid", false,-1);
    tracep->declBit(c+10,"s_axi_wready", false,-1);
    tracep->declBus(c+11,"s_axi_bid", false,-1, 7,0);
    tracep->declBus(c+431,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+12,"s_axi_bvalid", false,-1);
    tracep->declBit(c+13,"s_axi_bready", false,-1);
    tracep->declBus(c+432,"s_axi_arid", false,-1, 7,0);
    tracep->declBus(c+14,"s_axi_araddr", false,-1, 15,0);
    tracep->declBus(c+15,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+426,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+427,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+428,"s_axi_arlock", false,-1);
    tracep->declBus(c+429,"s_axi_arcache", false,-1, 3,0);
    tracep->declBus(c+430,"s_axi_arprot", false,-1, 2,0);
    tracep->declBit(c+16,"s_axi_arvalid", false,-1);
    tracep->declBit(c+17,"s_axi_arready", false,-1);
    tracep->declBus(c+18,"s_axi_rid", false,-1, 7,0);
    tracep->declBus(c+19,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+431,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+20,"s_axi_rlast", false,-1);
    tracep->declBit(c+21,"s_axi_rvalid", false,-1);
    tracep->declBit(c+22,"s_axi_rready", false,-1);
    tracep->declBit(c+417,"correct_V", false,-1);
    tracep->declBit(c+418,"correct_V_ap_vld", false,-1);
    tracep->pushNamePrefix("axi4_tester_inst ");
    tracep->declBus(c+433,"ap_ST_fsm_state1", false,-1, 18,0);
    tracep->declBus(c+434,"ap_ST_fsm_state2", false,-1, 18,0);
    tracep->declBus(c+435,"ap_ST_fsm_state3", false,-1, 18,0);
    tracep->declBus(c+436,"ap_ST_fsm_state4", false,-1, 18,0);
    tracep->declBus(c+437,"ap_ST_fsm_state5", false,-1, 18,0);
    tracep->declBus(c+438,"ap_ST_fsm_state6", false,-1, 18,0);
    tracep->declBus(c+439,"ap_ST_fsm_state7", false,-1, 18,0);
    tracep->declBus(c+440,"ap_ST_fsm_state8", false,-1, 18,0);
    tracep->declBus(c+441,"ap_ST_fsm_state9", false,-1, 18,0);
    tracep->declBus(c+442,"ap_ST_fsm_state10", false,-1, 18,0);
    tracep->declBus(c+443,"ap_ST_fsm_state11", false,-1, 18,0);
    tracep->declBus(c+444,"ap_ST_fsm_state12", false,-1, 18,0);
    tracep->declBus(c+445,"ap_ST_fsm_state13", false,-1, 18,0);
    tracep->declBus(c+446,"ap_ST_fsm_state14", false,-1, 18,0);
    tracep->declBus(c+447,"ap_ST_fsm_state15", false,-1, 18,0);
    tracep->declBus(c+448,"ap_ST_fsm_state16", false,-1, 18,0);
    tracep->declBus(c+449,"ap_ST_fsm_state17", false,-1, 18,0);
    tracep->declBus(c+450,"ap_ST_fsm_state18", false,-1, 18,0);
    tracep->declBus(c+451,"ap_ST_fsm_state19", false,-1, 18,0);
    tracep->declBus(c+452,"C_M_AXI_DATA_IN_OUT_V_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+420,"C_M_AXI_DATA_IN_OUT_V_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+420,"C_M_AXI_DATA_IN_OUT_V_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_DATA_IN_OUT_V_AWUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_DATA_IN_OUT_V_ARUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_DATA_IN_OUT_V_WUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_DATA_IN_OUT_V_RUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_DATA_IN_OUT_V_BUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"C_M_AXI_DATA_IN_OUT_V_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+424,"C_M_AXI_DATA_IN_OUT_V_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+424,"C_M_AXI_DATA_IN_OUT_V_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+453,"C_M_AXI_DATA_IN_OUT_V_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+420,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+422,"C_M_AXI_DATA_IN_OUT_V_WSTRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+422,"C_M_AXI_WSTRB_WIDTH", false,-1, 31,0);
    tracep->declBit(c+415,"ap_clk", false,-1);
    tracep->declBit(c+419,"ap_rst_n", false,-1);
    tracep->declBit(c+4,"m_axi_data_in_out_V_AWVALID", false,-1);
    tracep->declBit(c+5,"m_axi_data_in_out_V_AWREADY", false,-1);
    tracep->declBus(c+23,"m_axi_data_in_out_V_AWADDR", false,-1, 31,0);
    tracep->declBus(c+454,"m_axi_data_in_out_V_AWID", false,-1, 0,0);
    tracep->declBus(c+3,"m_axi_data_in_out_V_AWLEN", false,-1, 7,0);
    tracep->declBus(c+426,"m_axi_data_in_out_V_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+427,"m_axi_data_in_out_V_AWBURST", false,-1, 1,0);
    tracep->declBus(c+431,"m_axi_data_in_out_V_AWLOCK", false,-1, 1,0);
    tracep->declBus(c+429,"m_axi_data_in_out_V_AWCACHE", false,-1, 3,0);
    tracep->declBus(c+430,"m_axi_data_in_out_V_AWPROT", false,-1, 2,0);
    tracep->declBus(c+455,"m_axi_data_in_out_V_AWQOS", false,-1, 3,0);
    tracep->declBus(c+455,"m_axi_data_in_out_V_AWREGION", false,-1, 3,0);
    tracep->declBus(c+454,"m_axi_data_in_out_V_AWUSER", false,-1, 0,0);
    tracep->declBit(c+9,"m_axi_data_in_out_V_WVALID", false,-1);
    tracep->declBit(c+10,"m_axi_data_in_out_V_WREADY", false,-1);
    tracep->declBus(c+6,"m_axi_data_in_out_V_WDATA", false,-1, 31,0);
    tracep->declBus(c+7,"m_axi_data_in_out_V_WSTRB", false,-1, 3,0);
    tracep->declBit(c+8,"m_axi_data_in_out_V_WLAST", false,-1);
    tracep->declBus(c+454,"m_axi_data_in_out_V_WID", false,-1, 0,0);
    tracep->declBus(c+454,"m_axi_data_in_out_V_WUSER", false,-1, 0,0);
    tracep->declBit(c+16,"m_axi_data_in_out_V_ARVALID", false,-1);
    tracep->declBit(c+17,"m_axi_data_in_out_V_ARREADY", false,-1);
    tracep->declBus(c+24,"m_axi_data_in_out_V_ARADDR", false,-1, 31,0);
    tracep->declBus(c+454,"m_axi_data_in_out_V_ARID", false,-1, 0,0);
    tracep->declBus(c+15,"m_axi_data_in_out_V_ARLEN", false,-1, 7,0);
    tracep->declBus(c+426,"m_axi_data_in_out_V_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+427,"m_axi_data_in_out_V_ARBURST", false,-1, 1,0);
    tracep->declBus(c+431,"m_axi_data_in_out_V_ARLOCK", false,-1, 1,0);
    tracep->declBus(c+429,"m_axi_data_in_out_V_ARCACHE", false,-1, 3,0);
    tracep->declBus(c+430,"m_axi_data_in_out_V_ARPROT", false,-1, 2,0);
    tracep->declBus(c+455,"m_axi_data_in_out_V_ARQOS", false,-1, 3,0);
    tracep->declBus(c+455,"m_axi_data_in_out_V_ARREGION", false,-1, 3,0);
    tracep->declBus(c+454,"m_axi_data_in_out_V_ARUSER", false,-1, 0,0);
    tracep->declBit(c+21,"m_axi_data_in_out_V_RVALID", false,-1);
    tracep->declBit(c+22,"m_axi_data_in_out_V_RREADY", false,-1);
    tracep->declBus(c+19,"m_axi_data_in_out_V_RDATA", false,-1, 31,0);
    tracep->declBit(c+20,"m_axi_data_in_out_V_RLAST", false,-1);
    tracep->declBus(c+25,"m_axi_data_in_out_V_RID", false,-1, 0,0);
    tracep->declBus(c+456,"m_axi_data_in_out_V_RUSER", false,-1, 0,0);
    tracep->declBus(c+431,"m_axi_data_in_out_V_RRESP", false,-1, 1,0);
    tracep->declBit(c+12,"m_axi_data_in_out_V_BVALID", false,-1);
    tracep->declBit(c+13,"m_axi_data_in_out_V_BREADY", false,-1);
    tracep->declBus(c+431,"m_axi_data_in_out_V_BRESP", false,-1, 1,0);
    tracep->declBus(c+26,"m_axi_data_in_out_V_BID", false,-1, 0,0);
    tracep->declBus(c+457,"m_axi_data_in_out_V_BUSER", false,-1, 0,0);
    tracep->declBus(c+417,"correct_V", false,-1, 0,0);
    tracep->declBit(c+418,"correct_V_ap_vld", false,-1);
    tracep->declBit(c+416,"ap_rst_n_inv", false,-1);
    tracep->declBus(c+27,"test_data_V_address0", false,-1, 9,0);
    tracep->declBit(c+28,"test_data_V_ce0", false,-1);
    tracep->declBus(c+29,"test_data_V_q0", false,-1, 31,0);
    tracep->declBit(c+30,"data_in_out_V_blk_n_AW", false,-1);
    tracep->declBus(c+31,"ap_CS_fsm", false,-1, 18,0);
    tracep->declBit(c+32,"ap_CS_fsm_state1", false,-1);
    tracep->declBit(c+33,"data_in_out_V_blk_n_B", false,-1);
    tracep->declBit(c+34,"ap_CS_fsm_state8", false,-1);
    tracep->declBit(c+35,"data_in_out_V_blk_n_AR", false,-1);
    tracep->declBit(c+36,"ap_CS_fsm_state9", false,-1);
    tracep->declBit(c+37,"data_in_out_V_blk_n_W", false,-1);
    tracep->declBit(c+38,"ap_CS_fsm_state4", false,-1);
    tracep->declBit(c+39,"data_in_out_V_blk_n_R", false,-1);
    tracep->declBit(c+40,"ap_CS_fsm_state16", false,-1);
    tracep->declBus(c+41,"icmp_ln18_fu_202_p2", false,-1, 0,0);
    tracep->declBit(c+42,"data_in_out_V_AWVALID", false,-1);
    tracep->declBit(c+43,"data_in_out_V_AWREADY", false,-1);
    tracep->declBit(c+44,"data_in_out_V_WVALID", false,-1);
    tracep->declBit(c+45,"data_in_out_V_WREADY", false,-1);
    tracep->declBit(c+46,"data_in_out_V_ARVALID", false,-1);
    tracep->declBit(c+47,"data_in_out_V_ARREADY", false,-1);
    tracep->declBit(c+48,"data_in_out_V_RVALID", false,-1);
    tracep->declBit(c+49,"data_in_out_V_RREADY", false,-1);
    tracep->declBus(c+50,"data_in_out_V_RDATA", false,-1, 31,0);
    tracep->declBit(c+428,"data_in_out_V_RLAST", false,-1);
    tracep->declBus(c+428,"data_in_out_V_RID", false,-1, 0,0);
    tracep->declBus(c+454,"data_in_out_V_RUSER", false,-1, 0,0);
    tracep->declBus(c+51,"data_in_out_V_RRESP", false,-1, 1,0);
    tracep->declBit(c+52,"data_in_out_V_BVALID", false,-1);
    tracep->declBit(c+53,"data_in_out_V_BREADY", false,-1);
    tracep->declBus(c+54,"data_in_out_V_BRESP", false,-1, 1,0);
    tracep->declBus(c+428,"data_in_out_V_BID", false,-1, 0,0);
    tracep->declBus(c+454,"data_in_out_V_BUSER", false,-1, 0,0);
    tracep->declBus(c+55,"i_fu_191_p2", false,-1, 10,0);
    tracep->declBus(c+56,"i_reg_246", false,-1, 10,0);
    tracep->declBit(c+57,"ap_CS_fsm_state2", false,-1);
    tracep->declBus(c+58,"icmp_ln13_fu_185_p2", false,-1, 0,0);
    tracep->declBus(c+59,"test_data_V_load_reg_256", false,-1, 31,0);
    tracep->declBit(c+60,"ap_CS_fsm_state3", false,-1);
    tracep->declBus(c+61,"i_1_fu_208_p2", false,-1, 10,0);
    tracep->declBus(c+62,"i_1_reg_264", false,-1, 10,0);
    tracep->declBit(c+63,"ap_block_state16", false,-1);
    tracep->declBus(c+64,"data_in_out_V_read_reg_269", false,-1, 31,0);
    tracep->declBus(c+65,"icmp_ln24_fu_219_p2", false,-1, 0,0);
    tracep->declBus(c+66,"icmp_ln24_reg_274", false,-1, 0,0);
    tracep->declBit(c+67,"ap_CS_fsm_state18", false,-1);
    tracep->declBus(c+68,"i_2_fu_225_p2", false,-1, 10,0);
    tracep->declBus(c+69,"i_2_reg_278", false,-1, 10,0);
    tracep->declBus(c+70,"data_from_mem_V_address0", false,-1, 9,0);
    tracep->declBit(c+71,"data_from_mem_V_ce0", false,-1);
    tracep->declBit(c+72,"data_from_mem_V_we0", false,-1);
    tracep->declBus(c+73,"data_from_mem_V_q0", false,-1, 31,0);
    tracep->declBus(c+74,"i_0_reg_138", false,-1, 10,0);
    tracep->declBus(c+75,"i1_0_reg_149", false,-1, 10,0);
    tracep->declBit(c+72,"ap_CS_fsm_state17", false,-1);
    tracep->declBit(c+76,"ap_CS_fsm_state15", false,-1);
    tracep->declBus(c+77,"i2_0_reg_161", false,-1, 10,0);
    tracep->declBit(c+78,"ap_CS_fsm_state19", false,-1);
    tracep->declBus(c+79,"icmp_ln883_fu_237_p2", false,-1, 0,0);
    tracep->declBus(c+417,"ap_phi_mux_storemerge_phi_fu_176_p4", false,-1, 0,0);
    tracep->declBus(c+80,"storemerge_reg_172", false,-1, 0,0);
    tracep->declQuad(c+81,"zext_ln15_fu_197_p1", false,-1, 63,0);
    tracep->declQuad(c+83,"zext_ln20_fu_214_p1", false,-1, 63,0);
    tracep->declQuad(c+85,"zext_ln26_fu_231_p1", false,-1, 63,0);
    tracep->declBus(c+87,"ap_NS_fsm", false,-1, 18,0);
    tracep->pushNamePrefix("axi4_tester_data_in_out_V_m_axi_U ");
    tracep->declBus(c+424,"CONSERVATIVE", false,-1, 31,0);
    tracep->declBus(c+421,"NUM_READ_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+421,"NUM_WRITE_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+421,"MAX_READ_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+421,"MAX_WRITE_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+420,"C_M_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"C_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+420,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_AWUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_ARUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_WUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_RUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_BUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"C_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+424,"C_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+453,"C_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+420,"USER_DW", false,-1, 31,0);
    tracep->declBus(c+420,"USER_AW", false,-1, 31,0);
    tracep->declBus(c+458,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBit(c+415,"ACLK", false,-1);
    tracep->declBit(c+416,"ARESET", false,-1);
    tracep->declBit(c+459,"ACLK_EN", false,-1);
    tracep->declBus(c+454,"AWID", false,-1, 0,0);
    tracep->declBus(c+23,"AWADDR", false,-1, 31,0);
    tracep->declBus(c+3,"AWLEN", false,-1, 7,0);
    tracep->declBus(c+426,"AWSIZE", false,-1, 2,0);
    tracep->declBus(c+427,"AWBURST", false,-1, 1,0);
    tracep->declBus(c+431,"AWLOCK", false,-1, 1,0);
    tracep->declBus(c+429,"AWCACHE", false,-1, 3,0);
    tracep->declBus(c+430,"AWPROT", false,-1, 2,0);
    tracep->declBus(c+455,"AWQOS", false,-1, 3,0);
    tracep->declBus(c+455,"AWREGION", false,-1, 3,0);
    tracep->declBus(c+454,"AWUSER", false,-1, 0,0);
    tracep->declBit(c+4,"AWVALID", false,-1);
    tracep->declBit(c+5,"AWREADY", false,-1);
    tracep->declBus(c+454,"WID", false,-1, 0,0);
    tracep->declBus(c+6,"WDATA", false,-1, 31,0);
    tracep->declBus(c+7,"WSTRB", false,-1, 3,0);
    tracep->declBit(c+8,"WLAST", false,-1);
    tracep->declBus(c+454,"WUSER", false,-1, 0,0);
    tracep->declBit(c+9,"WVALID", false,-1);
    tracep->declBit(c+10,"WREADY", false,-1);
    tracep->declBus(c+26,"BID", false,-1, 0,0);
    tracep->declBus(c+431,"BRESP", false,-1, 1,0);
    tracep->declBus(c+457,"BUSER", false,-1, 0,0);
    tracep->declBit(c+12,"BVALID", false,-1);
    tracep->declBit(c+13,"BREADY", false,-1);
    tracep->declBus(c+454,"ARID", false,-1, 0,0);
    tracep->declBus(c+24,"ARADDR", false,-1, 31,0);
    tracep->declBus(c+15,"ARLEN", false,-1, 7,0);
    tracep->declBus(c+426,"ARSIZE", false,-1, 2,0);
    tracep->declBus(c+427,"ARBURST", false,-1, 1,0);
    tracep->declBus(c+431,"ARLOCK", false,-1, 1,0);
    tracep->declBus(c+429,"ARCACHE", false,-1, 3,0);
    tracep->declBus(c+430,"ARPROT", false,-1, 2,0);
    tracep->declBus(c+455,"ARQOS", false,-1, 3,0);
    tracep->declBus(c+455,"ARREGION", false,-1, 3,0);
    tracep->declBus(c+454,"ARUSER", false,-1, 0,0);
    tracep->declBit(c+16,"ARVALID", false,-1);
    tracep->declBit(c+17,"ARREADY", false,-1);
    tracep->declBus(c+25,"RID", false,-1, 0,0);
    tracep->declBus(c+19,"RDATA", false,-1, 31,0);
    tracep->declBus(c+431,"RRESP", false,-1, 1,0);
    tracep->declBit(c+20,"RLAST", false,-1);
    tracep->declBus(c+456,"RUSER", false,-1, 0,0);
    tracep->declBit(c+21,"RVALID", false,-1);
    tracep->declBit(c+22,"RREADY", false,-1);
    tracep->declBus(c+428,"I_AWID", false,-1, 0,0);
    tracep->declBus(c+424,"I_AWADDR", false,-1, 31,0);
    tracep->declBus(c+460,"I_AWLEN", false,-1, 31,0);
    tracep->declBus(c+430,"I_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+431,"I_AWBURST", false,-1, 1,0);
    tracep->declBus(c+431,"I_AWLOCK", false,-1, 1,0);
    tracep->declBus(c+455,"I_AWCACHE", false,-1, 3,0);
    tracep->declBus(c+430,"I_AWPROT", false,-1, 2,0);
    tracep->declBus(c+455,"I_AWQOS", false,-1, 3,0);
    tracep->declBus(c+455,"I_AWREGION", false,-1, 3,0);
    tracep->declBus(c+428,"I_AWUSER", false,-1, 0,0);
    tracep->declBit(c+42,"I_AWVALID", false,-1);
    tracep->declBit(c+43,"I_AWREADY", false,-1);
    tracep->declBus(c+428,"I_WID", false,-1, 0,0);
    tracep->declBus(c+59,"I_WDATA", false,-1, 31,0);
    tracep->declBit(c+428,"I_WLAST", false,-1);
    tracep->declBus(c+461,"I_WSTRB", false,-1, 3,0);
    tracep->declBus(c+428,"I_WUSER", false,-1, 0,0);
    tracep->declBit(c+44,"I_WVALID", false,-1);
    tracep->declBit(c+45,"I_WREADY", false,-1);
    tracep->declBus(c+428,"I_BID", false,-1, 0,0);
    tracep->declBus(c+54,"I_BRESP", false,-1, 1,0);
    tracep->declBus(c+454,"I_BUSER", false,-1, 0,0);
    tracep->declBit(c+52,"I_BVALID", false,-1);
    tracep->declBit(c+53,"I_BREADY", false,-1);
    tracep->declBus(c+428,"I_ARID", false,-1, 0,0);
    tracep->declBus(c+424,"I_ARADDR", false,-1, 31,0);
    tracep->declBus(c+460,"I_ARLEN", false,-1, 31,0);
    tracep->declBus(c+430,"I_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+431,"I_ARBURST", false,-1, 1,0);
    tracep->declBus(c+431,"I_ARLOCK", false,-1, 1,0);
    tracep->declBus(c+455,"I_ARCACHE", false,-1, 3,0);
    tracep->declBus(c+430,"I_ARPROT", false,-1, 2,0);
    tracep->declBus(c+455,"I_ARQOS", false,-1, 3,0);
    tracep->declBus(c+455,"I_ARREGION", false,-1, 3,0);
    tracep->declBus(c+428,"I_ARUSER", false,-1, 0,0);
    tracep->declBit(c+46,"I_ARVALID", false,-1);
    tracep->declBit(c+47,"I_ARREADY", false,-1);
    tracep->declBus(c+428,"I_RID", false,-1, 0,0);
    tracep->declBus(c+50,"I_RDATA", false,-1, 31,0);
    tracep->declBus(c+51,"I_RRESP", false,-1, 1,0);
    tracep->declBit(c+428,"I_RLAST", false,-1);
    tracep->declBus(c+454,"I_RUSER", false,-1, 0,0);
    tracep->declBit(c+48,"I_RVALID", false,-1);
    tracep->declBit(c+49,"I_RREADY", false,-1);
    tracep->declBus(c+23,"AWADDR_Dummy", false,-1, 31,0);
    tracep->declBus(c+3,"AWLEN_Dummy", false,-1, 7,0);
    tracep->declBit(c+88,"AWVALID_Dummy", false,-1);
    tracep->declBit(c+89,"AWREADY_Dummy", false,-1);
    tracep->declBus(c+6,"WDATA_Dummy", false,-1, 31,0);
    tracep->declBus(c+7,"WSTRB_Dummy", false,-1, 3,0);
    tracep->declBit(c+8,"WLAST_Dummy", false,-1);
    tracep->declBit(c+9,"WVALID_Dummy", false,-1);
    tracep->declBit(c+10,"WREADY_Dummy", false,-1);
    tracep->pushNamePrefix("bus_read ");
    tracep->declBus(c+421,"NUM_READ_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+421,"MAX_READ_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+420,"C_M_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"C_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+420,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_ARUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_RUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"C_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+424,"C_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+453,"C_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+420,"USER_DW", false,-1, 31,0);
    tracep->declBus(c+420,"USER_AW", false,-1, 31,0);
    tracep->declBus(c+458,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBit(c+415,"ACLK", false,-1);
    tracep->declBit(c+416,"ARESET", false,-1);
    tracep->declBit(c+459,"ACLK_EN", false,-1);
    tracep->declBus(c+454,"ARID", false,-1, 0,0);
    tracep->declBus(c+24,"ARADDR", false,-1, 31,0);
    tracep->declBus(c+15,"ARLEN", false,-1, 7,0);
    tracep->declBus(c+426,"ARSIZE", false,-1, 2,0);
    tracep->declBus(c+427,"ARBURST", false,-1, 1,0);
    tracep->declBus(c+431,"ARLOCK", false,-1, 1,0);
    tracep->declBus(c+429,"ARCACHE", false,-1, 3,0);
    tracep->declBus(c+430,"ARPROT", false,-1, 2,0);
    tracep->declBus(c+455,"ARQOS", false,-1, 3,0);
    tracep->declBus(c+455,"ARREGION", false,-1, 3,0);
    tracep->declBus(c+454,"ARUSER", false,-1, 0,0);
    tracep->declBit(c+16,"ARVALID", false,-1);
    tracep->declBit(c+17,"ARREADY", false,-1);
    tracep->declBus(c+25,"RID", false,-1, 0,0);
    tracep->declBus(c+19,"RDATA", false,-1, 31,0);
    tracep->declBus(c+431,"RRESP", false,-1, 1,0);
    tracep->declBit(c+20,"RLAST", false,-1);
    tracep->declBus(c+456,"RUSER", false,-1, 0,0);
    tracep->declBit(c+21,"RVALID", false,-1);
    tracep->declBit(c+22,"RREADY", false,-1);
    tracep->declBit(c+46,"rreq_valid", false,-1);
    tracep->declBit(c+47,"rreq_ack", false,-1);
    tracep->declBus(c+424,"rreq_addr", false,-1, 31,0);
    tracep->declBus(c+460,"rreq_length", false,-1, 31,0);
    tracep->declBus(c+455,"rreq_cache", false,-1, 3,0);
    tracep->declBus(c+430,"rreq_prot", false,-1, 2,0);
    tracep->declBus(c+455,"rreq_qos", false,-1, 3,0);
    tracep->declBus(c+455,"rreq_region", false,-1, 3,0);
    tracep->declBus(c+428,"rreq_user", false,-1, 0,0);
    tracep->declBus(c+50,"rdata_data", false,-1, 31,0);
    tracep->declBus(c+51,"rrsp", false,-1, 1,0);
    tracep->declBit(c+48,"rdata_valid", false,-1);
    tracep->declBit(c+49,"rdata_ack", false,-1);
    tracep->declBus(c+420,"USER_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+422,"USER_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+462,"USER_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+420,"BUS_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+422,"BUS_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+462,"BUS_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+422,"NUM_READ_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+463,"BOUNDARY_BEATS", false,-1, 9,0);
    tracep->declBus(c+464,"calc_data_width__Vstatic__y", false,-1, 31,0);
    tracep->declBus(c+465,"log2__Vstatic__n", false,-1, 31,0);
    tracep->declBus(c+466,"log2__Vstatic__m", false,-1, 31,0);
    tracep->declQuad(c+467,"rreq_data", false,-1, 63,0);
    tracep->declQuad(c+90,"rs2f_rreq_data", false,-1, 63,0);
    tracep->declBit(c+92,"rs2f_rreq_valid", false,-1);
    tracep->declBit(c+93,"rs2f_rreq_ack", false,-1);
    tracep->declQuad(c+94,"fifo_rreq_data", false,-1, 63,0);
    tracep->declBus(c+96,"tmp_addr", false,-1, 31,0);
    tracep->declBus(c+97,"tmp_len", false,-1, 31,0);
    tracep->declBus(c+98,"align_len", false,-1, 31,0);
    tracep->declBus(c+99,"arlen_tmp", false,-1, 7,0);
    tracep->declBus(c+100,"araddr_tmp", false,-1, 31,0);
    tracep->declBus(c+101,"start_addr", false,-1, 31,0);
    tracep->declBus(c+102,"start_addr_buf", false,-1, 31,0);
    tracep->declBus(c+103,"end_addr", false,-1, 31,0);
    tracep->declBus(c+104,"end_addr_buf", false,-1, 31,0);
    tracep->declBus(c+105,"sect_addr", false,-1, 31,0);
    tracep->declBus(c+106,"sect_addr_buf", false,-1, 31,0);
    tracep->declBus(c+107,"sect_end", false,-1, 1,0);
    tracep->declBus(c+108,"sect_end_buf", false,-1, 1,0);
    tracep->declBus(c+109,"burst_end", false,-1, 1,0);
    tracep->declBus(c+110,"start_to_4k", false,-1, 9,0);
    tracep->declBus(c+111,"sect_len", false,-1, 9,0);
    tracep->declBus(c+112,"sect_len_buf", false,-1, 9,0);
    tracep->declBus(c+113,"beat_len_buf", false,-1, 9,0);
    tracep->declBus(c+114,"sect_cnt", false,-1, 19,0);
    tracep->declBus(c+115,"ar2r_ardata", false,-1, 1,0);
    tracep->declBit(c+116,"fifo_rctl_r", false,-1);
    tracep->declBit(c+117,"zero_len_event", false,-1);
    tracep->declBit(c+118,"negative_len_event", false,-1);
    tracep->declBit(c+119,"invalid_len_event", false,-1);
    tracep->declBit(c+120,"invalid_len_event_reg1", false,-1);
    tracep->declBit(c+121,"invalid_len_event_reg2", false,-1);
    tracep->declBit(c+122,"fifo_rreq_valid", false,-1);
    tracep->declBit(c+123,"fifo_rreq_valid_buf", false,-1);
    tracep->declBit(c+124,"fifo_rreq_read", false,-1);
    tracep->declBit(c+116,"fifo_burst_w", false,-1);
    tracep->declBit(c+469,"fifo_resp_w", false,-1);
    tracep->declBit(c+16,"ARVALID_Dummy", false,-1);
    tracep->declBit(c+125,"ready_for_sect", false,-1);
    tracep->declBit(c+124,"next_rreq", false,-1);
    tracep->declBit(c+126,"ready_for_rreq", false,-1);
    tracep->declBit(c+127,"rreq_handling", false,-1);
    tracep->declBit(c+128,"first_sect", false,-1);
    tracep->declBit(c+129,"last_sect", false,-1);
    tracep->declBit(c+130,"next_sect", false,-1);
    tracep->declQuad(c+131,"fifo_rresp_rdata", false,-1, 34,0);
    tracep->declQuad(c+133,"data_pack", false,-1, 34,0);
    tracep->declBus(c+135,"tmp_data", false,-1, 31,0);
    tracep->declQuad(c+136,"rs_rrsp_rdata", false,-1, 33,0);
    tracep->declQuad(c+138,"rdata_data_pack", false,-1, 33,0);
    tracep->declBus(c+470,"len_cnt", false,-1, 7,0);
    tracep->declBus(c+140,"ar2r_rdata", false,-1, 1,0);
    tracep->declBus(c+141,"tmp_resp", false,-1, 1,0);
    tracep->declBus(c+142,"resp_buf", false,-1, 1,0);
    tracep->declBit(c+143,"tmp_last", false,-1);
    tracep->declBit(c+144,"tmp_last_2", false,-1);
    tracep->declBit(c+145,"need_rlast", false,-1);
    tracep->declBit(c+146,"fifo_rctl_ready", false,-1);
    tracep->declBit(c+147,"beat_valid", false,-1);
    tracep->declBit(c+148,"next_beat", false,-1);
    tracep->declBit(c+471,"burst_valid", false,-1);
    tracep->declBit(c+459,"fifo_burst_ready", false,-1);
    tracep->declBit(c+472,"next_burst", false,-1);
    tracep->declBit(c+149,"rdata_ack_t", false,-1);
    tracep->declBit(c+150,"rdata_valid_t", false,-1);
    tracep->pushNamePrefix("buff_rdata ");
    tracep->declQuad(c+473,"MEM_STYLE", false,-1, 39,0);
    tracep->declBus(c+475,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+423,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+476,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+415,"clk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBit(c+459,"sclk_en", false,-1);
    tracep->declBit(c+22,"if_full_n", false,-1);
    tracep->declBit(c+459,"if_write_ce", false,-1);
    tracep->declBit(c+21,"if_write", false,-1);
    tracep->declQuad(c+131,"if_din", false,-1, 34,0);
    tracep->declBit(c+147,"if_empty_n", false,-1);
    tracep->declBit(c+459,"if_read_ce", false,-1);
    tracep->declBit(c+148,"if_read", false,-1);
    tracep->declQuad(c+133,"if_dout", false,-1, 34,0);
    tracep->declQuad(c+151,"q_buf", false,-1, 34,0);
    tracep->declBus(c+153,"waddr", false,-1, 7,0);
    tracep->declBus(c+154,"raddr", false,-1, 7,0);
    tracep->declBus(c+155,"wnext", false,-1, 7,0);
    tracep->declBus(c+156,"rnext", false,-1, 7,0);
    tracep->declBit(c+157,"push", false,-1);
    tracep->declBit(c+158,"pop", false,-1);
    tracep->declBus(c+159,"usedw", false,-1, 7,0);
    tracep->declBit(c+22,"full_n", false,-1);
    tracep->declBit(c+160,"empty_n", false,-1);
    tracep->declQuad(c+161,"q_tmp", false,-1, 34,0);
    tracep->declBit(c+163,"show_ahead", false,-1);
    tracep->declQuad(c+133,"dout_buf", false,-1, 34,0);
    tracep->declBit(c+147,"dout_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_equal_gen ");
    tracep->declBus(c+164,"data_buf", false,-1, 31,0);
    tracep->declBit(c+165,"ready_for_data", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("could_multi_bursts ");
    tracep->declBus(c+24,"araddr_buf", false,-1, 31,0);
    tracep->declBus(c+15,"arlen_buf", false,-1, 7,0);
    tracep->declBus(c+166,"loop_cnt", false,-1, 5,0);
    tracep->declBit(c+167,"sect_handling", false,-1);
    tracep->declBit(c+168,"last_loop", false,-1);
    tracep->declBit(c+116,"next_loop", false,-1);
    tracep->declBit(c+169,"ready_for_loop", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_rctl ");
    tracep->declBus(c+462,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+477,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+422,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+415,"sclk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBit(c+459,"sclk_en", false,-1);
    tracep->declBit(c+145,"empty_n", false,-1);
    tracep->declBit(c+146,"full_n", false,-1);
    tracep->declBit(c+144,"rdreq", false,-1);
    tracep->declBit(c+116,"wrreq", false,-1);
    tracep->declBus(c+140,"q", false,-1, 1,0);
    tracep->declBus(c+115,"data", false,-1, 1,0);
    tracep->declBit(c+170,"push", false,-1);
    tracep->declBit(c+171,"pop", false,-1);
    tracep->declBit(c+172,"full_cond", false,-1);
    tracep->declBit(c+173,"data_vld", false,-1);
    tracep->declBus(c+174,"pout", false,-1, 3,0);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+175+i*1,"mem", true,(i+0), 1,0);
    }
    tracep->declBus(c+190,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_rreq ");
    tracep->declBus(c+478,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+458,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+453,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+415,"sclk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBit(c+459,"sclk_en", false,-1);
    tracep->declBit(c+122,"empty_n", false,-1);
    tracep->declBit(c+93,"full_n", false,-1);
    tracep->declBit(c+124,"rdreq", false,-1);
    tracep->declBit(c+92,"wrreq", false,-1);
    tracep->declQuad(c+94,"q", false,-1, 63,0);
    tracep->declQuad(c+90,"data", false,-1, 63,0);
    tracep->declBit(c+191,"push", false,-1);
    tracep->declBit(c+192,"pop", false,-1);
    tracep->declBit(c+193,"full_cond", false,-1);
    tracep->declBit(c+194,"data_vld", false,-1);
    tracep->declBus(c+195,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+196+i*2,"mem", true,(i+0), 63,0);
    }
    tracep->declBus(c+206,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs_rdata ");
    tracep->declBus(c+479,"N", false,-1, 31,0);
    tracep->declBit(c+415,"sclk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declQuad(c+136,"s_data", false,-1, 33,0);
    tracep->declBit(c+150,"s_valid", false,-1);
    tracep->declBit(c+149,"s_ready", false,-1);
    tracep->declQuad(c+138,"m_data", false,-1, 33,0);
    tracep->declBit(c+48,"m_valid", false,-1);
    tracep->declBit(c+49,"m_ready", false,-1);
    tracep->declBus(c+480,"ZERO", false,-1, 1,0);
    tracep->declBus(c+481,"ONE", false,-1, 1,0);
    tracep->declBus(c+427,"TWO", false,-1, 1,0);
    tracep->declQuad(c+138,"data_p1", false,-1, 33,0);
    tracep->declQuad(c+207,"data_p2", false,-1, 33,0);
    tracep->declBit(c+209,"load_p1", false,-1);
    tracep->declBit(c+210,"load_p2", false,-1);
    tracep->declBit(c+211,"load_p1_from_p2", false,-1);
    tracep->declBit(c+149,"s_ready_t", false,-1);
    tracep->declBus(c+212,"state", false,-1, 1,0);
    tracep->declBus(c+213,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs_rreq ");
    tracep->declBus(c+478,"N", false,-1, 31,0);
    tracep->declBit(c+415,"sclk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declQuad(c+467,"s_data", false,-1, 63,0);
    tracep->declBit(c+46,"s_valid", false,-1);
    tracep->declBit(c+47,"s_ready", false,-1);
    tracep->declQuad(c+90,"m_data", false,-1, 63,0);
    tracep->declBit(c+92,"m_valid", false,-1);
    tracep->declBit(c+93,"m_ready", false,-1);
    tracep->declBus(c+480,"ZERO", false,-1, 1,0);
    tracep->declBus(c+481,"ONE", false,-1, 1,0);
    tracep->declBus(c+427,"TWO", false,-1, 1,0);
    tracep->declQuad(c+90,"data_p1", false,-1, 63,0);
    tracep->declQuad(c+214,"data_p2", false,-1, 63,0);
    tracep->declBit(c+216,"load_p1", false,-1);
    tracep->declBit(c+217,"load_p2", false,-1);
    tracep->declBit(c+218,"load_p1_from_p2", false,-1);
    tracep->declBit(c+47,"s_ready_t", false,-1);
    tracep->declBus(c+219,"state", false,-1, 1,0);
    tracep->declBus(c+220,"next", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("bus_write ");
    tracep->declBus(c+421,"NUM_WRITE_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+421,"MAX_WRITE_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+420,"C_M_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"C_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+420,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_AWUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_WUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"C_M_AXI_BUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"C_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+424,"C_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+453,"C_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+420,"USER_DW", false,-1, 31,0);
    tracep->declBus(c+420,"USER_AW", false,-1, 31,0);
    tracep->declBus(c+458,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBit(c+415,"ACLK", false,-1);
    tracep->declBit(c+416,"ARESET", false,-1);
    tracep->declBit(c+459,"ACLK_EN", false,-1);
    tracep->declBus(c+454,"AWID", false,-1, 0,0);
    tracep->declBus(c+23,"AWADDR", false,-1, 31,0);
    tracep->declBus(c+3,"AWLEN", false,-1, 7,0);
    tracep->declBus(c+426,"AWSIZE", false,-1, 2,0);
    tracep->declBus(c+427,"AWBURST", false,-1, 1,0);
    tracep->declBus(c+431,"AWLOCK", false,-1, 1,0);
    tracep->declBus(c+429,"AWCACHE", false,-1, 3,0);
    tracep->declBus(c+430,"AWPROT", false,-1, 2,0);
    tracep->declBus(c+455,"AWQOS", false,-1, 3,0);
    tracep->declBus(c+455,"AWREGION", false,-1, 3,0);
    tracep->declBus(c+454,"AWUSER", false,-1, 0,0);
    tracep->declBit(c+88,"AWVALID", false,-1);
    tracep->declBit(c+89,"AWREADY", false,-1);
    tracep->declBus(c+454,"WID", false,-1, 0,0);
    tracep->declBus(c+6,"WDATA", false,-1, 31,0);
    tracep->declBus(c+7,"WSTRB", false,-1, 3,0);
    tracep->declBit(c+8,"WLAST", false,-1);
    tracep->declBus(c+454,"WUSER", false,-1, 0,0);
    tracep->declBit(c+9,"WVALID", false,-1);
    tracep->declBit(c+10,"WREADY", false,-1);
    tracep->declBus(c+26,"BID", false,-1, 0,0);
    tracep->declBus(c+431,"BRESP", false,-1, 1,0);
    tracep->declBus(c+457,"BUSER", false,-1, 0,0);
    tracep->declBit(c+12,"BVALID", false,-1);
    tracep->declBit(c+13,"BREADY", false,-1);
    tracep->declBit(c+42,"wreq_valid", false,-1);
    tracep->declBit(c+43,"wreq_ack", false,-1);
    tracep->declBus(c+424,"wreq_addr", false,-1, 31,0);
    tracep->declBus(c+460,"wreq_length", false,-1, 31,0);
    tracep->declBus(c+455,"wreq_cache", false,-1, 3,0);
    tracep->declBus(c+430,"wreq_prot", false,-1, 2,0);
    tracep->declBus(c+455,"wreq_qos", false,-1, 3,0);
    tracep->declBus(c+455,"wreq_region", false,-1, 3,0);
    tracep->declBus(c+428,"wreq_user", false,-1, 0,0);
    tracep->declBit(c+44,"wdata_valid", false,-1);
    tracep->declBit(c+45,"wdata_ack", false,-1);
    tracep->declBus(c+461,"wdata_strb", false,-1, 3,0);
    tracep->declBus(c+428,"wdata_user", false,-1, 0,0);
    tracep->declBus(c+59,"wdata_data", false,-1, 31,0);
    tracep->declBit(c+52,"wrsp_valid", false,-1);
    tracep->declBit(c+53,"wrsp_ack", false,-1);
    tracep->declBus(c+54,"wrsp", false,-1, 1,0);
    tracep->declBus(c+420,"USER_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+422,"USER_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+462,"USER_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+420,"BUS_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+422,"BUS_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+462,"BUS_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+422,"NUM_WRITE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+463,"BOUNDARY_BEATS", false,-1, 9,0);
    tracep->declBus(c+482,"calc_data_width__Vstatic__y", false,-1, 31,0);
    tracep->declBus(c+483,"log2__Vstatic__n", false,-1, 31,0);
    tracep->declBus(c+484,"log2__Vstatic__m", false,-1, 31,0);
    tracep->declQuad(c+467,"wreq_data", false,-1, 63,0);
    tracep->declQuad(c+221,"rs2f_wreq_data", false,-1, 63,0);
    tracep->declBit(c+223,"rs2f_wreq_valid", false,-1);
    tracep->declBit(c+224,"rs2f_wreq_ack", false,-1);
    tracep->declQuad(c+225,"fifo_wreq_data", false,-1, 63,0);
    tracep->declBus(c+227,"tmp_addr", false,-1, 31,0);
    tracep->declBus(c+228,"tmp_len", false,-1, 31,0);
    tracep->declBus(c+229,"align_len", false,-1, 31,0);
    tracep->declBus(c+230,"awlen_tmp", false,-1, 7,0);
    tracep->declBus(c+231,"awaddr_tmp", false,-1, 31,0);
    tracep->declBus(c+232,"start_addr", false,-1, 31,0);
    tracep->declBus(c+233,"start_addr_buf", false,-1, 31,0);
    tracep->declBus(c+234,"end_addr", false,-1, 31,0);
    tracep->declBus(c+235,"end_addr_buf", false,-1, 31,0);
    tracep->declBus(c+236,"sect_addr", false,-1, 31,0);
    tracep->declBus(c+237,"sect_addr_buf", false,-1, 31,0);
    tracep->declBus(c+238,"sect_end", false,-1, 1,0);
    tracep->declBus(c+239,"sect_end_buf", false,-1, 1,0);
    tracep->declBus(c+240,"burst_end", false,-1, 1,0);
    tracep->declBus(c+241,"start_to_4k", false,-1, 9,0);
    tracep->declBus(c+242,"sect_len", false,-1, 9,0);
    tracep->declBus(c+243,"sect_len_buf", false,-1, 9,0);
    tracep->declBus(c+244,"beat_len_buf", false,-1, 9,0);
    tracep->declBus(c+245,"aw2b_awdata", false,-1, 1,0);
    tracep->declBus(c+246,"sect_cnt", false,-1, 19,0);
    tracep->declBit(c+247,"zero_len_event", false,-1);
    tracep->declBit(c+248,"negative_len_event", false,-1);
    tracep->declBit(c+249,"invalid_len_event", false,-1);
    tracep->declBit(c+250,"invalid_len_event_reg1", false,-1);
    tracep->declBit(c+251,"invalid_len_event_reg2", false,-1);
    tracep->declBit(c+252,"fifo_wreq_valid", false,-1);
    tracep->declBit(c+253,"fifo_wreq_valid_buf", false,-1);
    tracep->declBit(c+254,"fifo_wreq_read", false,-1);
    tracep->declBit(c+255,"fifo_burst_w", false,-1);
    tracep->declBit(c+256,"fifo_resp_w", false,-1);
    tracep->declBit(c+88,"AWVALID_Dummy", false,-1);
    tracep->declBit(c+257,"last_sect_buf", false,-1);
    tracep->declBit(c+258,"ready_for_sect", false,-1);
    tracep->declBit(c+254,"next_wreq", false,-1);
    tracep->declBit(c+259,"ready_for_wreq", false,-1);
    tracep->declBit(c+260,"wreq_handling", false,-1);
    tracep->declBit(c+261,"first_sect", false,-1);
    tracep->declBit(c+262,"last_sect", false,-1);
    tracep->declBit(c+263,"next_sect", false,-1);
    tracep->declQuad(c+264,"fifo_wdata_wstrb", false,-1, 35,0);
    tracep->declQuad(c+266,"data_pack", false,-1, 35,0);
    tracep->declBus(c+268,"tmp_data", false,-1, 31,0);
    tracep->declBus(c+269,"tmp_strb", false,-1, 3,0);
    tracep->declBus(c+270,"len_cnt", false,-1, 7,0);
    tracep->declBus(c+271,"burst_len", false,-1, 7,0);
    tracep->declBit(c+485,"beat_valid", false,-1);
    tracep->declBit(c+272,"next_data", false,-1);
    tracep->declBit(c+273,"burst_valid", false,-1);
    tracep->declBit(c+274,"fifo_burst_ready", false,-1);
    tracep->declBit(c+275,"next_burst", false,-1);
    tracep->declBit(c+276,"data_valid", false,-1);
    tracep->declBit(c+9,"WVALID_Dummy", false,-1);
    tracep->declBit(c+8,"WLAST_Dummy", false,-1);
    tracep->declBus(c+277,"aw2b_bdata", false,-1, 1,0);
    tracep->declBus(c+278,"bresp_tmp", false,-1, 1,0);
    tracep->declBit(c+279,"next_resp", false,-1);
    tracep->declBit(c+280,"last_resp", false,-1);
    tracep->declBit(c+281,"invalid_event", false,-1);
    tracep->declBit(c+282,"fifo_resp_ready", false,-1);
    tracep->declBit(c+283,"need_wrsp", false,-1);
    tracep->declBit(c+284,"resp_match", false,-1);
    tracep->declBit(c+13,"resp_ready", false,-1);
    tracep->pushNamePrefix("buff_wdata ");
    tracep->declQuad(c+473,"MEM_STYLE", false,-1, 39,0);
    tracep->declBus(c+486,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+423,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+476,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+415,"clk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBit(c+459,"sclk_en", false,-1);
    tracep->declBit(c+45,"if_full_n", false,-1);
    tracep->declBit(c+459,"if_write_ce", false,-1);
    tracep->declBit(c+44,"if_write", false,-1);
    tracep->declQuad(c+264,"if_din", false,-1, 35,0);
    tracep->declBit(c+276,"if_empty_n", false,-1);
    tracep->declBit(c+459,"if_read_ce", false,-1);
    tracep->declBit(c+272,"if_read", false,-1);
    tracep->declQuad(c+266,"if_dout", false,-1, 35,0);
    tracep->declQuad(c+285,"q_buf", false,-1, 35,0);
    tracep->declBus(c+287,"waddr", false,-1, 7,0);
    tracep->declBus(c+288,"raddr", false,-1, 7,0);
    tracep->declBus(c+289,"wnext", false,-1, 7,0);
    tracep->declBus(c+290,"rnext", false,-1, 7,0);
    tracep->declBit(c+291,"push", false,-1);
    tracep->declBit(c+292,"pop", false,-1);
    tracep->declBus(c+293,"usedw", false,-1, 7,0);
    tracep->declBit(c+45,"full_n", false,-1);
    tracep->declBit(c+294,"empty_n", false,-1);
    tracep->declQuad(c+295,"q_tmp", false,-1, 35,0);
    tracep->declBit(c+297,"show_ahead", false,-1);
    tracep->declQuad(c+266,"dout_buf", false,-1, 35,0);
    tracep->declBit(c+276,"dout_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_equal_gen ");
    tracep->declBus(c+6,"data_buf", false,-1, 31,0);
    tracep->declBus(c+7,"strb_buf", false,-1, 3,0);
    tracep->declBus(c+230,"tmp_burst_info", false,-1, 7,0);
    tracep->declBit(c+298,"ready_for_data", false,-1);
    tracep->pushNamePrefix("fifo_burst ");
    tracep->declBus(c+423,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+458,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+453,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+415,"sclk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBit(c+459,"sclk_en", false,-1);
    tracep->declBit(c+273,"empty_n", false,-1);
    tracep->declBit(c+274,"full_n", false,-1);
    tracep->declBit(c+275,"rdreq", false,-1);
    tracep->declBit(c+255,"wrreq", false,-1);
    tracep->declBus(c+271,"q", false,-1, 7,0);
    tracep->declBus(c+230,"data", false,-1, 7,0);
    tracep->declBit(c+299,"push", false,-1);
    tracep->declBit(c+300,"pop", false,-1);
    tracep->declBit(c+301,"full_cond", false,-1);
    tracep->declBit(c+302,"data_vld", false,-1);
    tracep->declBus(c+303,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+304+i*1,"mem", true,(i+0), 7,0);
    }
    tracep->declBus(c+309,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("could_multi_bursts ");
    tracep->declBus(c+23,"awaddr_buf", false,-1, 31,0);
    tracep->declBus(c+3,"awlen_buf", false,-1, 7,0);
    tracep->declBus(c+310,"loop_cnt", false,-1, 5,0);
    tracep->declBit(c+311,"sect_handling", false,-1);
    tracep->declBit(c+312,"last_loop", false,-1);
    tracep->declBit(c+256,"next_loop", false,-1);
    tracep->declBit(c+313,"ready_for_loop", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_resp ");
    tracep->declBus(c+462,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+477,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+422,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+415,"sclk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBit(c+459,"sclk_en", false,-1);
    tracep->declBit(c+283,"empty_n", false,-1);
    tracep->declBit(c+282,"full_n", false,-1);
    tracep->declBit(c+279,"rdreq", false,-1);
    tracep->declBit(c+256,"wrreq", false,-1);
    tracep->declBus(c+277,"q", false,-1, 1,0);
    tracep->declBus(c+245,"data", false,-1, 1,0);
    tracep->declBit(c+314,"push", false,-1);
    tracep->declBit(c+315,"pop", false,-1);
    tracep->declBit(c+316,"full_cond", false,-1);
    tracep->declBit(c+317,"data_vld", false,-1);
    tracep->declBus(c+318,"pout", false,-1, 3,0);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+319+i*1,"mem", true,(i+0), 1,0);
    }
    tracep->declBus(c+334,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_resp_to_user ");
    tracep->declBus(c+462,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+458,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+453,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+415,"sclk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBit(c+459,"sclk_en", false,-1);
    tracep->declBit(c+52,"empty_n", false,-1);
    tracep->declBit(c+13,"full_n", false,-1);
    tracep->declBit(c+53,"rdreq", false,-1);
    tracep->declBit(c+284,"wrreq", false,-1);
    tracep->declBus(c+54,"q", false,-1, 1,0);
    tracep->declBus(c+278,"data", false,-1, 1,0);
    tracep->declBit(c+335,"push", false,-1);
    tracep->declBit(c+336,"pop", false,-1);
    tracep->declBit(c+337,"full_cond", false,-1);
    tracep->declBit(c+338,"data_vld", false,-1);
    tracep->declBus(c+339,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+340+i*1,"mem", true,(i+0), 1,0);
    }
    tracep->declBus(c+345,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_wreq ");
    tracep->declBus(c+478,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+458,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+453,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+415,"sclk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBit(c+459,"sclk_en", false,-1);
    tracep->declBit(c+252,"empty_n", false,-1);
    tracep->declBit(c+224,"full_n", false,-1);
    tracep->declBit(c+254,"rdreq", false,-1);
    tracep->declBit(c+223,"wrreq", false,-1);
    tracep->declQuad(c+225,"q", false,-1, 63,0);
    tracep->declQuad(c+221,"data", false,-1, 63,0);
    tracep->declBit(c+346,"push", false,-1);
    tracep->declBit(c+347,"pop", false,-1);
    tracep->declBit(c+348,"full_cond", false,-1);
    tracep->declBit(c+349,"data_vld", false,-1);
    tracep->declBus(c+350,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+351+i*2,"mem", true,(i+0), 63,0);
    }
    tracep->declBus(c+361,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs_wreq ");
    tracep->declBus(c+478,"N", false,-1, 31,0);
    tracep->declBit(c+415,"sclk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declQuad(c+467,"s_data", false,-1, 63,0);
    tracep->declBit(c+42,"s_valid", false,-1);
    tracep->declBit(c+43,"s_ready", false,-1);
    tracep->declQuad(c+221,"m_data", false,-1, 63,0);
    tracep->declBit(c+223,"m_valid", false,-1);
    tracep->declBit(c+224,"m_ready", false,-1);
    tracep->declBus(c+480,"ZERO", false,-1, 1,0);
    tracep->declBus(c+481,"ONE", false,-1, 1,0);
    tracep->declBus(c+427,"TWO", false,-1, 1,0);
    tracep->declQuad(c+221,"data_p1", false,-1, 63,0);
    tracep->declQuad(c+362,"data_p2", false,-1, 63,0);
    tracep->declBit(c+364,"load_p1", false,-1);
    tracep->declBit(c+365,"load_p2", false,-1);
    tracep->declBit(c+366,"load_p1_from_p2", false,-1);
    tracep->declBit(c+43,"s_ready_t", false,-1);
    tracep->declBus(c+367,"state", false,-1, 1,0);
    tracep->declBus(c+368,"next", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wreq_throttl ");
    tracep->declBus(c+424,"USED_FIX", false,-1, 31,0);
    tracep->declBus(c+422,"FIX_VALUE", false,-1, 31,0);
    tracep->declBus(c+420,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+421,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+421,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBus(c+424,"CONSERVATIVE", false,-1, 31,0);
    tracep->declBus(c+424,"AVERAGE_MODE", false,-1, 31,0);
    tracep->declBit(c+415,"clk", false,-1);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBit(c+459,"ce", false,-1);
    tracep->declBus(c+23,"in_addr", false,-1, 31,0);
    tracep->declBus(c+3,"in_len", false,-1, 7,0);
    tracep->declBit(c+88,"in_req_valid", false,-1);
    tracep->declBit(c+89,"out_req_ready", false,-1);
    tracep->declBus(c+23,"out_addr", false,-1, 31,0);
    tracep->declBus(c+3,"out_len", false,-1, 7,0);
    tracep->declBit(c+4,"out_req_valid", false,-1);
    tracep->declBit(c+5,"in_req_ready", false,-1);
    tracep->declBus(c+6,"in_data", false,-1, 31,0);
    tracep->declBus(c+7,"in_strb", false,-1, 3,0);
    tracep->declBit(c+8,"in_last", false,-1);
    tracep->declBit(c+9,"in_data_valid", false,-1);
    tracep->declBit(c+10,"out_data_ready", false,-1);
    tracep->declBus(c+6,"out_data", false,-1, 31,0);
    tracep->declBus(c+7,"out_strb", false,-1, 3,0);
    tracep->declBit(c+8,"out_last", false,-1);
    tracep->declBit(c+9,"out_data_valid", false,-1);
    tracep->declBit(c+10,"in_data_ready", false,-1);
    tracep->declBus(c+487,"log2__Vstatic__n", false,-1, 31,0);
    tracep->declBus(c+488,"log2__Vstatic__m", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBus(c+424,"threshold", false,-1, 31,0);
    tracep->declBit(c+369,"req_en", false,-1);
    tracep->declBit(c+370,"handshake", false,-1);
    tracep->declBus(c+3,"load_init", false,-1, 7,0);
    tracep->declBus(c+371,"throttl_cnt", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("data_from_mem_V_U ");
    tracep->declBus(c+420,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+460,"AddressRange", false,-1, 31,0);
    tracep->declBus(c+489,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBit(c+415,"clk", false,-1);
    tracep->declBus(c+70,"address0", false,-1, 9,0);
    tracep->declBit(c+71,"ce0", false,-1);
    tracep->declBit(c+72,"we0", false,-1);
    tracep->declBus(c+64,"d0", false,-1, 31,0);
    tracep->declBus(c+73,"q0", false,-1, 31,0);
    tracep->pushNamePrefix("axi4_tester_data_from_mem_V_ram_U ");
    tracep->declBus(c+420,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+460,"MEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+70,"addr0", false,-1, 9,0);
    tracep->declBit(c+71,"ce0", false,-1);
    tracep->declBus(c+64,"d0", false,-1, 31,0);
    tracep->declBit(c+72,"we0", false,-1);
    tracep->declBus(c+73,"q0", false,-1, 31,0);
    tracep->declBit(c+415,"clk", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("test_data_V_U ");
    tracep->declBus(c+420,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+460,"AddressRange", false,-1, 31,0);
    tracep->declBus(c+489,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+416,"reset", false,-1);
    tracep->declBit(c+415,"clk", false,-1);
    tracep->declBus(c+27,"address0", false,-1, 9,0);
    tracep->declBit(c+28,"ce0", false,-1);
    tracep->declBus(c+29,"q0", false,-1, 31,0);
    tracep->pushNamePrefix("axi4_tester_test_data_V_rom_U ");
    tracep->declBus(c+420,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+460,"MEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+27,"addr0", false,-1, 9,0);
    tracep->declBit(c+28,"ce0", false,-1);
    tracep->declBus(c+29,"q0", false,-1, 31,0);
    tracep->declBit(c+415,"clk", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi_ram_inst ");
    tracep->declBus(c+420,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+421,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+422,"STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+423,"ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"PIPELINE_OUTPUT", false,-1, 31,0);
    tracep->declBit(c+415,"clk", false,-1);
    tracep->declBit(c+416,"rst", false,-1);
    tracep->declBus(c+425,"s_axi_awid", false,-1, 7,0);
    tracep->declBus(c+2,"s_axi_awaddr", false,-1, 15,0);
    tracep->declBus(c+3,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+426,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+427,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+428,"s_axi_awlock", false,-1);
    tracep->declBus(c+429,"s_axi_awcache", false,-1, 3,0);
    tracep->declBus(c+430,"s_axi_awprot", false,-1, 2,0);
    tracep->declBit(c+4,"s_axi_awvalid", false,-1);
    tracep->declBit(c+5,"s_axi_awready", false,-1);
    tracep->declBus(c+6,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"s_axi_wlast", false,-1);
    tracep->declBit(c+9,"s_axi_wvalid", false,-1);
    tracep->declBit(c+10,"s_axi_wready", false,-1);
    tracep->declBus(c+11,"s_axi_bid", false,-1, 7,0);
    tracep->declBus(c+431,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+12,"s_axi_bvalid", false,-1);
    tracep->declBit(c+13,"s_axi_bready", false,-1);
    tracep->declBus(c+432,"s_axi_arid", false,-1, 7,0);
    tracep->declBus(c+14,"s_axi_araddr", false,-1, 15,0);
    tracep->declBus(c+15,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+426,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+427,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+428,"s_axi_arlock", false,-1);
    tracep->declBus(c+429,"s_axi_arcache", false,-1, 3,0);
    tracep->declBus(c+430,"s_axi_arprot", false,-1, 2,0);
    tracep->declBit(c+16,"s_axi_arvalid", false,-1);
    tracep->declBit(c+17,"s_axi_arready", false,-1);
    tracep->declBus(c+18,"s_axi_rid", false,-1, 7,0);
    tracep->declBus(c+19,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+431,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+20,"s_axi_rlast", false,-1);
    tracep->declBit(c+21,"s_axi_rvalid", false,-1);
    tracep->declBit(c+22,"s_axi_rready", false,-1);
    tracep->declBus(c+490,"VALID_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+422,"WORD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+423,"WORD_SIZE", false,-1, 31,0);
    tracep->declBus(c+454,"READ_STATE_IDLE", false,-1, 0,0);
    tracep->declBus(c+491,"READ_STATE_RDATA", false,-1, 0,0);
    tracep->declBus(c+372,"read_state_reg", false,-1, 0,0);
    tracep->declBus(c+373,"read_state_next", false,-1, 0,0);
    tracep->declBus(c+431,"WRITE_STATE_IDLE", false,-1, 1,0);
    tracep->declBus(c+427,"WRITE_STATE_WDATA", false,-1, 1,0);
    tracep->declBus(c+480,"WRITE_STATE_RESP", false,-1, 1,0);
    tracep->declBus(c+374,"write_state_reg", false,-1, 1,0);
    tracep->declBus(c+375,"write_state_next", false,-1, 1,0);
    tracep->declBit(c+376,"mem_wr_en", false,-1);
    tracep->declBit(c+377,"mem_rd_en", false,-1);
    tracep->declBus(c+378,"read_id_reg", false,-1, 7,0);
    tracep->declBus(c+379,"read_id_next", false,-1, 7,0);
    tracep->declBus(c+380,"read_addr_reg", false,-1, 15,0);
    tracep->declBus(c+381,"read_addr_next", false,-1, 15,0);
    tracep->declBus(c+382,"read_count_reg", false,-1, 7,0);
    tracep->declBus(c+383,"read_count_next", false,-1, 7,0);
    tracep->declBus(c+384,"read_size_reg", false,-1, 2,0);
    tracep->declBus(c+385,"read_size_next", false,-1, 2,0);
    tracep->declBus(c+386,"read_burst_reg", false,-1, 1,0);
    tracep->declBus(c+387,"read_burst_next", false,-1, 1,0);
    tracep->declBus(c+388,"write_id_reg", false,-1, 7,0);
    tracep->declBus(c+389,"write_id_next", false,-1, 7,0);
    tracep->declBus(c+390,"write_addr_reg", false,-1, 15,0);
    tracep->declBus(c+391,"write_addr_next", false,-1, 15,0);
    tracep->declBus(c+392,"write_count_reg", false,-1, 7,0);
    tracep->declBus(c+393,"write_count_next", false,-1, 7,0);
    tracep->declBus(c+394,"write_size_reg", false,-1, 2,0);
    tracep->declBus(c+395,"write_size_next", false,-1, 2,0);
    tracep->declBus(c+396,"write_burst_reg", false,-1, 1,0);
    tracep->declBus(c+397,"write_burst_next", false,-1, 1,0);
    tracep->declBit(c+5,"s_axi_awready_reg", false,-1);
    tracep->declBit(c+398,"s_axi_awready_next", false,-1);
    tracep->declBit(c+10,"s_axi_wready_reg", false,-1);
    tracep->declBit(c+399,"s_axi_wready_next", false,-1);
    tracep->declBus(c+11,"s_axi_bid_reg", false,-1, 7,0);
    tracep->declBus(c+400,"s_axi_bid_next", false,-1, 7,0);
    tracep->declBit(c+12,"s_axi_bvalid_reg", false,-1);
    tracep->declBit(c+401,"s_axi_bvalid_next", false,-1);
    tracep->declBit(c+17,"s_axi_arready_reg", false,-1);
    tracep->declBit(c+402,"s_axi_arready_next", false,-1);
    tracep->declBus(c+18,"s_axi_rid_reg", false,-1, 7,0);
    tracep->declBus(c+403,"s_axi_rid_next", false,-1, 7,0);
    tracep->declBus(c+19,"s_axi_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+492,"s_axi_rdata_next", false,-1, 31,0);
    tracep->declBit(c+20,"s_axi_rlast_reg", false,-1);
    tracep->declBit(c+404,"s_axi_rlast_next", false,-1);
    tracep->declBit(c+21,"s_axi_rvalid_reg", false,-1);
    tracep->declBit(c+405,"s_axi_rvalid_next", false,-1);
    tracep->declBus(c+406,"s_axi_rid_pipe_reg", false,-1, 7,0);
    tracep->declBus(c+407,"s_axi_rdata_pipe_reg", false,-1, 31,0);
    tracep->declBit(c+408,"s_axi_rlast_pipe_reg", false,-1);
    tracep->declBit(c+409,"s_axi_rvalid_pipe_reg", false,-1);
    tracep->declBus(c+410,"s_axi_awaddr_valid", false,-1, 13,0);
    tracep->declBus(c+411,"s_axi_araddr_valid", false,-1, 13,0);
    tracep->declBus(c+412,"read_addr_valid", false,-1, 13,0);
    tracep->declBus(c+413,"write_addr_valid", false,-1, 13,0);
    tracep->declBus(c+414,"i", false,-1, 31,0);
    tracep->declBus(c+1,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_init_top(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_init_top\n"); );
    // Body
    Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("tb_axi4_ram_burst ");
    Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__tb_axi4_ram_burst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi4_ram_burst___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi4_ram_burst___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_register(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_axi4_ram_burst___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_axi4_ram_burst___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_axi4_ram_burst___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_full_sub_0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_full_top_0\n"); );
    // Init
    Vtb_axi4_ram_burst___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst___024root*>(voidSelf);
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_axi4_ram_burst___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_full_sub_0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__j),32);
    bufp->fullSData(oldp+2,((0xffffU & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf)),16);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf),8);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__s_axi_awvalid));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_reg));
    bufp->fullIData(oldp+6,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__data_buf),32);
    bufp->fullCData(oldp+7,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__strb_buf),4);
    bufp->fullBit(oldp+8,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg));
    bufp->fullCData(oldp+11,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bid_reg),8);
    bufp->fullBit(oldp+12,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready));
    bufp->fullSData(oldp+14,((0xffffU & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf)),16);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf),8);
    bufp->fullBit(oldp+16,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg));
    bufp->fullCData(oldp+18,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_reg),8);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rdata_reg),32);
    bufp->fullBit(oldp+20,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n));
    bufp->fullIData(oldp+23,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf),32);
    bufp->fullBit(oldp+25,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_reg))));
    bufp->fullBit(oldp+26,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bid_reg))));
    bufp->fullSData(oldp+27,((0x3ffU & ((0x20000U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                         ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161)
                                         : ((2U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                             ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138)
                                             : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.axi4_tester_inst__DOT____Vxrand_h9b4974b5__1))))),10);
    bufp->fullBit(oldp+28,((IData)((0U != (0x20002U 
                                           & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)))));
    bufp->fullIData(oldp+29,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_q0),32);
    bufp->fullBit(oldp+30,((1U & ((~ vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                                  | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_reg)))));
    bufp->fullIData(oldp+31,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm),19);
    bufp->fullBit(oldp+32,((1U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)));
    bufp->fullBit(oldp+33,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 7U)) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg)))));
    bufp->fullBit(oldp+34,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 7U))));
    bufp->fullBit(oldp+35,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 8U)) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)))));
    bufp->fullBit(oldp+36,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 8U))));
    bufp->fullBit(oldp+37,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 3U)) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg)))));
    bufp->fullBit(oldp+38,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 3U))));
    bufp->fullBit(oldp+39,((1U & ((~ ((0x400U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149)) 
                                      & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                         >> 0xfU))) 
                                  | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg)))));
    bufp->fullBit(oldp+40,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0xfU))));
    bufp->fullBit(oldp+41,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149))));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t));
    bufp->fullBit(oldp+44,(((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                             >> 3U) & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n))));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t));
    bufp->fullBit(oldp+48,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY));
    bufp->fullIData(oldp+50,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1)),32);
    bufp->fullCData(oldp+51,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1 
                                            >> 0x20U)))),2);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_BREADY));
    bufp->fullCData(oldp+54,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_BRESP),2);
    bufp->fullSData(oldp+55,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138)))),11);
    bufp->fullSData(oldp+56,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_reg_246),11);
    bufp->fullBit(oldp+57,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 1U))));
    bufp->fullBit(oldp+58,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138))));
    bufp->fullIData(oldp+59,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_256),32);
    bufp->fullBit(oldp+60,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 2U))));
    bufp->fullSData(oldp+61,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149)))),11);
    bufp->fullSData(oldp+62,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_1_reg_264),11);
    bufp->fullBit(oldp+63,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                            & (0x400U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149)))));
    bufp->fullIData(oldp+64,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_read_reg_269),32);
    bufp->fullBit(oldp+65,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161))));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__icmp_ln24_reg_274));
    bufp->fullBit(oldp+67,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x11U))));
    bufp->fullSData(oldp+68,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161)))),11);
    bufp->fullSData(oldp+69,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_2_reg_278),11);
    bufp->fullSData(oldp+70,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_address0),10);
    bufp->fullBit(oldp+71,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_ce0));
    bufp->fullBit(oldp+72,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x10U))));
    bufp->fullIData(oldp+73,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0),32);
    bufp->fullSData(oldp+74,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138),11);
    bufp->fullSData(oldp+75,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149),11);
    bufp->fullBit(oldp+76,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0xeU))));
    bufp->fullSData(oldp+77,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161),11);
    bufp->fullBit(oldp+78,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x12U))));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_237_p2));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__storemerge_reg_172));
    bufp->fullQData(oldp+81,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138))),64);
    bufp->fullQData(oldp+83,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149))),64);
    bufp->fullQData(oldp+85,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161))),64);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_NS_fsm),19);
    bufp->fullBit(oldp+88,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy));
    bufp->fullQData(oldp+90,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p1),64);
    bufp->fullBit(oldp+92,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack));
    bufp->fullQData(oldp+94,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data),64);
    bufp->fullIData(oldp+96,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data)),32);
    bufp->fullIData(oldp+97,((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len),32);
    bufp->fullCData(oldp+99,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                               ? (0xfU & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf))
                               : 0xfU)),8);
    bufp->fullIData(oldp+100,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt))
                                ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                   + (((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf)) 
                                      << 2U)))),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf),32);
    bufp->fullIData(oldp+103,((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len 
                               + vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr)),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf),32);
    bufp->fullIData(oldp+105,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)
                                ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
                                   << 0xcU))),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf),32);
    bufp->fullCData(oldp+107,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)
                                ? (3U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf)
                                : 3U)),2);
    bufp->fullCData(oldp+108,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf),2);
    bufp->fullCData(oldp+109,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                                ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf)
                                : 3U)),2);
    bufp->fullSData(oldp+110,((0x3ffU & ((IData)(0x3ffU) 
                                         - (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                            >> 2U)))),10);
    bufp->fullSData(oldp+111,((0x3ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                          ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf)
                                          : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)) 
                                              & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect))
                                              ? ((IData)(0x3ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                                  >> 2U))
                                              : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                                  ? 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf 
                                                  >> 2U)
                                                  : 0x3ffU))))),10);
    bufp->fullSData(oldp+112,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf),10);
    bufp->fullSData(oldp+113,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf),10);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt),20);
    bufp->fullCData(oldp+115,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                               << 1U)),2);
    bufp->fullBit(oldp+116,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r));
    bufp->fullBit(oldp+117,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                             & (0U == (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+118,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                             & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                        >> 0x3fU)))));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg1));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg2));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_read));
    bufp->fullBit(oldp+125,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r))) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling))))));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect));
    bufp->fullQData(oldp+131,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rresp_rdata),35);
    bufp->fullQData(oldp+133,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf),35);
    bufp->fullIData(oldp+135,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf)),32);
    bufp->fullQData(oldp+136,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rrsp_rdata),34);
    bufp->fullQData(oldp+138,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1),34);
    bufp->fullCData(oldp+140,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ar2r_rdata),2);
    bufp->fullCData(oldp+141,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                             >> 0x20U)))),2);
    bufp->fullCData(oldp+142,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf),2);
    bufp->fullBit(oldp+143,(((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                      >> 0x22U)) & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid))));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__tmp_last_2));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast));
    bufp->fullBit(oldp+146,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready));
    bufp->fullBit(oldp+147,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid));
    bufp->fullBit(oldp+148,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat));
    bufp->fullBit(oldp+149,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t));
    bufp->fullBit(oldp+150,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t));
    bufp->fullQData(oldp+151,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf),35);
    bufp->fullCData(oldp+153,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr),8);
    bufp->fullCData(oldp+154,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr),8);
    bufp->fullCData(oldp+155,((0xffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push)
                                         ? ((0xffU 
                                             == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr))
                                             ? 0U : 
                                            ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))
                                         : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))),8);
    bufp->fullCData(oldp+156,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext),8);
    bufp->fullBit(oldp+157,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop));
    bufp->fullCData(oldp+159,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw),8);
    bufp->fullBit(oldp+160,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n));
    bufp->fullQData(oldp+161,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp),35);
    bufp->fullBit(oldp+163,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead));
    bufp->fullIData(oldp+164,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf),32);
    bufp->fullBit(oldp+165,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data));
    bufp->fullCData(oldp+166,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt),6);
    bufp->fullBit(oldp+167,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling));
    bufp->fullBit(oldp+168,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop));
    bufp->fullBit(oldp+169,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready))));
    bufp->fullBit(oldp+170,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop));
    bufp->fullBit(oldp+172,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop)) 
                                & ((0xdU == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld))))));
    bufp->fullBit(oldp+173,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld));
    bufp->fullCData(oldp+174,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout),4);
    bufp->fullCData(oldp+175,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[0]),2);
    bufp->fullCData(oldp+176,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[1]),2);
    bufp->fullCData(oldp+177,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[2]),2);
    bufp->fullCData(oldp+178,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[3]),2);
    bufp->fullCData(oldp+179,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[4]),2);
    bufp->fullCData(oldp+180,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[5]),2);
    bufp->fullCData(oldp+181,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[6]),2);
    bufp->fullCData(oldp+182,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[7]),2);
    bufp->fullCData(oldp+183,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[8]),2);
    bufp->fullCData(oldp+184,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[9]),2);
    bufp->fullCData(oldp+185,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[10]),2);
    bufp->fullCData(oldp+186,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[11]),2);
    bufp->fullCData(oldp+187,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[12]),2);
    bufp->fullCData(oldp+188,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[13]),2);
    bufp->fullCData(oldp+189,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[14]),2);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__i),32);
    bufp->fullBit(oldp+191,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push));
    bufp->fullBit(oldp+192,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop));
    bufp->fullBit(oldp+193,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld))))));
    bufp->fullBit(oldp+194,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld));
    bufp->fullCData(oldp+195,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout),3);
    bufp->fullQData(oldp+196,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[0]),64);
    bufp->fullQData(oldp+198,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[1]),64);
    bufp->fullQData(oldp+200,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[2]),64);
    bufp->fullQData(oldp+202,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[3]),64);
    bufp->fullQData(oldp+204,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[4]),64);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__i),32);
    bufp->fullQData(oldp+207,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p2),34);
    bufp->fullBit(oldp+209,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY))))));
    bufp->fullBit(oldp+210,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t))));
    bufp->fullBit(oldp+211,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    bufp->fullCData(oldp+212,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state),2);
    bufp->fullCData(oldp+213,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next),2);
    bufp->fullQData(oldp+214,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p2),64);
    bufp->fullBit(oldp+216,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack))))));
    bufp->fullBit(oldp+217,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID))));
    bufp->fullBit(oldp+218,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
    bufp->fullCData(oldp+219,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state),2);
    bufp->fullCData(oldp+220,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next),2);
    bufp->fullQData(oldp+221,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p1),64);
    bufp->fullBit(oldp+223,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
    bufp->fullBit(oldp+224,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack));
    bufp->fullQData(oldp+225,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data),64);
    bufp->fullIData(oldp+227,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data)),32);
    bufp->fullIData(oldp+228,((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len),32);
    bufp->fullCData(oldp+230,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awlen_tmp),8);
    bufp->fullIData(oldp+231,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt))
                                ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                   + (((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf)) 
                                      << 2U)))),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf),32);
    bufp->fullIData(oldp+234,((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len 
                               + vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr)),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf),32);
    bufp->fullIData(oldp+236,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)
                                ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
                                   << 0xcU))),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf),32);
    bufp->fullCData(oldp+238,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)
                                ? (3U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf)
                                : 3U)),2);
    bufp->fullCData(oldp+239,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf),2);
    bufp->fullCData(oldp+240,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop)
                                ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf)
                                : 3U)),2);
    bufp->fullSData(oldp+241,((0x3ffU & ((IData)(0x3ffU) 
                                         - (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                            >> 2U)))),10);
    bufp->fullSData(oldp+242,((0x3ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                          ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf)
                                          : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)) 
                                              & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect))
                                              ? ((IData)(0x3ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                                  >> 2U))
                                              : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                                  ? 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf 
                                                  >> 2U)
                                                  : 0x3ffU))))),10);
    bufp->fullSData(oldp+243,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf),10);
    bufp->fullSData(oldp+244,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf),10);
    bufp->fullCData(oldp+245,(((((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf)) 
                                << 1U) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2))),2);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt),20);
    bufp->fullBit(oldp+247,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event));
    bufp->fullBit(oldp+248,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event));
    bufp->fullBit(oldp+250,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg1));
    bufp->fullBit(oldp+251,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2));
    bufp->fullBit(oldp+252,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid));
    bufp->fullBit(oldp+253,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf));
    bufp->fullBit(oldp+254,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_read));
    bufp->fullBit(oldp+255,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2)) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))));
    bufp->fullBit(oldp+256,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w));
    bufp->fullBit(oldp+257,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf));
    bufp->fullBit(oldp+258,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling))))));
    bufp->fullBit(oldp+259,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect));
    bufp->fullQData(oldp+264,((0xf00000000ULL | (QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_256)))),36);
    bufp->fullQData(oldp+266,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf),36);
    bufp->fullIData(oldp+268,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf)),32);
    bufp->fullCData(oldp+269,((0xfU & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+270,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt),8);
    bufp->fullCData(oldp+271,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len),8);
    bufp->fullBit(oldp+272,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_burst));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid));
    bufp->fullCData(oldp+277,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata),2);
    bufp->fullCData(oldp+278,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bresp_tmp),2);
    bufp->fullBit(oldp+279,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp));
    bufp->fullBit(oldp+280,((1U & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata) 
                                   >> 1U))));
    bufp->fullBit(oldp+281,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata))));
    bufp->fullBit(oldp+282,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready));
    bufp->fullBit(oldp+283,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp));
    bufp->fullBit(oldp+284,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_match));
    bufp->fullQData(oldp+285,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf),36);
    bufp->fullCData(oldp+287,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr),8);
    bufp->fullCData(oldp+288,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr),8);
    bufp->fullCData(oldp+289,((0xffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push)
                                         ? ((0xffU 
                                             == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr))
                                             ? 0U : 
                                            ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))
                                         : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))),8);
    bufp->fullCData(oldp+290,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext),8);
    bufp->fullBit(oldp+291,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push));
    bufp->fullBit(oldp+292,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop));
    bufp->fullCData(oldp+293,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw),8);
    bufp->fullBit(oldp+294,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n));
    bufp->fullQData(oldp+295,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp),36);
    bufp->fullBit(oldp+297,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead));
    bufp->fullBit(oldp+298,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data));
    bufp->fullBit(oldp+299,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push));
    bufp->fullBit(oldp+300,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop));
    bufp->fullBit(oldp+301,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld))))));
    bufp->fullBit(oldp+302,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld));
    bufp->fullCData(oldp+303,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout),3);
    bufp->fullCData(oldp+304,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[0]),8);
    bufp->fullCData(oldp+305,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[1]),8);
    bufp->fullCData(oldp+306,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[2]),8);
    bufp->fullCData(oldp+307,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[3]),8);
    bufp->fullCData(oldp+308,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[4]),8);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__i),32);
    bufp->fullCData(oldp+310,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt),6);
    bufp->fullBit(oldp+311,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling));
    bufp->fullBit(oldp+312,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop));
    bufp->fullBit(oldp+313,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy))) 
                             & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready)))));
    bufp->fullBit(oldp+314,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push));
    bufp->fullBit(oldp+315,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop));
    bufp->fullBit(oldp+316,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop)) 
                                & ((0xdU == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld))))));
    bufp->fullBit(oldp+317,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld));
    bufp->fullCData(oldp+318,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout),4);
    bufp->fullCData(oldp+319,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[0]),2);
    bufp->fullCData(oldp+320,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[1]),2);
    bufp->fullCData(oldp+321,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[2]),2);
    bufp->fullCData(oldp+322,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[3]),2);
    bufp->fullCData(oldp+323,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[4]),2);
    bufp->fullCData(oldp+324,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[5]),2);
    bufp->fullCData(oldp+325,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[6]),2);
    bufp->fullCData(oldp+326,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[7]),2);
    bufp->fullCData(oldp+327,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[8]),2);
    bufp->fullCData(oldp+328,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[9]),2);
    bufp->fullCData(oldp+329,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[10]),2);
    bufp->fullCData(oldp+330,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[11]),2);
    bufp->fullCData(oldp+331,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[12]),2);
    bufp->fullCData(oldp+332,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[13]),2);
    bufp->fullCData(oldp+333,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[14]),2);
    bufp->fullIData(oldp+334,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__i),32);
    bufp->fullBit(oldp+335,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push));
    bufp->fullBit(oldp+336,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop));
    bufp->fullBit(oldp+337,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld))))));
    bufp->fullBit(oldp+338,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld));
    bufp->fullCData(oldp+339,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout),3);
    bufp->fullCData(oldp+340,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[0]),2);
    bufp->fullCData(oldp+341,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[1]),2);
    bufp->fullCData(oldp+342,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[2]),2);
    bufp->fullCData(oldp+343,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[3]),2);
    bufp->fullCData(oldp+344,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[4]),2);
    bufp->fullIData(oldp+345,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__i),32);
    bufp->fullBit(oldp+346,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push));
    bufp->fullBit(oldp+347,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop));
    bufp->fullBit(oldp+348,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld))))));
    bufp->fullBit(oldp+349,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld));
    bufp->fullCData(oldp+350,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout),3);
    bufp->fullQData(oldp+351,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[0]),64);
    bufp->fullQData(oldp+353,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[1]),64);
    bufp->fullQData(oldp+355,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[2]),64);
    bufp->fullQData(oldp+357,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[3]),64);
    bufp->fullQData(oldp+359,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[4]),64);
    bufp->fullIData(oldp+361,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__i),32);
    bufp->fullQData(oldp+362,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p2),64);
    bufp->fullBit(oldp+364,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack))))));
    bufp->fullBit(oldp+365,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID))));
    bufp->fullBit(oldp+366,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
    bufp->fullCData(oldp+367,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state),2);
    bufp->fullCData(oldp+368,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next),2);
    bufp->fullBit(oldp+369,((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt))));
    bufp->fullBit(oldp+370,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg))));
    bufp->fullCData(oldp+371,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt),8);
    bufp->fullBit(oldp+372,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_state_reg));
    bufp->fullBit(oldp+373,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_state_next));
    bufp->fullCData(oldp+374,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_state_reg),2);
    bufp->fullCData(oldp+375,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_state_next),2);
    bufp->fullBit(oldp+376,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__mem_wr_en));
    bufp->fullBit(oldp+377,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__mem_rd_en));
    bufp->fullCData(oldp+378,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_id_reg),8);
    bufp->fullCData(oldp+379,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_id_next),8);
    bufp->fullSData(oldp+380,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_reg),16);
    bufp->fullSData(oldp+381,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_next),16);
    bufp->fullCData(oldp+382,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_count_reg),8);
    bufp->fullCData(oldp+383,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_count_next),8);
    bufp->fullCData(oldp+384,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_size_reg),3);
    bufp->fullCData(oldp+385,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_size_next),3);
    bufp->fullCData(oldp+386,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_burst_reg),2);
    bufp->fullCData(oldp+387,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_burst_next),2);
    bufp->fullCData(oldp+388,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_id_reg),8);
    bufp->fullCData(oldp+389,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_id_next),8);
    bufp->fullSData(oldp+390,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_reg),16);
    bufp->fullSData(oldp+391,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_next),16);
    bufp->fullCData(oldp+392,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_count_reg),8);
    bufp->fullCData(oldp+393,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_count_next),8);
    bufp->fullCData(oldp+394,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_size_reg),3);
    bufp->fullCData(oldp+395,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_size_next),3);
    bufp->fullCData(oldp+396,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_burst_reg),2);
    bufp->fullCData(oldp+397,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_burst_next),2);
    bufp->fullBit(oldp+398,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_next));
    bufp->fullBit(oldp+399,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_next));
    bufp->fullCData(oldp+400,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bid_next),8);
    bufp->fullBit(oldp+401,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bvalid_next));
    bufp->fullBit(oldp+402,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_next));
    bufp->fullCData(oldp+403,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_next),8);
    bufp->fullBit(oldp+404,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_next));
    bufp->fullBit(oldp+405,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_next));
    bufp->fullCData(oldp+406,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg),8);
    bufp->fullIData(oldp+407,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg),32);
    bufp->fullBit(oldp+408,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg));
    bufp->fullBit(oldp+409,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg));
    bufp->fullSData(oldp+410,((0x3fffU & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                          >> 2U))),14);
    bufp->fullSData(oldp+411,((0x3fffU & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                          >> 2U))),14);
    bufp->fullSData(oldp+412,((0x3fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_reg) 
                                          >> 2U))),14);
    bufp->fullSData(oldp+413,((0x3fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_reg) 
                                          >> 2U))),14);
    bufp->fullIData(oldp+414,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__i),32);
    bufp->fullBit(oldp+415,(vlSelf->clk));
    bufp->fullBit(oldp+416,(vlSelf->reset));
    bufp->fullBit(oldp+417,(vlSymsp->TOP__tb_axi4_ram_burst.correct_V));
    bufp->fullBit(oldp+418,(vlSymsp->TOP__tb_axi4_ram_burst.correct_V_ap_vld));
    bufp->fullBit(oldp+419,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullIData(oldp+420,(0x20U),32);
    bufp->fullIData(oldp+421,(0x10U),32);
    bufp->fullIData(oldp+422,(4U),32);
    bufp->fullIData(oldp+423,(8U),32);
    bufp->fullIData(oldp+424,(0U),32);
    bufp->fullCData(oldp+425,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__s_axi_awid),8);
    bufp->fullCData(oldp+426,(2U),3);
    bufp->fullCData(oldp+427,(1U),2);
    bufp->fullBit(oldp+428,(0U));
    bufp->fullCData(oldp+429,(3U),4);
    bufp->fullCData(oldp+430,(0U),3);
    bufp->fullCData(oldp+431,(0U),2);
    bufp->fullCData(oldp+432,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__s_axi_arid),8);
    bufp->fullIData(oldp+433,(1U),19);
    bufp->fullIData(oldp+434,(2U),19);
    bufp->fullIData(oldp+435,(4U),19);
    bufp->fullIData(oldp+436,(8U),19);
    bufp->fullIData(oldp+437,(0x10U),19);
    bufp->fullIData(oldp+438,(0x20U),19);
    bufp->fullIData(oldp+439,(0x40U),19);
    bufp->fullIData(oldp+440,(0x80U),19);
    bufp->fullIData(oldp+441,(0x100U),19);
    bufp->fullIData(oldp+442,(0x200U),19);
    bufp->fullIData(oldp+443,(0x400U),19);
    bufp->fullIData(oldp+444,(0x800U),19);
    bufp->fullIData(oldp+445,(0x1000U),19);
    bufp->fullIData(oldp+446,(0x2000U),19);
    bufp->fullIData(oldp+447,(0x4000U),19);
    bufp->fullIData(oldp+448,(0x8000U),19);
    bufp->fullIData(oldp+449,(0x10000U),19);
    bufp->fullIData(oldp+450,(0x20000U),19);
    bufp->fullIData(oldp+451,(0x40000U),19);
    bufp->fullIData(oldp+452,(1U),32);
    bufp->fullIData(oldp+453,(3U),32);
    bufp->fullBit(oldp+454,(0U));
    bufp->fullCData(oldp+455,(0U),4);
    bufp->fullBit(oldp+456,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_RUSER));
    bufp->fullBit(oldp+457,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_BUSER));
    bufp->fullIData(oldp+458,(5U),32);
    bufp->fullBit(oldp+459,(1U));
    bufp->fullIData(oldp+460,(0x400U),32);
    bufp->fullCData(oldp+461,(0xfU),4);
    bufp->fullIData(oldp+462,(2U),32);
    bufp->fullSData(oldp+463,(0x3ffU),10);
    bufp->fullIData(oldp+464,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__calc_data_width__Vstatic__y),32);
    bufp->fullIData(oldp+465,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+466,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__m),32);
    bufp->fullQData(oldp+467,(0x40000000000ULL),64);
    bufp->fullBit(oldp+469,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_resp_w));
    bufp->fullCData(oldp+470,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__len_cnt),8);
    bufp->fullBit(oldp+471,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__burst_valid));
    bufp->fullBit(oldp+472,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_burst));
    bufp->fullQData(oldp+473,(0x626c6f636bULL),40);
    bufp->fullIData(oldp+475,(0x23U),32);
    bufp->fullIData(oldp+476,(0x100U),32);
    bufp->fullIData(oldp+477,(0xfU),32);
    bufp->fullIData(oldp+478,(0x40U),32);
    bufp->fullIData(oldp+479,(0x22U),32);
    bufp->fullCData(oldp+480,(2U),2);
    bufp->fullCData(oldp+481,(3U),2);
    bufp->fullIData(oldp+482,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__calc_data_width__Vstatic__y),32);
    bufp->fullIData(oldp+483,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+484,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__m),32);
    bufp->fullBit(oldp+485,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_valid));
    bufp->fullIData(oldp+486,(0x24U),32);
    bufp->fullIData(oldp+487,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+488,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__m),32);
    bufp->fullIData(oldp+489,(0xaU),32);
    bufp->fullIData(oldp+490,(0xeU),32);
    bufp->fullBit(oldp+491,(1U));
    bufp->fullIData(oldp+492,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rdata_next),32);
}
