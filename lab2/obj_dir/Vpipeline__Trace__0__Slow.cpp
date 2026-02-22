// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+209,"clk", false,-1);
    tracep->declBit(c+210,"reset", false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+209,"clk", false,-1);
    tracep->declBit(c+210,"reset", false,-1);
    tracep->declBus(c+1,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+2,"FE_latch_out", false,-1, 169,0);
    tracep->declArray(c+8,"DE_latch_out", false,-1, 281,0);
    tracep->declArray(c+17,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+29,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+30,"from_AGEX_to_FE", false,-1, 75,0);
    tracep->declBus(c+258,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+259,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+33,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+258,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+34,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+258,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+259,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+259,"from_WB_to_MEM", false,-1, 0,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+209,"clk", false,-1);
    tracep->declBit(c+210,"reset", false,-1);
    tracep->declBus(c+258,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+259,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+8,"from_DE_latch", false,-1, 281,0);
    tracep->declArray(c+17,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+30,"from_AGEX_to_FE", false,-1, 75,0);
    tracep->declBus(c+33,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+17,"AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+36,"AGEX_latch_contents", false,-1, 174,0);
    tracep->declBit(c+42,"valid_AGEX", false,-1);
    tracep->declBus(c+43,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+44,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+45,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+46,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+47,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+48,"br_cond_AGEX", false,-1);
    tracep->declBit(c+49,"is_br_AGEX", false,-1);
    tracep->declBit(c+50,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+51,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+52,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+53,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+54,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+55,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+56,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+57,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+58,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+59,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+60,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+33,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+61,"hash_AGEX", false,-1, 7,0);
    tracep->declBit(c+62,"prediction_AGEX", false,-1);
    tracep->declBus(c+63,"BTB_target_AGEX", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+209,"clk", false,-1);
    tracep->declBit(c+210,"reset", false,-1);
    tracep->declArray(c+2,"from_FE_latch", false,-1, 169,0);
    tracep->declBus(c+33,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+258,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+34,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+29,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+8,"DE_latch_out", false,-1, 281,0);
    tracep->declArray(c+8,"DE_latch", false,-1, 281,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+176+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+64,"valid_DE", false,-1);
    tracep->declBus(c+65,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+66,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+67,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+68,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+165,"DE_latch_contents", false,-1, 281,0);
    tracep->declBus(c+69,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+70,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+71,"op_DE", false,-1, 6,0);
    tracep->declBus(c+72,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+73,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+74,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+75,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBus(c+76,"hash_DE", false,-1, 7,0);
    tracep->declBit(c+77,"prediction_DE", false,-1);
    tracep->declBus(c+78,"BTB_target_DE", false,-1, 31,0);
    tracep->declBus(c+79,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+80,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+81,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+174,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+175,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+82,"is_br_DE", false,-1);
    tracep->declBit(c+83,"is_jmp_DE", false,-1);
    tracep->declBit(c+84,"rd_mem_DE", false,-1);
    tracep->declBit(c+85,"wr_mem_DE", false,-1);
    tracep->declBit(c+86,"wr_reg_DE", false,-1);
    tracep->declBit(c+87,"wr_reg_WB", false,-1);
    tracep->declBus(c+88,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+89,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+29,"pipeline_stall_DE", false,-1);
    tracep->declBit(c+90,"use_rs1_DE", false,-1);
    tracep->declBit(c+91,"use_rs2_DE", false,-1);
    tracep->declBus(c+92,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+93,"has_data_hazards", false,-1);
    tracep->declBit(c+33,"br_mispred_AGEX", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+209,"clk", false,-1);
    tracep->declBit(c+210,"reset", false,-1);
    tracep->declBus(c+29,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+30,"from_AGEX_to_FE", false,-1, 75,0);
    tracep->declBus(c+258,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+259,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+2,"FE_latch_out", false,-1, 169,0);
    tracep->declArray(c+2,"FE_latch", false,-1, 169,0);
    tracep->declBit(c+211,"valid_FE", false,-1);
    tracep->declBus(c+94,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+95,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+260,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+96,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+97,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+29,"stall_pipe_FE", false,-1);
    tracep->declArray(c+212,"FE_latch_contents", false,-1, 169,0);
    tracep->declBus(c+98,"BHR", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+99+i*2,"BTB", true,(i+0), 58,0);
    }
    tracep->declBus(c+131,"hash_FE", false,-1, 7,0);
    tracep->declBit(c+132,"prediction_FE", false,-1);
    tracep->declBit(c+33,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+60,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+48,"br_cond_AGEX", false,-1);
    tracep->declBit(c+49,"is_br_AGEX", false,-1);
    tracep->declBus(c+61,"hash_AGEX", false,-1, 7,0);
    tracep->declBus(c+44,"PC_AGEX", false,-1, 31,0);
    tracep->declBit(c+50,"is_jmp_AGEX", false,-1);
    tracep->declBus(c+133,"i", false,-1, 31,0);
    tracep->declBus(c+134,"j", false,-1, 31,0);
    tracep->declBit(c+135,"BTB_hit", false,-1);
    tracep->declBus(c+261,"predicted_target", false,-1, 31,0);
    tracep->declBus(c+136,"BTB_target_FE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+209,"clk", false,-1);
    tracep->declBit(c+210,"reset", false,-1);
    tracep->declBus(c+259,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+17,"from_AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+258,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+258,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+258,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+23,"MEM_latch", false,-1, 172,0);
    tracep->declBit(c+137,"valid_MEM", false,-1);
    tracep->declArray(c+138,"MEM_latch_contents", false,-1, 172,0);
    tracep->declBus(c+144,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+145,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+146,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+147,"PC_MEM", false,-1, 31,0);
    tracep->declBit(c+148,"rd_mem_MEM", false,-1);
    tracep->declBus(c+149,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+150,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+151,"wr_reg_MEM", false,-1);
    tracep->declBus(c+152,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+153,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+149,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+154,"wr_mem_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+209,"clk", false,-1);
    tracep->declBit(c+210,"reset", false,-1);
    tracep->declArray(c+23,"from_MEM_latch", false,-1, 172,0);
    tracep->declBus(c+258,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+34,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+258,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+258,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+155,"valid_WB", false,-1);
    tracep->declBus(c+156,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+157,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+158,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+159,"inst_count_WB", false,-1, 31,0);
    tracep->declBit(c+160,"wr_reg_WB", false,-1);
    tracep->declBus(c+161,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+162,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+163,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+164,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+218,"[0]", false,-1, 31,0);
    tracep->declBus(c+219,"[1]", false,-1, 31,0);
    tracep->declBus(c+220,"[2]", false,-1, 31,0);
    tracep->declBus(c+221,"[3]", false,-1, 31,0);
    tracep->declBus(c+222,"[4]", false,-1, 31,0);
    tracep->declBus(c+223,"[5]", false,-1, 31,0);
    tracep->declBus(c+224,"[6]", false,-1, 31,0);
    tracep->declBus(c+225,"[7]", false,-1, 31,0);
    tracep->declBus(c+226,"[8]", false,-1, 31,0);
    tracep->declBus(c+227,"[9]", false,-1, 31,0);
    tracep->declBus(c+228,"[10]", false,-1, 31,0);
    tracep->declBus(c+229,"[11]", false,-1, 31,0);
    tracep->declBus(c+230,"[12]", false,-1, 31,0);
    tracep->declBus(c+231,"[13]", false,-1, 31,0);
    tracep->declBus(c+232,"[14]", false,-1, 31,0);
    tracep->declBus(c+233,"[15]", false,-1, 31,0);
    tracep->declBus(c+234,"[16]", false,-1, 31,0);
    tracep->declBus(c+235,"[17]", false,-1, 31,0);
    tracep->declBus(c+236,"[18]", false,-1, 31,0);
    tracep->declBus(c+237,"[19]", false,-1, 31,0);
    tracep->declBus(c+238,"[20]", false,-1, 31,0);
    tracep->declBus(c+239,"[21]", false,-1, 31,0);
    tracep->declBus(c+240,"[22]", false,-1, 31,0);
    tracep->declBus(c+241,"[23]", false,-1, 31,0);
    tracep->declBus(c+242,"[24]", false,-1, 31,0);
    tracep->declBus(c+243,"[25]", false,-1, 31,0);
    tracep->declBus(c+244,"[26]", false,-1, 31,0);
    tracep->declBus(c+245,"[27]", false,-1, 31,0);
    tracep->declBus(c+246,"[28]", false,-1, 31,0);
    tracep->declBus(c+247,"[29]", false,-1, 31,0);
    tracep->declBus(c+248,"[30]", false,-1, 31,0);
    tracep->declBus(c+249,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+250,"[0]", false,-1, 31,0);
    tracep->declBus(c+251,"[1]", false,-1, 31,0);
    tracep->declBus(c+252,"[2]", false,-1, 31,0);
    tracep->declBus(c+253,"[3]", false,-1, 31,0);
    tracep->declBus(c+254,"[4]", false,-1, 31,0);
    tracep->declBus(c+255,"[5]", false,-1, 31,0);
    tracep->declBus(c+256,"[6]", false,-1, 31,0);
    tracep->declBus(c+257,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+208,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_top(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_top\n"); );
    // Body
    Vpipeline___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("pipeline ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__0(vlSelf, tracep);
    tracep->pushNamePrefix("my_WB_stage ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpipeline___024root__trace_register(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpipeline___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpipeline___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpipeline___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipeline___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h9625a42e__0;
    VlWide<6>/*191:0*/ __Vtemp_he011c453__0;
    VlWide<6>/*191:0*/ __Vtemp_h42a8682a__0;
    VlWide<4>/*127:0*/ __Vtemp_h5ab8b633__0;
    VlWide<6>/*191:0*/ __Vtemp_h442974fe__0;
    VlWide<9>/*287:0*/ __Vtemp_hb2cf61cc__0;
    VlWide<6>/*191:0*/ __Vtemp_h93337350__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
    bufp->fullWData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),170);
    bufp->fullWData(oldp+8,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),282);
    bufp->fullWData(oldp+17,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),175);
    bufp->fullWData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
    bufp->fullBit(oldp+29,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
    __Vtemp_h9625a42e__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                >> 0x12U)))) 
                                            << 0x29U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                   >> 1U)))) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                    << 7U) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                      >> 0x19U)))) 
                                                  << 1U) 
                                                 | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                       >> 0x11U)))))))));
    __Vtemp_h9625a42e__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                 << 0xbU) | (IData)(
                                                    ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                              >> 0x12U)))) 
                                                          << 0x29U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 1U)))) 
                                                             << 0x21U) 
                                                            | (((QData)((IData)(
                                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 7U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0x19U)))) 
                                                                << 1U) 
                                                               | (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 0x11U)))))))) 
                                                     >> 0x20U)));
    __Vtemp_h9625a42e__0[2U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_mispred_AGEX) 
                                 << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                             >> 0x15U));
    bufp->fullWData(oldp+30,(__Vtemp_h9625a42e__0),76);
    bufp->fullBit(oldp+33,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_mispred_AGEX));
    bufp->fullQData(oldp+34,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
    __Vtemp_he011c453__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 << 8U) | (0xffU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 9U)));
    __Vtemp_he011c453__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_he011c453__0[2U] = (((IData)((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                >> 0x13U)))) 
                                 << 8U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                    >> 0x20U)) 
                                           >> 0x18U));
    __Vtemp_he011c453__0[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0x15U) | (0x1fc000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0xbU))) 
                                | (((IData)((0x3fffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                   >> 0x13U)))) 
                                    >> 0x18U) | ((IData)(
                                                         ((0x3fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                               << 0xdU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                 >> 0x13U))) 
                                                          >> 0x20U)) 
                                                 << 8U)));
    __Vtemp_he011c453__0[4U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0xbU)) 
                                | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                    << 0x15U) | (0x1fc000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xbU))));
    __Vtemp_he011c453__0[5U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                            >> 0xbU)) 
                                | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                              >> 0xbU)));
    bufp->fullWData(oldp+36,(__Vtemp_he011c453__0),175);
    bufp->fullBit(oldp+42,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                  >> 0x19U))));
    bufp->fullIData(oldp+43,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                               << 7U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+44,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 7U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+45,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x13U))),32);
    bufp->fullIData(oldp+46,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 7U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x19U))),32);
    bufp->fullCData(oldp+47,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U))),6);
    bufp->fullBit(oldp+48,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
    bufp->fullBit(oldp+49,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0x12U))));
    bufp->fullBit(oldp+50,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+51,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+52,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0xfU))));
    bufp->fullBit(oldp+53,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0xeU))));
    bufp->fullCData(oldp+54,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 9U))),5);
    bufp->fullIData(oldp+55,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x13U))),32);
    bufp->fullIData(oldp+56,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x13U))),32);
    bufp->fullIData(oldp+57,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x13U))),32);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_target_AGEX),32);
    bufp->fullCData(oldp+61,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 1U))),8);
    bufp->fullBit(oldp+62,((1U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])));
    bufp->fullIData(oldp+63,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
    bufp->fullBit(oldp+64,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  >> 9U))));
    bufp->fullIData(oldp+65,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                               << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+66,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+67,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+68,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 9U))),32);
    bufp->fullCData(oldp+69,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    >> 0x15U))),3);
    bufp->fullCData(oldp+70,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                       >> 2U))),7);
    bufp->fullCData(oldp+71,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 9U))),7);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+73,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+74,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+75,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0
                               : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0
                                   : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          >> 8U)))) 
                                           << 0xbU) 
                                          | ((0x7e0U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                 << 3U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x10U))))
                                       : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                              >> 8U)))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 5U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                        << 3U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0x10U)))))
                                           : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? (0xfffff000U 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      << 0x17U) 
                                                     | (0x7ff000U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 9U))))
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                   >> 8U)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 9U)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x12U)) 
                                                         | (0x7feU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                << 3U) 
                                                               | (6U 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     >> 0x1dU)))))))
                                                   : 0U))))))),32);
    bufp->fullCData(oldp+76,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                       >> 1U))),8);
    bufp->fullBit(oldp+77,((1U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])));
    bufp->fullIData(oldp+78,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
    bufp->fullCData(oldp+79,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x18U))),5);
    bufp->fullCData(oldp+80,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                        << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x1dU)))),5);
    bufp->fullCData(oldp+81,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x10U))),5);
    bufp->fullBit(oldp+82,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | (0x21U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+83,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+84,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+85,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+87,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                          >> 0x25U)))));
    bufp->fullCData(oldp+88,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x20U)))),5);
    bufp->fullIData(oldp+89,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullBit(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullIData(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+93,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0x18U)))) 
                            | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                  >> (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                << 3U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x1dU))))))));
    bufp->fullIData(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE),32);
    bufp->fullIData(oldp+97,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
    bufp->fullQData(oldp+99,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0]),59);
    bufp->fullQData(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[1]),59);
    bufp->fullQData(oldp+103,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[2]),59);
    bufp->fullQData(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[3]),59);
    bufp->fullQData(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[4]),59);
    bufp->fullQData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[5]),59);
    bufp->fullQData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[6]),59);
    bufp->fullQData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[7]),59);
    bufp->fullQData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[8]),59);
    bufp->fullQData(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[9]),59);
    bufp->fullQData(oldp+119,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[10]),59);
    bufp->fullQData(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[11]),59);
    bufp->fullQData(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[12]),59);
    bufp->fullQData(oldp+125,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[13]),59);
    bufp->fullQData(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[14]),59);
    bufp->fullQData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[15]),59);
    bufp->fullCData(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__hash_FE),8);
    bufp->fullBit(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__prediction_FE));
    bufp->fullIData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__i),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__j),32);
    bufp->fullBit(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_hit));
    bufp->fullIData(oldp+136,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_hit) 
                                & (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__prediction_FE))
                                ? (IData)(vlSymsp->TOP__pipeline.my_FE_stage__DOT____VdfgTmp_hccac35d1__0)
                                : ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))),32);
    bufp->fullBit(oldp+137,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   >> 0xeU))));
    __Vtemp_h42a8682a__0[0U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 << 6U) | (0x3fU & 
                                           vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
    __Vtemp_h42a8682a__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x3fffU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                             >> 0xaU))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                            << 0x18U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                              >> 8U))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h42a8682a__0[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                  >> 2U))) 
                                | ((IData)(((((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                              [
                                                              (0x3fffU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                  >> 0xaU))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                   >> 8U))))) 
                                            >> 0x20U)) 
                                   >> 0x1aU));
    __Vtemp_h42a8682a__0[3U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 2U))));
    __Vtemp_h42a8682a__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                  >> 2U))));
    __Vtemp_h42a8682a__0[5U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                          >> 2U)) | 
                                (0x1fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                            >> 2U)));
    bufp->fullWData(oldp+138,(__Vtemp_h42a8682a__0),173);
    bufp->fullCData(oldp+144,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                        >> 8U))),6);
    bufp->fullIData(oldp+145,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+146,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+147,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xeU))),32);
    bufp->fullBit(oldp+148,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullIData(oldp+149,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+150,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+151,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 5U))));
    bufp->fullIData(oldp+152,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xaU))]),32);
    bufp->fullBit(oldp+154,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+155,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+156,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        >> 6U))),6);
    bufp->fullIData(oldp+157,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+158,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+159,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+160,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+161,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+163,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+164,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    __Vtemp_h5ab8b633__0[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0
                                 : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0
                                     : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                            >> 8U)))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 3U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x10U))))
                                         : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                >> 8U)))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 5U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          << 3U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x10U)))))
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     << 0x17U) 
                                                    | (0x7ff000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 9U))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                  >> 8U)))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 9U)) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x12U)) 
                                                        | (0x7feU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                               << 3U) 
                                                              | (6U 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    >> 0x1dU)))))))
                                                  : 0U))))));
    __Vtemp_h442974fe__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x1cU 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x1dU 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1eU 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x1fU 
                                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x20U 
                                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | (0x21U 
                                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            ((0x19U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               (0x17U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0x18U 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x2fU) 
                                                 | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                     << 0x2eU) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x10U)))) 
                                                        << 0x29U) 
                                                       | (0x1ffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))));
    __Vtemp_h442974fe__0[1U] = ((__Vtemp_h5ab8b633__0[0U] 
                                 << 0x13U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((0x1cU 
                                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                         | ((0x1dU 
                                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1eU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | ((0x1fU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x20U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x21U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(
                                                                           ((0x19U 
                                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1aU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | (0x1bU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                           << 0x31U) 
                                                          | (((QData)((IData)(
                                                                              (0x17U 
                                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                 << 0x2fU) 
                                                                | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                    << 0x2eU) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x10U)))) 
                                                                       << 0x29U) 
                                                                      | (0x1ffffffffffULL 
                                                                         & (((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))) 
                                                      >> 0x20U)));
    __Vtemp_hb2cf61cc__0[0U] = __Vtemp_h442974fe__0[0U];
    __Vtemp_hb2cf61cc__0[1U] = __Vtemp_h442974fe__0[1U];
    __Vtemp_hb2cf61cc__0[2U] = ((__Vtemp_h5ab8b633__0[0U] 
                                 >> 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                             [(0x1fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x1dU)))] 
                                             << 0x13U));
    __Vtemp_hb2cf61cc__0[3U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 3U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x1dU)))] 
                                 >> 0xdU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                         << 0x17U) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                           >> 9U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                        [
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x18U))])))) 
                                             << 0x13U));
    __Vtemp_hb2cf61cc__0[4U] = (((IData)((((QData)((IData)(
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                             << 0x17U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                               >> 9U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 0x18U))])))) 
                                 >> 0xdU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                          << 0x17U) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                            >> 9U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0x18U))]))) 
                                                      >> 0x20U)) 
                                             << 0x13U));
    __Vtemp_hb2cf61cc__0[5U] = ((0xfe000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                << 0x10U)) 
                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                    << 0x13U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                              << 0x17U) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                >> 9U)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x18U))]))) 
                                                          >> 0x20U)) 
                                                 >> 0xdU)));
    __Vtemp_hb2cf61cc__0[6U] = (((0x1ff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0x10U)) | (0xfe000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 0x10U)));
    __Vtemp_hb2cf61cc__0[7U] = (((0x1ff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0x10U)) | (0xfe000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x10U)));
    __Vtemp_hb2cf61cc__0[8U] = (((0x1ff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    >> 0x10U)) | (0x2000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     << 0x10U)));
    bufp->fullWData(oldp+165,(__Vtemp_hb2cf61cc__0),282);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         >> 0x18U))]),32);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          << 3U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x1dU)))]),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+209,(vlSelf->clk));
    bufp->fullBit(oldp+210,(vlSelf->reset));
    bufp->fullBit(oldp+211,(((~ ((IData)(vlSelf->reset) 
                                 | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_mispred_AGEX) 
                                    | (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE)))) 
                             & (0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE))));
    __Vtemp_h93337350__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__hash_FE)) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__prediction_FE)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_hit) 
                                                               & (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__prediction_FE))
                                                               ? (IData)(vlSymsp->TOP__pipeline.my_FE_stage__DOT____VdfgTmp_hccac35d1__0)
                                                               : 
                                                              ((IData)(4U) 
                                                               + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))))));
    __Vtemp_h93337350__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 << 9U) | (IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__hash_FE)) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__prediction_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_hit) 
                                                                           & (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__prediction_FE))
                                                                           ? (IData)(vlSymsp->TOP__pipeline.my_FE_stage__DOT____VdfgTmp_hccac35d1__0)
                                                                           : 
                                                                          ((IData)(4U) 
                                                                           + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))))) 
                                                   >> 0x20U)));
    __Vtemp_h93337350__0[2U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 >> 0x17U) | (((IData)(4U) 
                                               + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                              << 9U));
    __Vtemp_h93337350__0[3U] = ((((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0x17U) | ((IData)(
                                                      (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                              << 9U));
    __Vtemp_h93337350__0[4U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0x17U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_h93337350__0[5U] = ((((~ ((IData)(vlSelf->reset) 
                                      | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_mispred_AGEX) 
                                         | (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE)))) 
                                  & (0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                 << 9U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                    >> 0x20U)) 
                                           >> 0x17U));
    bufp->fullWData(oldp+212,(__Vtemp_h93337350__0),170);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->fullBit(oldp+258,(0U));
    bufp->fullBit(oldp+259,(0U));
    bufp->fullIData(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_target),32);
}
