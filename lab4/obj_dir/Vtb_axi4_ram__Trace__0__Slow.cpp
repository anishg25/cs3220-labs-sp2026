// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi4_ram__Syms.h"


VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_init_sub__TOP__0(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
}

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_init_sub__TOP__tb_axi4_ram__0(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_init_sub__TOP__tb_axi4_ram__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBus(c+431,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+433,"STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+434,"ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+435,"PIPELINE_OUTPUT", false,-1, 31,0);
    tracep->declBus(c+436,"s_axi_awid", false,-1, 7,0);
    tracep->declBus(c+2,"s_axi_awaddr", false,-1, 15,0);
    tracep->declBus(c+3,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+437,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+438,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+439,"s_axi_awlock", false,-1);
    tracep->declBus(c+440,"s_axi_awcache", false,-1, 3,0);
    tracep->declBus(c+441,"s_axi_awprot", false,-1, 2,0);
    tracep->declBit(c+4,"s_axi_awvalid", false,-1);
    tracep->declBit(c+5,"s_axi_awready", false,-1);
    tracep->declBus(c+6,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"s_axi_wlast", false,-1);
    tracep->declBit(c+9,"s_axi_wvalid", false,-1);
    tracep->declBit(c+10,"s_axi_wready", false,-1);
    tracep->declBus(c+11,"s_axi_bid", false,-1, 7,0);
    tracep->declBus(c+442,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+12,"s_axi_bvalid", false,-1);
    tracep->declBit(c+13,"s_axi_bready", false,-1);
    tracep->declBus(c+443,"s_axi_arid", false,-1, 7,0);
    tracep->declBus(c+14,"s_axi_araddr", false,-1, 15,0);
    tracep->declBus(c+15,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+437,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+438,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+439,"s_axi_arlock", false,-1);
    tracep->declBus(c+440,"s_axi_arcache", false,-1, 3,0);
    tracep->declBus(c+441,"s_axi_arprot", false,-1, 2,0);
    tracep->declBit(c+16,"s_axi_arvalid", false,-1);
    tracep->declBit(c+17,"s_axi_arready", false,-1);
    tracep->declBus(c+18,"s_axi_rid", false,-1, 7,0);
    tracep->declBus(c+19,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+442,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+20,"s_axi_rlast", false,-1);
    tracep->declBit(c+21,"s_axi_rvalid", false,-1);
    tracep->declBit(c+22,"s_axi_rready", false,-1);
    tracep->declBit(c+428,"correct_V", false,-1);
    tracep->declBit(c+429,"correct_V_ap_vld", false,-1);
    tracep->pushNamePrefix("axi4_tester_inst ");
    tracep->declBus(c+444,"ap_ST_fsm_state1", false,-1, 23,0);
    tracep->declBus(c+445,"ap_ST_fsm_state2", false,-1, 23,0);
    tracep->declBus(c+446,"ap_ST_fsm_state3", false,-1, 23,0);
    tracep->declBus(c+447,"ap_ST_fsm_state4", false,-1, 23,0);
    tracep->declBus(c+448,"ap_ST_fsm_state5", false,-1, 23,0);
    tracep->declBus(c+449,"ap_ST_fsm_state6", false,-1, 23,0);
    tracep->declBus(c+450,"ap_ST_fsm_state7", false,-1, 23,0);
    tracep->declBus(c+451,"ap_ST_fsm_state8", false,-1, 23,0);
    tracep->declBus(c+452,"ap_ST_fsm_state9", false,-1, 23,0);
    tracep->declBus(c+453,"ap_ST_fsm_state10", false,-1, 23,0);
    tracep->declBus(c+454,"ap_ST_fsm_state11", false,-1, 23,0);
    tracep->declBus(c+455,"ap_ST_fsm_state12", false,-1, 23,0);
    tracep->declBus(c+456,"ap_ST_fsm_state13", false,-1, 23,0);
    tracep->declBus(c+457,"ap_ST_fsm_state14", false,-1, 23,0);
    tracep->declBus(c+458,"ap_ST_fsm_state15", false,-1, 23,0);
    tracep->declBus(c+459,"ap_ST_fsm_state16", false,-1, 23,0);
    tracep->declBus(c+460,"ap_ST_fsm_state17", false,-1, 23,0);
    tracep->declBus(c+461,"ap_ST_fsm_state18", false,-1, 23,0);
    tracep->declBus(c+462,"ap_ST_fsm_state19", false,-1, 23,0);
    tracep->declBus(c+463,"ap_ST_fsm_state20", false,-1, 23,0);
    tracep->declBus(c+464,"ap_ST_fsm_state21", false,-1, 23,0);
    tracep->declBus(c+465,"ap_ST_fsm_state22", false,-1, 23,0);
    tracep->declBus(c+466,"ap_ST_fsm_state23", false,-1, 23,0);
    tracep->declBus(c+467,"ap_ST_fsm_state24", false,-1, 23,0);
    tracep->declBus(c+468,"C_M_AXI_DATA_IN_OUT_V_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+431,"C_M_AXI_DATA_IN_OUT_V_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+431,"C_M_AXI_DATA_IN_OUT_V_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_DATA_IN_OUT_V_AWUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_DATA_IN_OUT_V_ARUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_DATA_IN_OUT_V_WUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_DATA_IN_OUT_V_RUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_DATA_IN_OUT_V_BUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+435,"C_M_AXI_DATA_IN_OUT_V_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+435,"C_M_AXI_DATA_IN_OUT_V_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+435,"C_M_AXI_DATA_IN_OUT_V_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+469,"C_M_AXI_DATA_IN_OUT_V_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+431,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+433,"C_M_AXI_DATA_IN_OUT_V_WSTRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+433,"C_M_AXI_WSTRB_WIDTH", false,-1, 31,0);
    tracep->declBit(c+426,"ap_clk", false,-1);
    tracep->declBit(c+430,"ap_rst_n", false,-1);
    tracep->declBit(c+4,"m_axi_data_in_out_V_AWVALID", false,-1);
    tracep->declBit(c+5,"m_axi_data_in_out_V_AWREADY", false,-1);
    tracep->declBus(c+23,"m_axi_data_in_out_V_AWADDR", false,-1, 31,0);
    tracep->declBus(c+470,"m_axi_data_in_out_V_AWID", false,-1, 0,0);
    tracep->declBus(c+3,"m_axi_data_in_out_V_AWLEN", false,-1, 7,0);
    tracep->declBus(c+437,"m_axi_data_in_out_V_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+438,"m_axi_data_in_out_V_AWBURST", false,-1, 1,0);
    tracep->declBus(c+442,"m_axi_data_in_out_V_AWLOCK", false,-1, 1,0);
    tracep->declBus(c+440,"m_axi_data_in_out_V_AWCACHE", false,-1, 3,0);
    tracep->declBus(c+441,"m_axi_data_in_out_V_AWPROT", false,-1, 2,0);
    tracep->declBus(c+471,"m_axi_data_in_out_V_AWQOS", false,-1, 3,0);
    tracep->declBus(c+471,"m_axi_data_in_out_V_AWREGION", false,-1, 3,0);
    tracep->declBus(c+470,"m_axi_data_in_out_V_AWUSER", false,-1, 0,0);
    tracep->declBit(c+9,"m_axi_data_in_out_V_WVALID", false,-1);
    tracep->declBit(c+10,"m_axi_data_in_out_V_WREADY", false,-1);
    tracep->declBus(c+6,"m_axi_data_in_out_V_WDATA", false,-1, 31,0);
    tracep->declBus(c+7,"m_axi_data_in_out_V_WSTRB", false,-1, 3,0);
    tracep->declBit(c+8,"m_axi_data_in_out_V_WLAST", false,-1);
    tracep->declBus(c+470,"m_axi_data_in_out_V_WID", false,-1, 0,0);
    tracep->declBus(c+470,"m_axi_data_in_out_V_WUSER", false,-1, 0,0);
    tracep->declBit(c+16,"m_axi_data_in_out_V_ARVALID", false,-1);
    tracep->declBit(c+17,"m_axi_data_in_out_V_ARREADY", false,-1);
    tracep->declBus(c+24,"m_axi_data_in_out_V_ARADDR", false,-1, 31,0);
    tracep->declBus(c+470,"m_axi_data_in_out_V_ARID", false,-1, 0,0);
    tracep->declBus(c+15,"m_axi_data_in_out_V_ARLEN", false,-1, 7,0);
    tracep->declBus(c+437,"m_axi_data_in_out_V_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+438,"m_axi_data_in_out_V_ARBURST", false,-1, 1,0);
    tracep->declBus(c+442,"m_axi_data_in_out_V_ARLOCK", false,-1, 1,0);
    tracep->declBus(c+440,"m_axi_data_in_out_V_ARCACHE", false,-1, 3,0);
    tracep->declBus(c+441,"m_axi_data_in_out_V_ARPROT", false,-1, 2,0);
    tracep->declBus(c+471,"m_axi_data_in_out_V_ARQOS", false,-1, 3,0);
    tracep->declBus(c+471,"m_axi_data_in_out_V_ARREGION", false,-1, 3,0);
    tracep->declBus(c+470,"m_axi_data_in_out_V_ARUSER", false,-1, 0,0);
    tracep->declBit(c+21,"m_axi_data_in_out_V_RVALID", false,-1);
    tracep->declBit(c+22,"m_axi_data_in_out_V_RREADY", false,-1);
    tracep->declBus(c+19,"m_axi_data_in_out_V_RDATA", false,-1, 31,0);
    tracep->declBit(c+20,"m_axi_data_in_out_V_RLAST", false,-1);
    tracep->declBus(c+25,"m_axi_data_in_out_V_RID", false,-1, 0,0);
    tracep->declBus(c+472,"m_axi_data_in_out_V_RUSER", false,-1, 0,0);
    tracep->declBus(c+442,"m_axi_data_in_out_V_RRESP", false,-1, 1,0);
    tracep->declBit(c+12,"m_axi_data_in_out_V_BVALID", false,-1);
    tracep->declBit(c+13,"m_axi_data_in_out_V_BREADY", false,-1);
    tracep->declBus(c+442,"m_axi_data_in_out_V_BRESP", false,-1, 1,0);
    tracep->declBus(c+26,"m_axi_data_in_out_V_BID", false,-1, 0,0);
    tracep->declBus(c+473,"m_axi_data_in_out_V_BUSER", false,-1, 0,0);
    tracep->declBus(c+428,"correct_V", false,-1, 0,0);
    tracep->declBit(c+429,"correct_V_ap_vld", false,-1);
    tracep->declBit(c+427,"ap_rst_n_inv", false,-1);
    tracep->declBus(c+27,"addr_address0", false,-1, 9,0);
    tracep->declBit(c+28,"addr_ce0", false,-1);
    tracep->declBus(c+29,"addr_q0", false,-1, 9,0);
    tracep->declBus(c+30,"test_data_V_address0", false,-1, 9,0);
    tracep->declBit(c+31,"test_data_V_ce0", false,-1);
    tracep->declBus(c+32,"test_data_V_q0", false,-1, 31,0);
    tracep->declBit(c+33,"data_in_out_V_blk_n_AW", false,-1);
    tracep->declBus(c+34,"ap_CS_fsm", false,-1, 23,0);
    tracep->declBit(c+35,"ap_CS_fsm_state4", false,-1);
    tracep->declBit(c+36,"data_in_out_V_blk_n_W", false,-1);
    tracep->declBit(c+37,"ap_CS_fsm_state5", false,-1);
    tracep->declBit(c+38,"data_in_out_V_blk_n_B", false,-1);
    tracep->declBit(c+39,"ap_CS_fsm_state10", false,-1);
    tracep->declBit(c+40,"data_in_out_V_blk_n_AR", false,-1);
    tracep->declBit(c+41,"ap_CS_fsm_state13", false,-1);
    tracep->declBit(c+42,"data_in_out_V_blk_n_R", false,-1);
    tracep->declBit(c+43,"ap_CS_fsm_state20", false,-1);
    tracep->declBit(c+44,"data_in_out_V_AWVALID", false,-1);
    tracep->declBit(c+45,"data_in_out_V_AWREADY", false,-1);
    tracep->declBus(c+46,"data_in_out_V_AWADDR", false,-1, 31,0);
    tracep->declBit(c+47,"data_in_out_V_WVALID", false,-1);
    tracep->declBit(c+48,"data_in_out_V_WREADY", false,-1);
    tracep->declBit(c+49,"data_in_out_V_ARVALID", false,-1);
    tracep->declBit(c+50,"data_in_out_V_ARREADY", false,-1);
    tracep->declBus(c+46,"data_in_out_V_ARADDR", false,-1, 31,0);
    tracep->declBit(c+51,"data_in_out_V_RVALID", false,-1);
    tracep->declBit(c+52,"data_in_out_V_RREADY", false,-1);
    tracep->declBus(c+53,"data_in_out_V_RDATA", false,-1, 31,0);
    tracep->declBit(c+439,"data_in_out_V_RLAST", false,-1);
    tracep->declBus(c+439,"data_in_out_V_RID", false,-1, 0,0);
    tracep->declBus(c+470,"data_in_out_V_RUSER", false,-1, 0,0);
    tracep->declBus(c+54,"data_in_out_V_RRESP", false,-1, 1,0);
    tracep->declBit(c+55,"data_in_out_V_BVALID", false,-1);
    tracep->declBit(c+56,"data_in_out_V_BREADY", false,-1);
    tracep->declBus(c+57,"data_in_out_V_BRESP", false,-1, 1,0);
    tracep->declBus(c+439,"data_in_out_V_BID", false,-1, 0,0);
    tracep->declBus(c+470,"data_in_out_V_BUSER", false,-1, 0,0);
    tracep->declBus(c+58,"reg_213", false,-1, 9,0);
    tracep->declBit(c+59,"ap_CS_fsm_state3", false,-1);
    tracep->declBit(c+60,"ap_CS_fsm_state12", false,-1);
    tracep->declBus(c+61,"i_fu_223_p2", false,-1, 10,0);
    tracep->declBus(c+62,"i_reg_301", false,-1, 10,0);
    tracep->declBit(c+63,"ap_CS_fsm_state2", false,-1);
    tracep->declBus(c+64,"icmp_ln13_fu_217_p2", false,-1, 0,0);
    tracep->declBus(c+65,"test_data_V_load_reg_316", false,-1, 31,0);
    tracep->declBus(c+66,"i_1_fu_252_p2", false,-1, 10,0);
    tracep->declBus(c+67,"i_1_reg_330", false,-1, 10,0);
    tracep->declBit(c+68,"ap_CS_fsm_state11", false,-1);
    tracep->declQuad(c+69,"zext_ln22_fu_258_p1", false,-1, 63,0);
    tracep->declQuad(c+71,"zext_ln22_reg_335", false,-1, 63,0);
    tracep->declBus(c+73,"icmp_ln19_fu_246_p2", false,-1, 0,0);
    tracep->declBus(c+74,"data_in_out_V_addr_1_1_reg_351", false,-1, 31,0);
    tracep->declBus(c+75,"i_2_fu_280_p2", false,-1, 10,0);
    tracep->declBus(c+76,"i_2_reg_359", false,-1, 10,0);
    tracep->declBit(c+77,"ap_CS_fsm_state22", false,-1);
    tracep->declBus(c+78,"icmp_ln26_fu_274_p2", false,-1, 0,0);
    tracep->declBus(c+79,"data_from_mem_V_address0", false,-1, 9,0);
    tracep->declBit(c+80,"data_from_mem_V_ce0", false,-1);
    tracep->declBit(c+81,"data_from_mem_V_we0", false,-1);
    tracep->declBus(c+82,"data_from_mem_V_q0", false,-1, 31,0);
    tracep->declBus(c+83,"i_0_reg_166", false,-1, 10,0);
    tracep->declBit(c+84,"ap_CS_fsm_state1", false,-1);
    tracep->declBus(c+85,"i1_0_reg_177", false,-1, 10,0);
    tracep->declBit(c+81,"ap_CS_fsm_state21", false,-1);
    tracep->declBus(c+86,"i2_0_reg_188", false,-1, 10,0);
    tracep->declBit(c+87,"ap_CS_fsm_state23", false,-1);
    tracep->declBus(c+88,"icmp_ln883_fu_292_p2", false,-1, 0,0);
    tracep->declBus(c+89,"storemerge_reg_199", false,-1, 0,0);
    tracep->declQuad(c+90,"zext_ln16_fu_229_p1", false,-1, 63,0);
    tracep->declQuad(c+92,"zext_ln28_fu_286_p1", false,-1, 63,0);
    tracep->declQuad(c+94,"zext_ln16_1_fu_235_p1", false,-1, 63,0);
    tracep->declQuad(c+94,"zext_ln22_1_fu_263_p1", false,-1, 63,0);
    tracep->declBit(c+429,"ap_CS_fsm_state24", false,-1);
    tracep->declBus(c+96,"ap_NS_fsm", false,-1, 23,0);
    tracep->pushNamePrefix("addr_U ");
    tracep->declBus(c+474,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+475,"AddressRange", false,-1, 31,0);
    tracep->declBus(c+474,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBus(c+27,"address0", false,-1, 9,0);
    tracep->declBit(c+28,"ce0", false,-1);
    tracep->declBus(c+29,"q0", false,-1, 9,0);
    tracep->pushNamePrefix("axi4_tester_addr_rom_U ");
    tracep->declBus(c+474,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+474,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+475,"MEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+27,"addr0", false,-1, 9,0);
    tracep->declBit(c+28,"ce0", false,-1);
    tracep->declBus(c+29,"q0", false,-1, 9,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4_tester_data_in_out_V_m_axi_U ");
    tracep->declBus(c+435,"CONSERVATIVE", false,-1, 31,0);
    tracep->declBus(c+432,"NUM_READ_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+432,"NUM_WRITE_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+432,"MAX_READ_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+432,"MAX_WRITE_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+431,"C_M_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+435,"C_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+431,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_AWUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_ARUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_WUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_RUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_BUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+435,"C_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+435,"C_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+469,"C_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+431,"USER_DW", false,-1, 31,0);
    tracep->declBus(c+431,"USER_AW", false,-1, 31,0);
    tracep->declBus(c+476,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBit(c+426,"ACLK", false,-1);
    tracep->declBit(c+427,"ARESET", false,-1);
    tracep->declBit(c+477,"ACLK_EN", false,-1);
    tracep->declBus(c+470,"AWID", false,-1, 0,0);
    tracep->declBus(c+23,"AWADDR", false,-1, 31,0);
    tracep->declBus(c+3,"AWLEN", false,-1, 7,0);
    tracep->declBus(c+437,"AWSIZE", false,-1, 2,0);
    tracep->declBus(c+438,"AWBURST", false,-1, 1,0);
    tracep->declBus(c+442,"AWLOCK", false,-1, 1,0);
    tracep->declBus(c+440,"AWCACHE", false,-1, 3,0);
    tracep->declBus(c+441,"AWPROT", false,-1, 2,0);
    tracep->declBus(c+471,"AWQOS", false,-1, 3,0);
    tracep->declBus(c+471,"AWREGION", false,-1, 3,0);
    tracep->declBus(c+470,"AWUSER", false,-1, 0,0);
    tracep->declBit(c+4,"AWVALID", false,-1);
    tracep->declBit(c+5,"AWREADY", false,-1);
    tracep->declBus(c+470,"WID", false,-1, 0,0);
    tracep->declBus(c+6,"WDATA", false,-1, 31,0);
    tracep->declBus(c+7,"WSTRB", false,-1, 3,0);
    tracep->declBit(c+8,"WLAST", false,-1);
    tracep->declBus(c+470,"WUSER", false,-1, 0,0);
    tracep->declBit(c+9,"WVALID", false,-1);
    tracep->declBit(c+10,"WREADY", false,-1);
    tracep->declBus(c+26,"BID", false,-1, 0,0);
    tracep->declBus(c+442,"BRESP", false,-1, 1,0);
    tracep->declBus(c+473,"BUSER", false,-1, 0,0);
    tracep->declBit(c+12,"BVALID", false,-1);
    tracep->declBit(c+13,"BREADY", false,-1);
    tracep->declBus(c+470,"ARID", false,-1, 0,0);
    tracep->declBus(c+24,"ARADDR", false,-1, 31,0);
    tracep->declBus(c+15,"ARLEN", false,-1, 7,0);
    tracep->declBus(c+437,"ARSIZE", false,-1, 2,0);
    tracep->declBus(c+438,"ARBURST", false,-1, 1,0);
    tracep->declBus(c+442,"ARLOCK", false,-1, 1,0);
    tracep->declBus(c+440,"ARCACHE", false,-1, 3,0);
    tracep->declBus(c+441,"ARPROT", false,-1, 2,0);
    tracep->declBus(c+471,"ARQOS", false,-1, 3,0);
    tracep->declBus(c+471,"ARREGION", false,-1, 3,0);
    tracep->declBus(c+470,"ARUSER", false,-1, 0,0);
    tracep->declBit(c+16,"ARVALID", false,-1);
    tracep->declBit(c+17,"ARREADY", false,-1);
    tracep->declBus(c+25,"RID", false,-1, 0,0);
    tracep->declBus(c+19,"RDATA", false,-1, 31,0);
    tracep->declBus(c+442,"RRESP", false,-1, 1,0);
    tracep->declBit(c+20,"RLAST", false,-1);
    tracep->declBus(c+472,"RUSER", false,-1, 0,0);
    tracep->declBit(c+21,"RVALID", false,-1);
    tracep->declBit(c+22,"RREADY", false,-1);
    tracep->declBus(c+439,"I_AWID", false,-1, 0,0);
    tracep->declBus(c+46,"I_AWADDR", false,-1, 31,0);
    tracep->declBus(c+468,"I_AWLEN", false,-1, 31,0);
    tracep->declBus(c+441,"I_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+442,"I_AWBURST", false,-1, 1,0);
    tracep->declBus(c+442,"I_AWLOCK", false,-1, 1,0);
    tracep->declBus(c+471,"I_AWCACHE", false,-1, 3,0);
    tracep->declBus(c+441,"I_AWPROT", false,-1, 2,0);
    tracep->declBus(c+471,"I_AWQOS", false,-1, 3,0);
    tracep->declBus(c+471,"I_AWREGION", false,-1, 3,0);
    tracep->declBus(c+439,"I_AWUSER", false,-1, 0,0);
    tracep->declBit(c+44,"I_AWVALID", false,-1);
    tracep->declBit(c+45,"I_AWREADY", false,-1);
    tracep->declBus(c+439,"I_WID", false,-1, 0,0);
    tracep->declBus(c+65,"I_WDATA", false,-1, 31,0);
    tracep->declBit(c+439,"I_WLAST", false,-1);
    tracep->declBus(c+478,"I_WSTRB", false,-1, 3,0);
    tracep->declBus(c+439,"I_WUSER", false,-1, 0,0);
    tracep->declBit(c+47,"I_WVALID", false,-1);
    tracep->declBit(c+48,"I_WREADY", false,-1);
    tracep->declBus(c+439,"I_BID", false,-1, 0,0);
    tracep->declBus(c+57,"I_BRESP", false,-1, 1,0);
    tracep->declBus(c+470,"I_BUSER", false,-1, 0,0);
    tracep->declBit(c+55,"I_BVALID", false,-1);
    tracep->declBit(c+56,"I_BREADY", false,-1);
    tracep->declBus(c+439,"I_ARID", false,-1, 0,0);
    tracep->declBus(c+46,"I_ARADDR", false,-1, 31,0);
    tracep->declBus(c+468,"I_ARLEN", false,-1, 31,0);
    tracep->declBus(c+441,"I_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+442,"I_ARBURST", false,-1, 1,0);
    tracep->declBus(c+442,"I_ARLOCK", false,-1, 1,0);
    tracep->declBus(c+471,"I_ARCACHE", false,-1, 3,0);
    tracep->declBus(c+441,"I_ARPROT", false,-1, 2,0);
    tracep->declBus(c+471,"I_ARQOS", false,-1, 3,0);
    tracep->declBus(c+471,"I_ARREGION", false,-1, 3,0);
    tracep->declBus(c+439,"I_ARUSER", false,-1, 0,0);
    tracep->declBit(c+49,"I_ARVALID", false,-1);
    tracep->declBit(c+50,"I_ARREADY", false,-1);
    tracep->declBus(c+439,"I_RID", false,-1, 0,0);
    tracep->declBus(c+53,"I_RDATA", false,-1, 31,0);
    tracep->declBus(c+54,"I_RRESP", false,-1, 1,0);
    tracep->declBit(c+439,"I_RLAST", false,-1);
    tracep->declBus(c+470,"I_RUSER", false,-1, 0,0);
    tracep->declBit(c+51,"I_RVALID", false,-1);
    tracep->declBit(c+52,"I_RREADY", false,-1);
    tracep->declBus(c+23,"AWADDR_Dummy", false,-1, 31,0);
    tracep->declBus(c+3,"AWLEN_Dummy", false,-1, 7,0);
    tracep->declBit(c+97,"AWVALID_Dummy", false,-1);
    tracep->declBit(c+98,"AWREADY_Dummy", false,-1);
    tracep->declBus(c+6,"WDATA_Dummy", false,-1, 31,0);
    tracep->declBus(c+7,"WSTRB_Dummy", false,-1, 3,0);
    tracep->declBit(c+8,"WLAST_Dummy", false,-1);
    tracep->declBit(c+9,"WVALID_Dummy", false,-1);
    tracep->declBit(c+10,"WREADY_Dummy", false,-1);
    tracep->pushNamePrefix("bus_read ");
    tracep->declBus(c+432,"NUM_READ_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+432,"MAX_READ_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+431,"C_M_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+435,"C_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+431,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_ARUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_RUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+435,"C_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+435,"C_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+469,"C_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+431,"USER_DW", false,-1, 31,0);
    tracep->declBus(c+431,"USER_AW", false,-1, 31,0);
    tracep->declBus(c+476,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBit(c+426,"ACLK", false,-1);
    tracep->declBit(c+427,"ARESET", false,-1);
    tracep->declBit(c+477,"ACLK_EN", false,-1);
    tracep->declBus(c+470,"ARID", false,-1, 0,0);
    tracep->declBus(c+24,"ARADDR", false,-1, 31,0);
    tracep->declBus(c+15,"ARLEN", false,-1, 7,0);
    tracep->declBus(c+437,"ARSIZE", false,-1, 2,0);
    tracep->declBus(c+438,"ARBURST", false,-1, 1,0);
    tracep->declBus(c+442,"ARLOCK", false,-1, 1,0);
    tracep->declBus(c+440,"ARCACHE", false,-1, 3,0);
    tracep->declBus(c+441,"ARPROT", false,-1, 2,0);
    tracep->declBus(c+471,"ARQOS", false,-1, 3,0);
    tracep->declBus(c+471,"ARREGION", false,-1, 3,0);
    tracep->declBus(c+470,"ARUSER", false,-1, 0,0);
    tracep->declBit(c+16,"ARVALID", false,-1);
    tracep->declBit(c+17,"ARREADY", false,-1);
    tracep->declBus(c+25,"RID", false,-1, 0,0);
    tracep->declBus(c+19,"RDATA", false,-1, 31,0);
    tracep->declBus(c+442,"RRESP", false,-1, 1,0);
    tracep->declBit(c+20,"RLAST", false,-1);
    tracep->declBus(c+472,"RUSER", false,-1, 0,0);
    tracep->declBit(c+21,"RVALID", false,-1);
    tracep->declBit(c+22,"RREADY", false,-1);
    tracep->declBit(c+49,"rreq_valid", false,-1);
    tracep->declBit(c+50,"rreq_ack", false,-1);
    tracep->declBus(c+46,"rreq_addr", false,-1, 31,0);
    tracep->declBus(c+468,"rreq_length", false,-1, 31,0);
    tracep->declBus(c+471,"rreq_cache", false,-1, 3,0);
    tracep->declBus(c+441,"rreq_prot", false,-1, 2,0);
    tracep->declBus(c+471,"rreq_qos", false,-1, 3,0);
    tracep->declBus(c+471,"rreq_region", false,-1, 3,0);
    tracep->declBus(c+439,"rreq_user", false,-1, 0,0);
    tracep->declBus(c+53,"rdata_data", false,-1, 31,0);
    tracep->declBus(c+54,"rrsp", false,-1, 1,0);
    tracep->declBit(c+51,"rdata_valid", false,-1);
    tracep->declBit(c+52,"rdata_ack", false,-1);
    tracep->declBus(c+431,"USER_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+433,"USER_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+479,"USER_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+431,"BUS_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+433,"BUS_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+479,"BUS_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+433,"NUM_READ_WIDTH", false,-1, 31,0);
    tracep->declBus(c+435,"TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+480,"BOUNDARY_BEATS", false,-1, 9,0);
    tracep->declBus(c+481,"calc_data_width__Vstatic__y", false,-1, 31,0);
    tracep->declBus(c+482,"log2__Vstatic__n", false,-1, 31,0);
    tracep->declBus(c+483,"log2__Vstatic__m", false,-1, 31,0);
    tracep->declQuad(c+99,"rreq_data", false,-1, 63,0);
    tracep->declQuad(c+101,"rs2f_rreq_data", false,-1, 63,0);
    tracep->declBit(c+103,"rs2f_rreq_valid", false,-1);
    tracep->declBit(c+104,"rs2f_rreq_ack", false,-1);
    tracep->declQuad(c+105,"fifo_rreq_data", false,-1, 63,0);
    tracep->declBus(c+107,"tmp_addr", false,-1, 31,0);
    tracep->declBus(c+108,"tmp_len", false,-1, 31,0);
    tracep->declBus(c+109,"align_len", false,-1, 31,0);
    tracep->declBus(c+110,"arlen_tmp", false,-1, 7,0);
    tracep->declBus(c+111,"araddr_tmp", false,-1, 31,0);
    tracep->declBus(c+112,"start_addr", false,-1, 31,0);
    tracep->declBus(c+113,"start_addr_buf", false,-1, 31,0);
    tracep->declBus(c+114,"end_addr", false,-1, 31,0);
    tracep->declBus(c+115,"end_addr_buf", false,-1, 31,0);
    tracep->declBus(c+116,"sect_addr", false,-1, 31,0);
    tracep->declBus(c+117,"sect_addr_buf", false,-1, 31,0);
    tracep->declBus(c+118,"sect_end", false,-1, 1,0);
    tracep->declBus(c+119,"sect_end_buf", false,-1, 1,0);
    tracep->declBus(c+120,"burst_end", false,-1, 1,0);
    tracep->declBus(c+121,"start_to_4k", false,-1, 9,0);
    tracep->declBus(c+122,"sect_len", false,-1, 9,0);
    tracep->declBus(c+123,"sect_len_buf", false,-1, 9,0);
    tracep->declBus(c+124,"beat_len_buf", false,-1, 9,0);
    tracep->declBus(c+125,"sect_cnt", false,-1, 19,0);
    tracep->declBus(c+126,"ar2r_ardata", false,-1, 1,0);
    tracep->declBit(c+127,"fifo_rctl_r", false,-1);
    tracep->declBit(c+128,"zero_len_event", false,-1);
    tracep->declBit(c+129,"negative_len_event", false,-1);
    tracep->declBit(c+130,"invalid_len_event", false,-1);
    tracep->declBit(c+131,"invalid_len_event_reg1", false,-1);
    tracep->declBit(c+132,"invalid_len_event_reg2", false,-1);
    tracep->declBit(c+133,"fifo_rreq_valid", false,-1);
    tracep->declBit(c+134,"fifo_rreq_valid_buf", false,-1);
    tracep->declBit(c+135,"fifo_rreq_read", false,-1);
    tracep->declBit(c+127,"fifo_burst_w", false,-1);
    tracep->declBit(c+484,"fifo_resp_w", false,-1);
    tracep->declBit(c+16,"ARVALID_Dummy", false,-1);
    tracep->declBit(c+136,"ready_for_sect", false,-1);
    tracep->declBit(c+135,"next_rreq", false,-1);
    tracep->declBit(c+137,"ready_for_rreq", false,-1);
    tracep->declBit(c+138,"rreq_handling", false,-1);
    tracep->declBit(c+139,"first_sect", false,-1);
    tracep->declBit(c+140,"last_sect", false,-1);
    tracep->declBit(c+141,"next_sect", false,-1);
    tracep->declQuad(c+142,"fifo_rresp_rdata", false,-1, 34,0);
    tracep->declQuad(c+144,"data_pack", false,-1, 34,0);
    tracep->declBus(c+146,"tmp_data", false,-1, 31,0);
    tracep->declQuad(c+147,"rs_rrsp_rdata", false,-1, 33,0);
    tracep->declQuad(c+149,"rdata_data_pack", false,-1, 33,0);
    tracep->declBus(c+485,"len_cnt", false,-1, 7,0);
    tracep->declBus(c+151,"ar2r_rdata", false,-1, 1,0);
    tracep->declBus(c+152,"tmp_resp", false,-1, 1,0);
    tracep->declBus(c+153,"resp_buf", false,-1, 1,0);
    tracep->declBit(c+154,"tmp_last", false,-1);
    tracep->declBit(c+155,"tmp_last_2", false,-1);
    tracep->declBit(c+156,"need_rlast", false,-1);
    tracep->declBit(c+157,"fifo_rctl_ready", false,-1);
    tracep->declBit(c+158,"beat_valid", false,-1);
    tracep->declBit(c+159,"next_beat", false,-1);
    tracep->declBit(c+486,"burst_valid", false,-1);
    tracep->declBit(c+477,"fifo_burst_ready", false,-1);
    tracep->declBit(c+487,"next_burst", false,-1);
    tracep->declBit(c+160,"rdata_ack_t", false,-1);
    tracep->declBit(c+161,"rdata_valid_t", false,-1);
    tracep->pushNamePrefix("buff_rdata ");
    tracep->declQuad(c+488,"MEM_STYLE", false,-1, 39,0);
    tracep->declBus(c+490,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+434,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+491,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+477,"sclk_en", false,-1);
    tracep->declBit(c+22,"if_full_n", false,-1);
    tracep->declBit(c+477,"if_write_ce", false,-1);
    tracep->declBit(c+21,"if_write", false,-1);
    tracep->declQuad(c+142,"if_din", false,-1, 34,0);
    tracep->declBit(c+158,"if_empty_n", false,-1);
    tracep->declBit(c+477,"if_read_ce", false,-1);
    tracep->declBit(c+159,"if_read", false,-1);
    tracep->declQuad(c+144,"if_dout", false,-1, 34,0);
    tracep->declQuad(c+162,"q_buf", false,-1, 34,0);
    tracep->declBus(c+164,"waddr", false,-1, 7,0);
    tracep->declBus(c+165,"raddr", false,-1, 7,0);
    tracep->declBus(c+166,"wnext", false,-1, 7,0);
    tracep->declBus(c+167,"rnext", false,-1, 7,0);
    tracep->declBit(c+168,"push", false,-1);
    tracep->declBit(c+169,"pop", false,-1);
    tracep->declBus(c+170,"usedw", false,-1, 7,0);
    tracep->declBit(c+22,"full_n", false,-1);
    tracep->declBit(c+171,"empty_n", false,-1);
    tracep->declQuad(c+172,"q_tmp", false,-1, 34,0);
    tracep->declBit(c+174,"show_ahead", false,-1);
    tracep->declQuad(c+144,"dout_buf", false,-1, 34,0);
    tracep->declBit(c+158,"dout_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_equal_gen ");
    tracep->declBus(c+175,"data_buf", false,-1, 31,0);
    tracep->declBit(c+176,"ready_for_data", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("could_multi_bursts ");
    tracep->declBus(c+24,"araddr_buf", false,-1, 31,0);
    tracep->declBus(c+15,"arlen_buf", false,-1, 7,0);
    tracep->declBus(c+177,"loop_cnt", false,-1, 5,0);
    tracep->declBit(c+178,"sect_handling", false,-1);
    tracep->declBit(c+179,"last_loop", false,-1);
    tracep->declBit(c+127,"next_loop", false,-1);
    tracep->declBit(c+180,"ready_for_loop", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_rctl ");
    tracep->declBus(c+479,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+492,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+433,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+426,"sclk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+477,"sclk_en", false,-1);
    tracep->declBit(c+156,"empty_n", false,-1);
    tracep->declBit(c+157,"full_n", false,-1);
    tracep->declBit(c+155,"rdreq", false,-1);
    tracep->declBit(c+127,"wrreq", false,-1);
    tracep->declBus(c+151,"q", false,-1, 1,0);
    tracep->declBus(c+126,"data", false,-1, 1,0);
    tracep->declBit(c+181,"push", false,-1);
    tracep->declBit(c+182,"pop", false,-1);
    tracep->declBit(c+183,"full_cond", false,-1);
    tracep->declBit(c+184,"data_vld", false,-1);
    tracep->declBus(c+185,"pout", false,-1, 3,0);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+186+i*1,"mem", true,(i+0), 1,0);
    }
    tracep->declBus(c+201,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_rreq ");
    tracep->declBus(c+493,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+476,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+469,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+426,"sclk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+477,"sclk_en", false,-1);
    tracep->declBit(c+133,"empty_n", false,-1);
    tracep->declBit(c+104,"full_n", false,-1);
    tracep->declBit(c+135,"rdreq", false,-1);
    tracep->declBit(c+103,"wrreq", false,-1);
    tracep->declQuad(c+105,"q", false,-1, 63,0);
    tracep->declQuad(c+101,"data", false,-1, 63,0);
    tracep->declBit(c+202,"push", false,-1);
    tracep->declBit(c+203,"pop", false,-1);
    tracep->declBit(c+204,"full_cond", false,-1);
    tracep->declBit(c+205,"data_vld", false,-1);
    tracep->declBus(c+206,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+207+i*2,"mem", true,(i+0), 63,0);
    }
    tracep->declBus(c+217,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs_rdata ");
    tracep->declBus(c+494,"N", false,-1, 31,0);
    tracep->declBit(c+426,"sclk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declQuad(c+147,"s_data", false,-1, 33,0);
    tracep->declBit(c+161,"s_valid", false,-1);
    tracep->declBit(c+160,"s_ready", false,-1);
    tracep->declQuad(c+149,"m_data", false,-1, 33,0);
    tracep->declBit(c+51,"m_valid", false,-1);
    tracep->declBit(c+52,"m_ready", false,-1);
    tracep->declBus(c+495,"ZERO", false,-1, 1,0);
    tracep->declBus(c+496,"ONE", false,-1, 1,0);
    tracep->declBus(c+438,"TWO", false,-1, 1,0);
    tracep->declQuad(c+149,"data_p1", false,-1, 33,0);
    tracep->declQuad(c+218,"data_p2", false,-1, 33,0);
    tracep->declBit(c+220,"load_p1", false,-1);
    tracep->declBit(c+221,"load_p2", false,-1);
    tracep->declBit(c+222,"load_p1_from_p2", false,-1);
    tracep->declBit(c+160,"s_ready_t", false,-1);
    tracep->declBus(c+223,"state", false,-1, 1,0);
    tracep->declBus(c+224,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs_rreq ");
    tracep->declBus(c+493,"N", false,-1, 31,0);
    tracep->declBit(c+426,"sclk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declQuad(c+99,"s_data", false,-1, 63,0);
    tracep->declBit(c+49,"s_valid", false,-1);
    tracep->declBit(c+50,"s_ready", false,-1);
    tracep->declQuad(c+101,"m_data", false,-1, 63,0);
    tracep->declBit(c+103,"m_valid", false,-1);
    tracep->declBit(c+104,"m_ready", false,-1);
    tracep->declBus(c+495,"ZERO", false,-1, 1,0);
    tracep->declBus(c+496,"ONE", false,-1, 1,0);
    tracep->declBus(c+438,"TWO", false,-1, 1,0);
    tracep->declQuad(c+101,"data_p1", false,-1, 63,0);
    tracep->declQuad(c+225,"data_p2", false,-1, 63,0);
    tracep->declBit(c+227,"load_p1", false,-1);
    tracep->declBit(c+228,"load_p2", false,-1);
    tracep->declBit(c+229,"load_p1_from_p2", false,-1);
    tracep->declBit(c+50,"s_ready_t", false,-1);
    tracep->declBus(c+230,"state", false,-1, 1,0);
    tracep->declBus(c+231,"next", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("bus_write ");
    tracep->declBus(c+432,"NUM_WRITE_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+432,"MAX_WRITE_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+431,"C_M_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+435,"C_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+431,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_AWUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_WUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"C_M_AXI_BUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+435,"C_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+435,"C_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+469,"C_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+431,"USER_DW", false,-1, 31,0);
    tracep->declBus(c+431,"USER_AW", false,-1, 31,0);
    tracep->declBus(c+476,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBit(c+426,"ACLK", false,-1);
    tracep->declBit(c+427,"ARESET", false,-1);
    tracep->declBit(c+477,"ACLK_EN", false,-1);
    tracep->declBus(c+470,"AWID", false,-1, 0,0);
    tracep->declBus(c+23,"AWADDR", false,-1, 31,0);
    tracep->declBus(c+3,"AWLEN", false,-1, 7,0);
    tracep->declBus(c+437,"AWSIZE", false,-1, 2,0);
    tracep->declBus(c+438,"AWBURST", false,-1, 1,0);
    tracep->declBus(c+442,"AWLOCK", false,-1, 1,0);
    tracep->declBus(c+440,"AWCACHE", false,-1, 3,0);
    tracep->declBus(c+441,"AWPROT", false,-1, 2,0);
    tracep->declBus(c+471,"AWQOS", false,-1, 3,0);
    tracep->declBus(c+471,"AWREGION", false,-1, 3,0);
    tracep->declBus(c+470,"AWUSER", false,-1, 0,0);
    tracep->declBit(c+97,"AWVALID", false,-1);
    tracep->declBit(c+98,"AWREADY", false,-1);
    tracep->declBus(c+470,"WID", false,-1, 0,0);
    tracep->declBus(c+6,"WDATA", false,-1, 31,0);
    tracep->declBus(c+7,"WSTRB", false,-1, 3,0);
    tracep->declBit(c+8,"WLAST", false,-1);
    tracep->declBus(c+470,"WUSER", false,-1, 0,0);
    tracep->declBit(c+9,"WVALID", false,-1);
    tracep->declBit(c+10,"WREADY", false,-1);
    tracep->declBus(c+26,"BID", false,-1, 0,0);
    tracep->declBus(c+442,"BRESP", false,-1, 1,0);
    tracep->declBus(c+473,"BUSER", false,-1, 0,0);
    tracep->declBit(c+12,"BVALID", false,-1);
    tracep->declBit(c+13,"BREADY", false,-1);
    tracep->declBit(c+44,"wreq_valid", false,-1);
    tracep->declBit(c+45,"wreq_ack", false,-1);
    tracep->declBus(c+46,"wreq_addr", false,-1, 31,0);
    tracep->declBus(c+468,"wreq_length", false,-1, 31,0);
    tracep->declBus(c+471,"wreq_cache", false,-1, 3,0);
    tracep->declBus(c+441,"wreq_prot", false,-1, 2,0);
    tracep->declBus(c+471,"wreq_qos", false,-1, 3,0);
    tracep->declBus(c+471,"wreq_region", false,-1, 3,0);
    tracep->declBus(c+439,"wreq_user", false,-1, 0,0);
    tracep->declBit(c+47,"wdata_valid", false,-1);
    tracep->declBit(c+48,"wdata_ack", false,-1);
    tracep->declBus(c+478,"wdata_strb", false,-1, 3,0);
    tracep->declBus(c+439,"wdata_user", false,-1, 0,0);
    tracep->declBus(c+65,"wdata_data", false,-1, 31,0);
    tracep->declBit(c+55,"wrsp_valid", false,-1);
    tracep->declBit(c+56,"wrsp_ack", false,-1);
    tracep->declBus(c+57,"wrsp", false,-1, 1,0);
    tracep->declBus(c+431,"USER_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+433,"USER_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+479,"USER_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+431,"BUS_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+433,"BUS_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+479,"BUS_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+433,"NUM_WRITE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+435,"TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+480,"BOUNDARY_BEATS", false,-1, 9,0);
    tracep->declBus(c+497,"calc_data_width__Vstatic__y", false,-1, 31,0);
    tracep->declBus(c+498,"log2__Vstatic__n", false,-1, 31,0);
    tracep->declBus(c+499,"log2__Vstatic__m", false,-1, 31,0);
    tracep->declQuad(c+99,"wreq_data", false,-1, 63,0);
    tracep->declQuad(c+232,"rs2f_wreq_data", false,-1, 63,0);
    tracep->declBit(c+234,"rs2f_wreq_valid", false,-1);
    tracep->declBit(c+235,"rs2f_wreq_ack", false,-1);
    tracep->declQuad(c+236,"fifo_wreq_data", false,-1, 63,0);
    tracep->declBus(c+238,"tmp_addr", false,-1, 31,0);
    tracep->declBus(c+239,"tmp_len", false,-1, 31,0);
    tracep->declBus(c+240,"align_len", false,-1, 31,0);
    tracep->declBus(c+241,"awlen_tmp", false,-1, 7,0);
    tracep->declBus(c+242,"awaddr_tmp", false,-1, 31,0);
    tracep->declBus(c+243,"start_addr", false,-1, 31,0);
    tracep->declBus(c+244,"start_addr_buf", false,-1, 31,0);
    tracep->declBus(c+245,"end_addr", false,-1, 31,0);
    tracep->declBus(c+246,"end_addr_buf", false,-1, 31,0);
    tracep->declBus(c+247,"sect_addr", false,-1, 31,0);
    tracep->declBus(c+248,"sect_addr_buf", false,-1, 31,0);
    tracep->declBus(c+249,"sect_end", false,-1, 1,0);
    tracep->declBus(c+250,"sect_end_buf", false,-1, 1,0);
    tracep->declBus(c+251,"burst_end", false,-1, 1,0);
    tracep->declBus(c+252,"start_to_4k", false,-1, 9,0);
    tracep->declBus(c+253,"sect_len", false,-1, 9,0);
    tracep->declBus(c+254,"sect_len_buf", false,-1, 9,0);
    tracep->declBus(c+255,"beat_len_buf", false,-1, 9,0);
    tracep->declBus(c+256,"aw2b_awdata", false,-1, 1,0);
    tracep->declBus(c+257,"sect_cnt", false,-1, 19,0);
    tracep->declBit(c+258,"zero_len_event", false,-1);
    tracep->declBit(c+259,"negative_len_event", false,-1);
    tracep->declBit(c+260,"invalid_len_event", false,-1);
    tracep->declBit(c+261,"invalid_len_event_reg1", false,-1);
    tracep->declBit(c+262,"invalid_len_event_reg2", false,-1);
    tracep->declBit(c+263,"fifo_wreq_valid", false,-1);
    tracep->declBit(c+264,"fifo_wreq_valid_buf", false,-1);
    tracep->declBit(c+265,"fifo_wreq_read", false,-1);
    tracep->declBit(c+266,"fifo_burst_w", false,-1);
    tracep->declBit(c+267,"fifo_resp_w", false,-1);
    tracep->declBit(c+97,"AWVALID_Dummy", false,-1);
    tracep->declBit(c+268,"last_sect_buf", false,-1);
    tracep->declBit(c+269,"ready_for_sect", false,-1);
    tracep->declBit(c+265,"next_wreq", false,-1);
    tracep->declBit(c+270,"ready_for_wreq", false,-1);
    tracep->declBit(c+271,"wreq_handling", false,-1);
    tracep->declBit(c+272,"first_sect", false,-1);
    tracep->declBit(c+273,"last_sect", false,-1);
    tracep->declBit(c+274,"next_sect", false,-1);
    tracep->declQuad(c+275,"fifo_wdata_wstrb", false,-1, 35,0);
    tracep->declQuad(c+277,"data_pack", false,-1, 35,0);
    tracep->declBus(c+279,"tmp_data", false,-1, 31,0);
    tracep->declBus(c+280,"tmp_strb", false,-1, 3,0);
    tracep->declBus(c+281,"len_cnt", false,-1, 7,0);
    tracep->declBus(c+282,"burst_len", false,-1, 7,0);
    tracep->declBit(c+500,"beat_valid", false,-1);
    tracep->declBit(c+283,"next_data", false,-1);
    tracep->declBit(c+284,"burst_valid", false,-1);
    tracep->declBit(c+285,"fifo_burst_ready", false,-1);
    tracep->declBit(c+286,"next_burst", false,-1);
    tracep->declBit(c+287,"data_valid", false,-1);
    tracep->declBit(c+9,"WVALID_Dummy", false,-1);
    tracep->declBit(c+8,"WLAST_Dummy", false,-1);
    tracep->declBus(c+288,"aw2b_bdata", false,-1, 1,0);
    tracep->declBus(c+289,"bresp_tmp", false,-1, 1,0);
    tracep->declBit(c+290,"next_resp", false,-1);
    tracep->declBit(c+291,"last_resp", false,-1);
    tracep->declBit(c+292,"invalid_event", false,-1);
    tracep->declBit(c+293,"fifo_resp_ready", false,-1);
    tracep->declBit(c+294,"need_wrsp", false,-1);
    tracep->declBit(c+295,"resp_match", false,-1);
    tracep->declBit(c+13,"resp_ready", false,-1);
    tracep->pushNamePrefix("buff_wdata ");
    tracep->declQuad(c+488,"MEM_STYLE", false,-1, 39,0);
    tracep->declBus(c+501,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+434,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+491,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+477,"sclk_en", false,-1);
    tracep->declBit(c+48,"if_full_n", false,-1);
    tracep->declBit(c+477,"if_write_ce", false,-1);
    tracep->declBit(c+47,"if_write", false,-1);
    tracep->declQuad(c+275,"if_din", false,-1, 35,0);
    tracep->declBit(c+287,"if_empty_n", false,-1);
    tracep->declBit(c+477,"if_read_ce", false,-1);
    tracep->declBit(c+283,"if_read", false,-1);
    tracep->declQuad(c+277,"if_dout", false,-1, 35,0);
    tracep->declQuad(c+296,"q_buf", false,-1, 35,0);
    tracep->declBus(c+298,"waddr", false,-1, 7,0);
    tracep->declBus(c+299,"raddr", false,-1, 7,0);
    tracep->declBus(c+300,"wnext", false,-1, 7,0);
    tracep->declBus(c+301,"rnext", false,-1, 7,0);
    tracep->declBit(c+302,"push", false,-1);
    tracep->declBit(c+303,"pop", false,-1);
    tracep->declBus(c+304,"usedw", false,-1, 7,0);
    tracep->declBit(c+48,"full_n", false,-1);
    tracep->declBit(c+305,"empty_n", false,-1);
    tracep->declQuad(c+306,"q_tmp", false,-1, 35,0);
    tracep->declBit(c+308,"show_ahead", false,-1);
    tracep->declQuad(c+277,"dout_buf", false,-1, 35,0);
    tracep->declBit(c+287,"dout_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_equal_gen ");
    tracep->declBus(c+6,"data_buf", false,-1, 31,0);
    tracep->declBus(c+7,"strb_buf", false,-1, 3,0);
    tracep->declBus(c+241,"tmp_burst_info", false,-1, 7,0);
    tracep->declBit(c+309,"ready_for_data", false,-1);
    tracep->pushNamePrefix("fifo_burst ");
    tracep->declBus(c+434,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+476,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+469,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+426,"sclk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+477,"sclk_en", false,-1);
    tracep->declBit(c+284,"empty_n", false,-1);
    tracep->declBit(c+285,"full_n", false,-1);
    tracep->declBit(c+286,"rdreq", false,-1);
    tracep->declBit(c+266,"wrreq", false,-1);
    tracep->declBus(c+282,"q", false,-1, 7,0);
    tracep->declBus(c+241,"data", false,-1, 7,0);
    tracep->declBit(c+310,"push", false,-1);
    tracep->declBit(c+311,"pop", false,-1);
    tracep->declBit(c+312,"full_cond", false,-1);
    tracep->declBit(c+313,"data_vld", false,-1);
    tracep->declBus(c+314,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+315+i*1,"mem", true,(i+0), 7,0);
    }
    tracep->declBus(c+320,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("could_multi_bursts ");
    tracep->declBus(c+23,"awaddr_buf", false,-1, 31,0);
    tracep->declBus(c+3,"awlen_buf", false,-1, 7,0);
    tracep->declBus(c+321,"loop_cnt", false,-1, 5,0);
    tracep->declBit(c+322,"sect_handling", false,-1);
    tracep->declBit(c+323,"last_loop", false,-1);
    tracep->declBit(c+267,"next_loop", false,-1);
    tracep->declBit(c+324,"ready_for_loop", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_resp ");
    tracep->declBus(c+479,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+492,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+433,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+426,"sclk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+477,"sclk_en", false,-1);
    tracep->declBit(c+294,"empty_n", false,-1);
    tracep->declBit(c+293,"full_n", false,-1);
    tracep->declBit(c+290,"rdreq", false,-1);
    tracep->declBit(c+267,"wrreq", false,-1);
    tracep->declBus(c+288,"q", false,-1, 1,0);
    tracep->declBus(c+256,"data", false,-1, 1,0);
    tracep->declBit(c+325,"push", false,-1);
    tracep->declBit(c+326,"pop", false,-1);
    tracep->declBit(c+327,"full_cond", false,-1);
    tracep->declBit(c+328,"data_vld", false,-1);
    tracep->declBus(c+329,"pout", false,-1, 3,0);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+330+i*1,"mem", true,(i+0), 1,0);
    }
    tracep->declBus(c+345,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_resp_to_user ");
    tracep->declBus(c+479,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+476,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+469,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+426,"sclk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+477,"sclk_en", false,-1);
    tracep->declBit(c+55,"empty_n", false,-1);
    tracep->declBit(c+13,"full_n", false,-1);
    tracep->declBit(c+56,"rdreq", false,-1);
    tracep->declBit(c+295,"wrreq", false,-1);
    tracep->declBus(c+57,"q", false,-1, 1,0);
    tracep->declBus(c+289,"data", false,-1, 1,0);
    tracep->declBit(c+346,"push", false,-1);
    tracep->declBit(c+347,"pop", false,-1);
    tracep->declBit(c+348,"full_cond", false,-1);
    tracep->declBit(c+349,"data_vld", false,-1);
    tracep->declBus(c+350,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+351+i*1,"mem", true,(i+0), 1,0);
    }
    tracep->declBus(c+356,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_wreq ");
    tracep->declBus(c+493,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+476,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+469,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+426,"sclk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+477,"sclk_en", false,-1);
    tracep->declBit(c+263,"empty_n", false,-1);
    tracep->declBit(c+235,"full_n", false,-1);
    tracep->declBit(c+265,"rdreq", false,-1);
    tracep->declBit(c+234,"wrreq", false,-1);
    tracep->declQuad(c+236,"q", false,-1, 63,0);
    tracep->declQuad(c+232,"data", false,-1, 63,0);
    tracep->declBit(c+357,"push", false,-1);
    tracep->declBit(c+358,"pop", false,-1);
    tracep->declBit(c+359,"full_cond", false,-1);
    tracep->declBit(c+360,"data_vld", false,-1);
    tracep->declBus(c+361,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+362+i*2,"mem", true,(i+0), 63,0);
    }
    tracep->declBus(c+372,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs_wreq ");
    tracep->declBus(c+493,"N", false,-1, 31,0);
    tracep->declBit(c+426,"sclk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declQuad(c+99,"s_data", false,-1, 63,0);
    tracep->declBit(c+44,"s_valid", false,-1);
    tracep->declBit(c+45,"s_ready", false,-1);
    tracep->declQuad(c+232,"m_data", false,-1, 63,0);
    tracep->declBit(c+234,"m_valid", false,-1);
    tracep->declBit(c+235,"m_ready", false,-1);
    tracep->declBus(c+495,"ZERO", false,-1, 1,0);
    tracep->declBus(c+496,"ONE", false,-1, 1,0);
    tracep->declBus(c+438,"TWO", false,-1, 1,0);
    tracep->declQuad(c+232,"data_p1", false,-1, 63,0);
    tracep->declQuad(c+373,"data_p2", false,-1, 63,0);
    tracep->declBit(c+375,"load_p1", false,-1);
    tracep->declBit(c+376,"load_p2", false,-1);
    tracep->declBit(c+377,"load_p1_from_p2", false,-1);
    tracep->declBit(c+45,"s_ready_t", false,-1);
    tracep->declBus(c+378,"state", false,-1, 1,0);
    tracep->declBus(c+379,"next", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wreq_throttl ");
    tracep->declBus(c+435,"USED_FIX", false,-1, 31,0);
    tracep->declBus(c+433,"FIX_VALUE", false,-1, 31,0);
    tracep->declBus(c+431,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+431,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+432,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBus(c+435,"CONSERVATIVE", false,-1, 31,0);
    tracep->declBus(c+435,"AVERAGE_MODE", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+477,"ce", false,-1);
    tracep->declBus(c+23,"in_addr", false,-1, 31,0);
    tracep->declBus(c+3,"in_len", false,-1, 7,0);
    tracep->declBit(c+97,"in_req_valid", false,-1);
    tracep->declBit(c+98,"out_req_ready", false,-1);
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
    tracep->declBus(c+502,"log2__Vstatic__n", false,-1, 31,0);
    tracep->declBus(c+503,"log2__Vstatic__m", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBus(c+435,"threshold", false,-1, 31,0);
    tracep->declBit(c+380,"req_en", false,-1);
    tracep->declBit(c+381,"handshake", false,-1);
    tracep->declBus(c+3,"load_init", false,-1, 7,0);
    tracep->declBus(c+382,"throttl_cnt", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("data_from_mem_V_U ");
    tracep->declBus(c+431,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+475,"AddressRange", false,-1, 31,0);
    tracep->declBus(c+474,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBus(c+79,"address0", false,-1, 9,0);
    tracep->declBit(c+80,"ce0", false,-1);
    tracep->declBit(c+81,"we0", false,-1);
    tracep->declBus(c+74,"d0", false,-1, 31,0);
    tracep->declBus(c+82,"q0", false,-1, 31,0);
    tracep->pushNamePrefix("axi4_tester_data_from_mem_V_ram_U ");
    tracep->declBus(c+431,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+474,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+475,"MEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+79,"addr0", false,-1, 9,0);
    tracep->declBit(c+80,"ce0", false,-1);
    tracep->declBus(c+74,"d0", false,-1, 31,0);
    tracep->declBit(c+81,"we0", false,-1);
    tracep->declBus(c+82,"q0", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("test_data_V_U ");
    tracep->declBus(c+431,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+475,"AddressRange", false,-1, 31,0);
    tracep->declBus(c+474,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBus(c+30,"address0", false,-1, 9,0);
    tracep->declBit(c+31,"ce0", false,-1);
    tracep->declBus(c+32,"q0", false,-1, 31,0);
    tracep->pushNamePrefix("axi4_tester_test_data_V_rom_U ");
    tracep->declBus(c+431,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+474,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+475,"MEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+30,"addr0", false,-1, 9,0);
    tracep->declBit(c+31,"ce0", false,-1);
    tracep->declBus(c+32,"q0", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi_ram_inst ");
    tracep->declBus(c+431,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+433,"STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+434,"ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+435,"PIPELINE_OUTPUT", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+436,"s_axi_awid", false,-1, 7,0);
    tracep->declBus(c+2,"s_axi_awaddr", false,-1, 15,0);
    tracep->declBus(c+3,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+437,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+438,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+439,"s_axi_awlock", false,-1);
    tracep->declBus(c+440,"s_axi_awcache", false,-1, 3,0);
    tracep->declBus(c+441,"s_axi_awprot", false,-1, 2,0);
    tracep->declBit(c+4,"s_axi_awvalid", false,-1);
    tracep->declBit(c+5,"s_axi_awready", false,-1);
    tracep->declBus(c+6,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"s_axi_wlast", false,-1);
    tracep->declBit(c+9,"s_axi_wvalid", false,-1);
    tracep->declBit(c+10,"s_axi_wready", false,-1);
    tracep->declBus(c+11,"s_axi_bid", false,-1, 7,0);
    tracep->declBus(c+442,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+12,"s_axi_bvalid", false,-1);
    tracep->declBit(c+13,"s_axi_bready", false,-1);
    tracep->declBus(c+443,"s_axi_arid", false,-1, 7,0);
    tracep->declBus(c+14,"s_axi_araddr", false,-1, 15,0);
    tracep->declBus(c+15,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+437,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+438,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+439,"s_axi_arlock", false,-1);
    tracep->declBus(c+440,"s_axi_arcache", false,-1, 3,0);
    tracep->declBus(c+441,"s_axi_arprot", false,-1, 2,0);
    tracep->declBit(c+16,"s_axi_arvalid", false,-1);
    tracep->declBit(c+17,"s_axi_arready", false,-1);
    tracep->declBus(c+18,"s_axi_rid", false,-1, 7,0);
    tracep->declBus(c+19,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+442,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+20,"s_axi_rlast", false,-1);
    tracep->declBit(c+21,"s_axi_rvalid", false,-1);
    tracep->declBit(c+22,"s_axi_rready", false,-1);
    tracep->declBus(c+504,"VALID_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+433,"WORD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+434,"WORD_SIZE", false,-1, 31,0);
    tracep->declBus(c+470,"READ_STATE_IDLE", false,-1, 0,0);
    tracep->declBus(c+505,"READ_STATE_RDATA", false,-1, 0,0);
    tracep->declBus(c+383,"read_state_reg", false,-1, 0,0);
    tracep->declBus(c+384,"read_state_next", false,-1, 0,0);
    tracep->declBus(c+442,"WRITE_STATE_IDLE", false,-1, 1,0);
    tracep->declBus(c+438,"WRITE_STATE_WDATA", false,-1, 1,0);
    tracep->declBus(c+495,"WRITE_STATE_RESP", false,-1, 1,0);
    tracep->declBus(c+385,"write_state_reg", false,-1, 1,0);
    tracep->declBus(c+386,"write_state_next", false,-1, 1,0);
    tracep->declBit(c+387,"mem_wr_en", false,-1);
    tracep->declBit(c+388,"mem_rd_en", false,-1);
    tracep->declBus(c+389,"read_id_reg", false,-1, 7,0);
    tracep->declBus(c+390,"read_id_next", false,-1, 7,0);
    tracep->declBus(c+391,"read_addr_reg", false,-1, 15,0);
    tracep->declBus(c+392,"read_addr_next", false,-1, 15,0);
    tracep->declBus(c+393,"read_count_reg", false,-1, 7,0);
    tracep->declBus(c+394,"read_count_next", false,-1, 7,0);
    tracep->declBus(c+395,"read_size_reg", false,-1, 2,0);
    tracep->declBus(c+396,"read_size_next", false,-1, 2,0);
    tracep->declBus(c+397,"read_burst_reg", false,-1, 1,0);
    tracep->declBus(c+398,"read_burst_next", false,-1, 1,0);
    tracep->declBus(c+399,"write_id_reg", false,-1, 7,0);
    tracep->declBus(c+400,"write_id_next", false,-1, 7,0);
    tracep->declBus(c+401,"write_addr_reg", false,-1, 15,0);
    tracep->declBus(c+402,"write_addr_next", false,-1, 15,0);
    tracep->declBus(c+403,"write_count_reg", false,-1, 7,0);
    tracep->declBus(c+404,"write_count_next", false,-1, 7,0);
    tracep->declBus(c+405,"write_size_reg", false,-1, 2,0);
    tracep->declBus(c+406,"write_size_next", false,-1, 2,0);
    tracep->declBus(c+407,"write_burst_reg", false,-1, 1,0);
    tracep->declBus(c+408,"write_burst_next", false,-1, 1,0);
    tracep->declBit(c+5,"s_axi_awready_reg", false,-1);
    tracep->declBit(c+409,"s_axi_awready_next", false,-1);
    tracep->declBit(c+10,"s_axi_wready_reg", false,-1);
    tracep->declBit(c+410,"s_axi_wready_next", false,-1);
    tracep->declBus(c+11,"s_axi_bid_reg", false,-1, 7,0);
    tracep->declBus(c+411,"s_axi_bid_next", false,-1, 7,0);
    tracep->declBit(c+12,"s_axi_bvalid_reg", false,-1);
    tracep->declBit(c+412,"s_axi_bvalid_next", false,-1);
    tracep->declBit(c+17,"s_axi_arready_reg", false,-1);
    tracep->declBit(c+413,"s_axi_arready_next", false,-1);
    tracep->declBus(c+18,"s_axi_rid_reg", false,-1, 7,0);
    tracep->declBus(c+414,"s_axi_rid_next", false,-1, 7,0);
    tracep->declBus(c+19,"s_axi_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+506,"s_axi_rdata_next", false,-1, 31,0);
    tracep->declBit(c+20,"s_axi_rlast_reg", false,-1);
    tracep->declBit(c+415,"s_axi_rlast_next", false,-1);
    tracep->declBit(c+21,"s_axi_rvalid_reg", false,-1);
    tracep->declBit(c+416,"s_axi_rvalid_next", false,-1);
    tracep->declBus(c+417,"s_axi_rid_pipe_reg", false,-1, 7,0);
    tracep->declBus(c+418,"s_axi_rdata_pipe_reg", false,-1, 31,0);
    tracep->declBit(c+419,"s_axi_rlast_pipe_reg", false,-1);
    tracep->declBit(c+420,"s_axi_rvalid_pipe_reg", false,-1);
    tracep->declBus(c+421,"s_axi_awaddr_valid", false,-1, 13,0);
    tracep->declBus(c+422,"s_axi_araddr_valid", false,-1, 13,0);
    tracep->declBus(c+423,"read_addr_valid", false,-1, 13,0);
    tracep->declBus(c+424,"write_addr_valid", false,-1, 13,0);
    tracep->declBus(c+425,"i", false,-1, 31,0);
    tracep->declBus(c+1,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_init_top(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_init_top\n"); );
    // Body
    Vtb_axi4_ram___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("tb_axi4_ram ");
    Vtb_axi4_ram___024root__trace_init_sub__TOP__tb_axi4_ram__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi4_ram___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi4_ram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_register(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_axi4_ram___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_axi4_ram___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_axi4_ram___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_full_sub_0(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_full_top_0\n"); );
    // Init
    Vtb_axi4_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram___024root*>(voidSelf);
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_axi4_ram___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_full_sub_0(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__j),32);
    bufp->fullSData(oldp+2,((0xffffU & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf)),16);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf),8);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__tb_axi4_ram.__PVT__s_axi_awvalid));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_awready_reg));
    bufp->fullIData(oldp+6,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__data_buf),32);
    bufp->fullCData(oldp+7,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__strb_buf),4);
    bufp->fullBit(oldp+8,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_wready_reg));
    bufp->fullCData(oldp+11,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bid_reg),8);
    bufp->fullBit(oldp+12,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready));
    bufp->fullSData(oldp+14,((0xffffU & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf)),16);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf),8);
    bufp->fullBit(oldp+16,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_arready_reg));
    bufp->fullCData(oldp+18,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rid_reg),8);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rdata_reg),32);
    bufp->fullBit(oldp+20,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n));
    bufp->fullIData(oldp+23,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf),32);
    bufp->fullBit(oldp+25,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rid_reg))));
    bufp->fullBit(oldp+26,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bid_reg))));
    bufp->fullSData(oldp+27,((0x3ffU & ((0x400U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                         ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i1_0_reg_177)
                                         : ((2U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                             ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166)
                                             : (IData)(vlSymsp->TOP__tb_axi4_ram.axi4_tester_inst__DOT____Vxrand_h9b4974b5__0))))),10);
    bufp->fullBit(oldp+28,((IData)((0U != (0x402U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)))));
    bufp->fullSData(oldp+29,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__addr_q0),10);
    bufp->fullSData(oldp+30,((0x3ffU & ((0x200000U 
                                         & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                         ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i2_0_reg_188)
                                         : ((2U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                             ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166)
                                             : (IData)(vlSymsp->TOP__tb_axi4_ram.axi4_tester_inst__DOT____Vxrand_h9b4974b5__2))))),10);
    bufp->fullBit(oldp+31,((IData)((0U != (0x200002U 
                                           & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)))));
    bufp->fullIData(oldp+32,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__test_data_V_q0),32);
    bufp->fullBit(oldp+33,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 3U)) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_awready_reg)))));
    bufp->fullIData(oldp+34,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm),24);
    bufp->fullBit(oldp+35,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 3U))));
    bufp->fullBit(oldp+36,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 4U)) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_wready_reg)))));
    bufp->fullBit(oldp+37,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 4U))));
    bufp->fullBit(oldp+38,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 9U)) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg)))));
    bufp->fullBit(oldp+39,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 9U))));
    bufp->fullBit(oldp+40,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 0xcU)) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)))));
    bufp->fullBit(oldp+41,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0xcU))));
    bufp->fullBit(oldp+42,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 0x13U)) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg)))));
    bufp->fullBit(oldp+43,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x13U))));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t));
    bufp->fullIData(oldp+46,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__reg_213),32);
    bufp->fullBit(oldp+47,(((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                             >> 4U) & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n))));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t));
    bufp->fullBit(oldp+51,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY));
    bufp->fullIData(oldp+53,((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1)),32);
    bufp->fullCData(oldp+54,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1 
                                            >> 0x20U)))),2);
    bufp->fullBit(oldp+55,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_BREADY));
    bufp->fullCData(oldp+57,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_BRESP),2);
    bufp->fullSData(oldp+58,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__reg_213),10);
    bufp->fullBit(oldp+59,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 2U))));
    bufp->fullBit(oldp+60,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0xbU))));
    bufp->fullSData(oldp+61,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166)))),11);
    bufp->fullSData(oldp+62,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_reg_301),11);
    bufp->fullBit(oldp+63,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 1U))));
    bufp->fullBit(oldp+64,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166))));
    bufp->fullIData(oldp+65,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_316),32);
    bufp->fullSData(oldp+66,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i1_0_reg_177)))),11);
    bufp->fullSData(oldp+67,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_1_reg_330),11);
    bufp->fullBit(oldp+68,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0xaU))));
    bufp->fullQData(oldp+69,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i1_0_reg_177))),64);
    bufp->fullQData(oldp+71,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__zext_ln22_reg_335),64);
    bufp->fullBit(oldp+73,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i1_0_reg_177))));
    bufp->fullIData(oldp+74,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_addr_1_1_reg_351),32);
    bufp->fullSData(oldp+75,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i2_0_reg_188)))),11);
    bufp->fullSData(oldp+76,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_2_reg_359),11);
    bufp->fullBit(oldp+77,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x15U))));
    bufp->fullBit(oldp+78,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i2_0_reg_188))));
    bufp->fullSData(oldp+79,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_from_mem_V_address0),10);
    bufp->fullBit(oldp+80,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_from_mem_V_ce0));
    bufp->fullBit(oldp+81,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x14U))));
    bufp->fullIData(oldp+82,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0),32);
    bufp->fullSData(oldp+83,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166),11);
    bufp->fullBit(oldp+84,((1U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)));
    bufp->fullSData(oldp+85,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i1_0_reg_177),11);
    bufp->fullSData(oldp+86,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i2_0_reg_188),11);
    bufp->fullBit(oldp+87,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x16U))));
    bufp->fullBit(oldp+88,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__storemerge_reg_199));
    bufp->fullQData(oldp+90,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166))),64);
    bufp->fullQData(oldp+92,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i2_0_reg_188))),64);
    bufp->fullQData(oldp+94,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__reg_213))),64);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_NS_fsm),24);
    bufp->fullBit(oldp+97,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy));
    bufp->fullQData(oldp+99,((0x100000000ULL | (QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__reg_213)))),64);
    bufp->fullQData(oldp+101,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p1),64);
    bufp->fullBit(oldp+103,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack));
    bufp->fullQData(oldp+105,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data),64);
    bufp->fullIData(oldp+107,((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data)),32);
    bufp->fullIData(oldp+108,((IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len),32);
    bufp->fullCData(oldp+110,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                                ? (0xfU & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf))
                                : 0xfU)),8);
    bufp->fullIData(oldp+111,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt))
                                ? vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                   + (((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf)) 
                                      << 2U)))),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf),32);
    bufp->fullIData(oldp+114,((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len 
                               + vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr)),32);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf),32);
    bufp->fullIData(oldp+116,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)
                                ? vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
                                   << 0xcU))),32);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf),32);
    bufp->fullCData(oldp+118,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)
                                ? (3U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf)
                                : 3U)),2);
    bufp->fullCData(oldp+119,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf),2);
    bufp->fullCData(oldp+120,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                                ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf)
                                : 3U)),2);
    bufp->fullSData(oldp+121,((0x3ffU & ((IData)(0x3ffU) 
                                         - (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                            >> 2U)))),10);
    bufp->fullSData(oldp+122,((0x3ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                          ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf)
                                          : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)) 
                                              & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect))
                                              ? ((IData)(0x3ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                                  >> 2U))
                                              : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                                  ? 
                                                 (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf 
                                                  >> 2U)
                                                  : 0x3ffU))))),10);
    bufp->fullSData(oldp+123,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf),10);
    bufp->fullSData(oldp+124,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf),10);
    bufp->fullIData(oldp+125,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt),20);
    bufp->fullCData(oldp+126,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                               << 1U)),2);
    bufp->fullBit(oldp+127,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r));
    bufp->fullBit(oldp+128,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                             & (0U == (IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+129,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                             & (IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                        >> 0x3fU)))));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event));
    bufp->fullBit(oldp+131,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg1));
    bufp->fullBit(oldp+132,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg2));
    bufp->fullBit(oldp+133,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid));
    bufp->fullBit(oldp+134,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_read));
    bufp->fullBit(oldp+136,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r))) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling))))));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect));
    bufp->fullQData(oldp+142,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rresp_rdata),35);
    bufp->fullQData(oldp+144,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf),35);
    bufp->fullIData(oldp+146,((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf)),32);
    bufp->fullQData(oldp+147,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rrsp_rdata),34);
    bufp->fullQData(oldp+149,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1),34);
    bufp->fullCData(oldp+151,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ar2r_rdata),2);
    bufp->fullCData(oldp+152,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                             >> 0x20U)))),2);
    bufp->fullCData(oldp+153,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf),2);
    bufp->fullBit(oldp+154,(((IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                      >> 0x22U)) & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid))));
    bufp->fullBit(oldp+155,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__tmp_last_2));
    bufp->fullBit(oldp+156,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat));
    bufp->fullBit(oldp+160,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t));
    bufp->fullBit(oldp+161,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t));
    bufp->fullQData(oldp+162,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf),35);
    bufp->fullCData(oldp+164,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr),8);
    bufp->fullCData(oldp+165,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr),8);
    bufp->fullCData(oldp+166,((0xffU & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push)
                                         ? ((0xffU 
                                             == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr))
                                             ? 0U : 
                                            ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))
                                         : (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))),8);
    bufp->fullCData(oldp+167,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext),8);
    bufp->fullBit(oldp+168,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push));
    bufp->fullBit(oldp+169,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop));
    bufp->fullCData(oldp+170,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw),8);
    bufp->fullBit(oldp+171,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n));
    bufp->fullQData(oldp+172,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp),35);
    bufp->fullBit(oldp+174,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead));
    bufp->fullIData(oldp+175,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf),32);
    bufp->fullBit(oldp+176,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data));
    bufp->fullCData(oldp+177,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt),6);
    bufp->fullBit(oldp+178,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop));
    bufp->fullBit(oldp+180,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready))));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop));
    bufp->fullBit(oldp+183,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop)) 
                                & ((0xdU == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld))))));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld));
    bufp->fullCData(oldp+185,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout),4);
    bufp->fullCData(oldp+186,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[0]),2);
    bufp->fullCData(oldp+187,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[1]),2);
    bufp->fullCData(oldp+188,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[2]),2);
    bufp->fullCData(oldp+189,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[3]),2);
    bufp->fullCData(oldp+190,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[4]),2);
    bufp->fullCData(oldp+191,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[5]),2);
    bufp->fullCData(oldp+192,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[6]),2);
    bufp->fullCData(oldp+193,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[7]),2);
    bufp->fullCData(oldp+194,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[8]),2);
    bufp->fullCData(oldp+195,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[9]),2);
    bufp->fullCData(oldp+196,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[10]),2);
    bufp->fullCData(oldp+197,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[11]),2);
    bufp->fullCData(oldp+198,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[12]),2);
    bufp->fullCData(oldp+199,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[13]),2);
    bufp->fullCData(oldp+200,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[14]),2);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__i),32);
    bufp->fullBit(oldp+202,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push));
    bufp->fullBit(oldp+203,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop));
    bufp->fullBit(oldp+204,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld))))));
    bufp->fullBit(oldp+205,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld));
    bufp->fullCData(oldp+206,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout),3);
    bufp->fullQData(oldp+207,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[0]),64);
    bufp->fullQData(oldp+209,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[1]),64);
    bufp->fullQData(oldp+211,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[2]),64);
    bufp->fullQData(oldp+213,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[3]),64);
    bufp->fullQData(oldp+215,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[4]),64);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__i),32);
    bufp->fullQData(oldp+218,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p2),34);
    bufp->fullBit(oldp+220,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY))))));
    bufp->fullBit(oldp+221,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t))));
    bufp->fullBit(oldp+222,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    bufp->fullCData(oldp+223,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state),2);
    bufp->fullCData(oldp+224,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next),2);
    bufp->fullQData(oldp+225,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p2),64);
    bufp->fullBit(oldp+227,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack))))));
    bufp->fullBit(oldp+228,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID))));
    bufp->fullBit(oldp+229,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
    bufp->fullCData(oldp+230,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state),2);
    bufp->fullCData(oldp+231,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next),2);
    bufp->fullQData(oldp+232,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p1),64);
    bufp->fullBit(oldp+234,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
    bufp->fullBit(oldp+235,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack));
    bufp->fullQData(oldp+236,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data),64);
    bufp->fullIData(oldp+238,((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data)),32);
    bufp->fullIData(oldp+239,((IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len),32);
    bufp->fullCData(oldp+241,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awlen_tmp),8);
    bufp->fullIData(oldp+242,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt))
                                ? vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                   + (((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf)) 
                                      << 2U)))),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf),32);
    bufp->fullIData(oldp+245,((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len 
                               + vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr)),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf),32);
    bufp->fullIData(oldp+247,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)
                                ? vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
                                   << 0xcU))),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf),32);
    bufp->fullCData(oldp+249,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)
                                ? (3U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf)
                                : 3U)),2);
    bufp->fullCData(oldp+250,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf),2);
    bufp->fullCData(oldp+251,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop)
                                ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf)
                                : 3U)),2);
    bufp->fullSData(oldp+252,((0x3ffU & ((IData)(0x3ffU) 
                                         - (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                            >> 2U)))),10);
    bufp->fullSData(oldp+253,((0x3ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                          ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf)
                                          : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)) 
                                              & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect))
                                              ? ((IData)(0x3ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                                  >> 2U))
                                              : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                                  ? 
                                                 (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf 
                                                  >> 2U)
                                                  : 0x3ffU))))),10);
    bufp->fullSData(oldp+254,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf),10);
    bufp->fullSData(oldp+255,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf),10);
    bufp->fullCData(oldp+256,(((((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf)) 
                                << 1U) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2))),2);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt),20);
    bufp->fullBit(oldp+258,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event));
    bufp->fullBit(oldp+259,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg1));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf));
    bufp->fullBit(oldp+265,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_read));
    bufp->fullBit(oldp+266,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2)) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))));
    bufp->fullBit(oldp+267,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w));
    bufp->fullBit(oldp+268,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf));
    bufp->fullBit(oldp+269,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling))))));
    bufp->fullBit(oldp+270,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect));
    bufp->fullQData(oldp+275,((0xf00000000ULL | (QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_316)))),36);
    bufp->fullQData(oldp+277,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf),36);
    bufp->fullIData(oldp+279,((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf)),32);
    bufp->fullCData(oldp+280,((0xfU & (IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+281,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt),8);
    bufp->fullCData(oldp+282,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len),8);
    bufp->fullBit(oldp+283,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data));
    bufp->fullBit(oldp+284,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid));
    bufp->fullBit(oldp+285,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready));
    bufp->fullBit(oldp+286,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_burst));
    bufp->fullBit(oldp+287,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid));
    bufp->fullCData(oldp+288,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata),2);
    bufp->fullCData(oldp+289,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bresp_tmp),2);
    bufp->fullBit(oldp+290,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp));
    bufp->fullBit(oldp+291,((1U & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata) 
                                   >> 1U))));
    bufp->fullBit(oldp+292,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata))));
    bufp->fullBit(oldp+293,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready));
    bufp->fullBit(oldp+294,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp));
    bufp->fullBit(oldp+295,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_match));
    bufp->fullQData(oldp+296,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf),36);
    bufp->fullCData(oldp+298,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr),8);
    bufp->fullCData(oldp+299,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr),8);
    bufp->fullCData(oldp+300,((0xffU & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push)
                                         ? ((0xffU 
                                             == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr))
                                             ? 0U : 
                                            ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))
                                         : (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))),8);
    bufp->fullCData(oldp+301,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext),8);
    bufp->fullBit(oldp+302,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push));
    bufp->fullBit(oldp+303,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop));
    bufp->fullCData(oldp+304,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw),8);
    bufp->fullBit(oldp+305,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n));
    bufp->fullQData(oldp+306,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp),36);
    bufp->fullBit(oldp+308,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead));
    bufp->fullBit(oldp+309,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data));
    bufp->fullBit(oldp+310,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push));
    bufp->fullBit(oldp+311,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop));
    bufp->fullBit(oldp+312,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld))))));
    bufp->fullBit(oldp+313,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld));
    bufp->fullCData(oldp+314,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout),3);
    bufp->fullCData(oldp+315,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[0]),8);
    bufp->fullCData(oldp+316,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[1]),8);
    bufp->fullCData(oldp+317,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[2]),8);
    bufp->fullCData(oldp+318,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[3]),8);
    bufp->fullCData(oldp+319,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[4]),8);
    bufp->fullIData(oldp+320,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__i),32);
    bufp->fullCData(oldp+321,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt),6);
    bufp->fullBit(oldp+322,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling));
    bufp->fullBit(oldp+323,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop));
    bufp->fullBit(oldp+324,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy))) 
                             & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready)))));
    bufp->fullBit(oldp+325,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop));
    bufp->fullBit(oldp+327,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop)) 
                                & ((0xdU == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld))))));
    bufp->fullBit(oldp+328,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld));
    bufp->fullCData(oldp+329,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout),4);
    bufp->fullCData(oldp+330,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[0]),2);
    bufp->fullCData(oldp+331,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[1]),2);
    bufp->fullCData(oldp+332,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[2]),2);
    bufp->fullCData(oldp+333,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[3]),2);
    bufp->fullCData(oldp+334,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[4]),2);
    bufp->fullCData(oldp+335,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[5]),2);
    bufp->fullCData(oldp+336,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[6]),2);
    bufp->fullCData(oldp+337,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[7]),2);
    bufp->fullCData(oldp+338,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[8]),2);
    bufp->fullCData(oldp+339,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[9]),2);
    bufp->fullCData(oldp+340,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[10]),2);
    bufp->fullCData(oldp+341,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[11]),2);
    bufp->fullCData(oldp+342,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[12]),2);
    bufp->fullCData(oldp+343,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[13]),2);
    bufp->fullCData(oldp+344,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[14]),2);
    bufp->fullIData(oldp+345,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__i),32);
    bufp->fullBit(oldp+346,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push));
    bufp->fullBit(oldp+347,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop));
    bufp->fullBit(oldp+348,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld))))));
    bufp->fullBit(oldp+349,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld));
    bufp->fullCData(oldp+350,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout),3);
    bufp->fullCData(oldp+351,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[0]),2);
    bufp->fullCData(oldp+352,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[1]),2);
    bufp->fullCData(oldp+353,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[2]),2);
    bufp->fullCData(oldp+354,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[3]),2);
    bufp->fullCData(oldp+355,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[4]),2);
    bufp->fullIData(oldp+356,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__i),32);
    bufp->fullBit(oldp+357,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push));
    bufp->fullBit(oldp+358,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop));
    bufp->fullBit(oldp+359,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld))))));
    bufp->fullBit(oldp+360,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld));
    bufp->fullCData(oldp+361,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout),3);
    bufp->fullQData(oldp+362,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[0]),64);
    bufp->fullQData(oldp+364,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[1]),64);
    bufp->fullQData(oldp+366,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[2]),64);
    bufp->fullQData(oldp+368,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[3]),64);
    bufp->fullQData(oldp+370,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[4]),64);
    bufp->fullIData(oldp+372,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__i),32);
    bufp->fullQData(oldp+373,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p2),64);
    bufp->fullBit(oldp+375,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack))))));
    bufp->fullBit(oldp+376,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID))));
    bufp->fullBit(oldp+377,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
    bufp->fullCData(oldp+378,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state),2);
    bufp->fullCData(oldp+379,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next),2);
    bufp->fullBit(oldp+380,((0U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt))));
    bufp->fullBit(oldp+381,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_wready_reg))));
    bufp->fullCData(oldp+382,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt),8);
    bufp->fullBit(oldp+383,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_state_reg));
    bufp->fullBit(oldp+384,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_state_next));
    bufp->fullCData(oldp+385,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_state_reg),2);
    bufp->fullCData(oldp+386,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_state_next),2);
    bufp->fullBit(oldp+387,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__mem_wr_en));
    bufp->fullBit(oldp+388,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__mem_rd_en));
    bufp->fullCData(oldp+389,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_id_reg),8);
    bufp->fullCData(oldp+390,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_id_next),8);
    bufp->fullSData(oldp+391,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_addr_reg),16);
    bufp->fullSData(oldp+392,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_addr_next),16);
    bufp->fullCData(oldp+393,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_count_reg),8);
    bufp->fullCData(oldp+394,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_count_next),8);
    bufp->fullCData(oldp+395,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_size_reg),3);
    bufp->fullCData(oldp+396,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_size_next),3);
    bufp->fullCData(oldp+397,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_burst_reg),2);
    bufp->fullCData(oldp+398,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_burst_next),2);
    bufp->fullCData(oldp+399,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_id_reg),8);
    bufp->fullCData(oldp+400,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_id_next),8);
    bufp->fullSData(oldp+401,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_addr_reg),16);
    bufp->fullSData(oldp+402,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_addr_next),16);
    bufp->fullCData(oldp+403,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_count_reg),8);
    bufp->fullCData(oldp+404,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_count_next),8);
    bufp->fullCData(oldp+405,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_size_reg),3);
    bufp->fullCData(oldp+406,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_size_next),3);
    bufp->fullCData(oldp+407,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_burst_reg),2);
    bufp->fullCData(oldp+408,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_burst_next),2);
    bufp->fullBit(oldp+409,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_awready_next));
    bufp->fullBit(oldp+410,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_wready_next));
    bufp->fullCData(oldp+411,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bid_next),8);
    bufp->fullBit(oldp+412,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bvalid_next));
    bufp->fullBit(oldp+413,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_arready_next));
    bufp->fullCData(oldp+414,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rid_next),8);
    bufp->fullBit(oldp+415,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rlast_next));
    bufp->fullBit(oldp+416,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rvalid_next));
    bufp->fullCData(oldp+417,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg),8);
    bufp->fullIData(oldp+418,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg),32);
    bufp->fullBit(oldp+419,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg));
    bufp->fullBit(oldp+420,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg));
    bufp->fullSData(oldp+421,((0x3fffU & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                          >> 2U))),14);
    bufp->fullSData(oldp+422,((0x3fffU & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                          >> 2U))),14);
    bufp->fullSData(oldp+423,((0x3fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_addr_reg) 
                                          >> 2U))),14);
    bufp->fullSData(oldp+424,((0x3fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_addr_reg) 
                                          >> 2U))),14);
    bufp->fullIData(oldp+425,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__i),32);
    bufp->fullBit(oldp+426,(vlSelf->clk));
    bufp->fullBit(oldp+427,(vlSelf->reset));
    bufp->fullBit(oldp+428,(vlSymsp->TOP__tb_axi4_ram.correct_V));
    bufp->fullBit(oldp+429,(vlSymsp->TOP__tb_axi4_ram.correct_V_ap_vld));
    bufp->fullBit(oldp+430,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullIData(oldp+431,(0x20U),32);
    bufp->fullIData(oldp+432,(0x10U),32);
    bufp->fullIData(oldp+433,(4U),32);
    bufp->fullIData(oldp+434,(8U),32);
    bufp->fullIData(oldp+435,(0U),32);
    bufp->fullCData(oldp+436,(vlSymsp->TOP__tb_axi4_ram.__PVT__s_axi_awid),8);
    bufp->fullCData(oldp+437,(2U),3);
    bufp->fullCData(oldp+438,(1U),2);
    bufp->fullBit(oldp+439,(0U));
    bufp->fullCData(oldp+440,(3U),4);
    bufp->fullCData(oldp+441,(0U),3);
    bufp->fullCData(oldp+442,(0U),2);
    bufp->fullCData(oldp+443,(vlSymsp->TOP__tb_axi4_ram.__PVT__s_axi_arid),8);
    bufp->fullIData(oldp+444,(1U),24);
    bufp->fullIData(oldp+445,(2U),24);
    bufp->fullIData(oldp+446,(4U),24);
    bufp->fullIData(oldp+447,(8U),24);
    bufp->fullIData(oldp+448,(0x10U),24);
    bufp->fullIData(oldp+449,(0x20U),24);
    bufp->fullIData(oldp+450,(0x40U),24);
    bufp->fullIData(oldp+451,(0x80U),24);
    bufp->fullIData(oldp+452,(0x100U),24);
    bufp->fullIData(oldp+453,(0x200U),24);
    bufp->fullIData(oldp+454,(0x400U),24);
    bufp->fullIData(oldp+455,(0x800U),24);
    bufp->fullIData(oldp+456,(0x1000U),24);
    bufp->fullIData(oldp+457,(0x2000U),24);
    bufp->fullIData(oldp+458,(0x4000U),24);
    bufp->fullIData(oldp+459,(0x8000U),24);
    bufp->fullIData(oldp+460,(0x10000U),24);
    bufp->fullIData(oldp+461,(0x20000U),24);
    bufp->fullIData(oldp+462,(0x40000U),24);
    bufp->fullIData(oldp+463,(0x80000U),24);
    bufp->fullIData(oldp+464,(0x100000U),24);
    bufp->fullIData(oldp+465,(0x200000U),24);
    bufp->fullIData(oldp+466,(0x400000U),24);
    bufp->fullIData(oldp+467,(0x800000U),24);
    bufp->fullIData(oldp+468,(1U),32);
    bufp->fullIData(oldp+469,(3U),32);
    bufp->fullBit(oldp+470,(0U));
    bufp->fullCData(oldp+471,(0U),4);
    bufp->fullBit(oldp+472,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_RUSER));
    bufp->fullBit(oldp+473,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_BUSER));
    bufp->fullIData(oldp+474,(0xaU),32);
    bufp->fullIData(oldp+475,(0x400U),32);
    bufp->fullIData(oldp+476,(5U),32);
    bufp->fullBit(oldp+477,(1U));
    bufp->fullCData(oldp+478,(0xfU),4);
    bufp->fullIData(oldp+479,(2U),32);
    bufp->fullSData(oldp+480,(0x3ffU),10);
    bufp->fullIData(oldp+481,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__calc_data_width__Vstatic__y),32);
    bufp->fullIData(oldp+482,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+483,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__m),32);
    bufp->fullBit(oldp+484,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_resp_w));
    bufp->fullCData(oldp+485,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__len_cnt),8);
    bufp->fullBit(oldp+486,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__burst_valid));
    bufp->fullBit(oldp+487,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_burst));
    bufp->fullQData(oldp+488,(0x626c6f636bULL),40);
    bufp->fullIData(oldp+490,(0x23U),32);
    bufp->fullIData(oldp+491,(0x100U),32);
    bufp->fullIData(oldp+492,(0xfU),32);
    bufp->fullIData(oldp+493,(0x40U),32);
    bufp->fullIData(oldp+494,(0x22U),32);
    bufp->fullCData(oldp+495,(2U),2);
    bufp->fullCData(oldp+496,(3U),2);
    bufp->fullIData(oldp+497,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__calc_data_width__Vstatic__y),32);
    bufp->fullIData(oldp+498,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+499,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__m),32);
    bufp->fullBit(oldp+500,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_valid));
    bufp->fullIData(oldp+501,(0x24U),32);
    bufp->fullIData(oldp+502,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+503,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__m),32);
    bufp->fullIData(oldp+504,(0xeU),32);
    bufp->fullBit(oldp+505,(1U));
    bufp->fullIData(oldp+506,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rdata_next),32);
}
