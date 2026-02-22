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
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declBus(c+1,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+2,"FE_latch_out", false,-1, 171,0);
    tracep->declArray(c+8,"DE_latch_out", false,-1, 283,0);
    tracep->declArray(c+17,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+29,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+30,"from_AGEX_to_FE", false,-1, 77,0);
    tracep->declBus(c+235,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+236,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+33,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+235,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+34,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+235,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+236,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+236,"from_WB_to_MEM", false,-1, 0,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declBus(c+235,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+236,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+8,"from_DE_latch", false,-1, 283,0);
    tracep->declArray(c+17,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+30,"from_AGEX_to_FE", false,-1, 77,0);
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
    tracep->declBus(c+61,"hash_AGEX", false,-1, 9,0);
    tracep->declBit(c+62,"prediction_AGEX", false,-1);
    tracep->declBus(c+63,"BTB_target_AGEX", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declArray(c+2,"from_FE_latch", false,-1, 171,0);
    tracep->declBus(c+33,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+235,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+34,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+29,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+8,"DE_latch_out", false,-1, 283,0);
    tracep->declArray(c+8,"DE_latch", false,-1, 283,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+151+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+64,"valid_DE", false,-1);
    tracep->declBus(c+65,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+66,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+67,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+68,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+140,"DE_latch_contents", false,-1, 283,0);
    tracep->declBus(c+69,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+70,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+71,"op_DE", false,-1, 6,0);
    tracep->declBus(c+72,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+73,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+74,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+75,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBus(c+76,"hash_DE", false,-1, 9,0);
    tracep->declBit(c+77,"prediction_DE", false,-1);
    tracep->declBus(c+78,"BTB_target_DE", false,-1, 31,0);
    tracep->declBus(c+79,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+80,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+81,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+149,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+150,"rs2_val_DE", false,-1, 31,0);
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
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declBus(c+236,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+17,"from_AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+235,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+235,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+235,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+23,"MEM_latch", false,-1, 172,0);
    tracep->declBit(c+94,"valid_MEM", false,-1);
    tracep->declArray(c+95,"MEM_latch_contents", false,-1, 172,0);
    tracep->declBus(c+101,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+102,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+103,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+104,"PC_MEM", false,-1, 31,0);
    tracep->declBit(c+105,"rd_mem_MEM", false,-1);
    tracep->declBus(c+106,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+107,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+108,"wr_reg_MEM", false,-1);
    tracep->declBus(c+109,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+110,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+106,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+111,"wr_mem_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_FE_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_FE_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declBus(c+29,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+30,"from_AGEX_to_FE", false,-1, 77,0);
    tracep->declBus(c+235,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+236,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+2,"FE_latch_out", false,-1, 171,0);
    tracep->declArray(c+2,"FE_latch", false,-1, 171,0);
    tracep->declBit(c+186,"valid_FE", false,-1);
    tracep->declBus(c+112,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+113,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+237,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+114,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+115,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+29,"stall_pipe_FE", false,-1);
    tracep->declArray(c+187,"FE_latch_contents", false,-1, 171,0);
    tracep->declBus(c+116,"BHR", false,-1, 9,0);
    tracep->declBus(c+117,"hash_FE", false,-1, 9,0);
    tracep->declBit(c+118,"prediction_FE", false,-1);
    tracep->declBit(c+119,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+120,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+121,"br_cond_AGEX", false,-1);
    tracep->declBit(c+122,"is_br_AGEX", false,-1);
    tracep->declBus(c+123,"hash_AGEX", false,-1, 9,0);
    tracep->declBus(c+124,"PC_AGEX", false,-1, 31,0);
    tracep->declBit(c+125,"is_jmp_AGEX", false,-1);
    tracep->declBus(c+126,"i", false,-1, 31,0);
    tracep->declBus(c+127,"j", false,-1, 31,0);
    tracep->declBit(c+128,"BTB_hit", false,-1);
    tracep->declBus(c+238,"predicted_target", false,-1, 31,0);
    tracep->declBus(c+129,"BTB_target_FE", false,-1, 31,0);
    tracep->declBus(c+193,"correct_predictions", false,-1, 31,0);
    tracep->declBus(c+194,"total_branches", false,-1, 31,0);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declArray(c+23,"from_MEM_latch", false,-1, 172,0);
    tracep->declBus(c+235,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+34,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+235,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+235,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+130,"valid_WB", false,-1);
    tracep->declBus(c+131,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+132,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+133,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+134,"inst_count_WB", false,-1, 31,0);
    tracep->declBit(c+135,"wr_reg_WB", false,-1);
    tracep->declBus(c+136,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+137,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+138,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+139,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+195,"[0]", false,-1, 31,0);
    tracep->declBus(c+196,"[1]", false,-1, 31,0);
    tracep->declBus(c+197,"[2]", false,-1, 31,0);
    tracep->declBus(c+198,"[3]", false,-1, 31,0);
    tracep->declBus(c+199,"[4]", false,-1, 31,0);
    tracep->declBus(c+200,"[5]", false,-1, 31,0);
    tracep->declBus(c+201,"[6]", false,-1, 31,0);
    tracep->declBus(c+202,"[7]", false,-1, 31,0);
    tracep->declBus(c+203,"[8]", false,-1, 31,0);
    tracep->declBus(c+204,"[9]", false,-1, 31,0);
    tracep->declBus(c+205,"[10]", false,-1, 31,0);
    tracep->declBus(c+206,"[11]", false,-1, 31,0);
    tracep->declBus(c+207,"[12]", false,-1, 31,0);
    tracep->declBus(c+208,"[13]", false,-1, 31,0);
    tracep->declBus(c+209,"[14]", false,-1, 31,0);
    tracep->declBus(c+210,"[15]", false,-1, 31,0);
    tracep->declBus(c+211,"[16]", false,-1, 31,0);
    tracep->declBus(c+212,"[17]", false,-1, 31,0);
    tracep->declBus(c+213,"[18]", false,-1, 31,0);
    tracep->declBus(c+214,"[19]", false,-1, 31,0);
    tracep->declBus(c+215,"[20]", false,-1, 31,0);
    tracep->declBus(c+216,"[21]", false,-1, 31,0);
    tracep->declBus(c+217,"[22]", false,-1, 31,0);
    tracep->declBus(c+218,"[23]", false,-1, 31,0);
    tracep->declBus(c+219,"[24]", false,-1, 31,0);
    tracep->declBus(c+220,"[25]", false,-1, 31,0);
    tracep->declBus(c+221,"[26]", false,-1, 31,0);
    tracep->declBus(c+222,"[27]", false,-1, 31,0);
    tracep->declBus(c+223,"[28]", false,-1, 31,0);
    tracep->declBus(c+224,"[29]", false,-1, 31,0);
    tracep->declBus(c+225,"[30]", false,-1, 31,0);
    tracep->declBus(c+226,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+227,"[0]", false,-1, 31,0);
    tracep->declBus(c+228,"[1]", false,-1, 31,0);
    tracep->declBus(c+229,"[2]", false,-1, 31,0);
    tracep->declBus(c+230,"[3]", false,-1, 31,0);
    tracep->declBus(c+231,"[4]", false,-1, 31,0);
    tracep->declBus(c+232,"[5]", false,-1, 31,0);
    tracep->declBus(c+233,"[6]", false,-1, 31,0);
    tracep->declBus(c+234,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+183,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("my_FE_stage ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_FE_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
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
    VlWide<6>/*191:0*/ __Vtemp_h0663615c__0;
    VlWide<6>/*191:0*/ __Vtemp_h42a8682a__0;
    VlWide<4>/*127:0*/ __Vtemp_hfb3acc92__0;
    VlWide<6>/*191:0*/ __Vtemp_h3c07697c__0;
    VlWide<9>/*287:0*/ __Vtemp_hff9c895e__0;
    VlWide<6>/*191:0*/ __Vtemp_h1297cfc4__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
    bufp->fullWData(oldp+2,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch),172);
    bufp->fullWData(oldp+8,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),284);
    bufp->fullWData(oldp+17,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),175);
    bufp->fullWData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
    bufp->fullBit(oldp+29,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
    bufp->fullWData(oldp+30,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE),78);
    bufp->fullBit(oldp+33,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+34,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
    __Vtemp_h0663615c__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 << 8U) | (0xffU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0xbU)));
    __Vtemp_h0663615c__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h0663615c__0[2U] = (((IData)((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                              << 0xbU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                >> 0x15U)))) 
                                 << 8U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                    >> 0x20U)) 
                                           >> 0x18U));
    __Vtemp_h0663615c__0[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0x13U) | (0x7c000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0xdU))) 
                                | (((IData)((0x3fffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                 << 0xbU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                   >> 0x15U)))) 
                                    >> 0x18U) | ((IData)(
                                                         ((0x3fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                               << 0xbU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                 >> 0x15U))) 
                                                          >> 0x20U)) 
                                                 << 8U)));
    __Vtemp_h0663615c__0[4U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0xdU)) 
                                | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                    << 0x13U) | (0x7c000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xdU))));
    __Vtemp_h0663615c__0[5U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                            >> 0xdU)) 
                                | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                              >> 0xdU)));
    bufp->fullWData(oldp+36,(__Vtemp_h0663615c__0),175);
    bufp->fullBit(oldp+42,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                  >> 0x1bU))));
    bufp->fullIData(oldp+43,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                               << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         >> 0x1bU))),32);
    bufp->fullIData(oldp+44,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         >> 0x1bU))),32);
    bufp->fullIData(oldp+45,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x15U))),32);
    bufp->fullIData(oldp+46,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x1bU))),32);
    bufp->fullCData(oldp+47,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U))),6);
    bufp->fullBit(oldp+48,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
    bufp->fullBit(oldp+49,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0x14U))));
    bufp->fullBit(oldp+50,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0x13U))));
    bufp->fullBit(oldp+51,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0x12U))));
    bufp->fullBit(oldp+52,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+53,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0x10U))));
    bufp->fullCData(oldp+54,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0xbU))),5);
    bufp->fullIData(oldp+55,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x15U))),32);
    bufp->fullIData(oldp+56,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x15U))),32);
    bufp->fullIData(oldp+57,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x15U))),32);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_target_AGEX),32);
    bufp->fullSData(oldp+61,((0x3ffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 1U))),10);
    bufp->fullBit(oldp+62,((1U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])));
    bufp->fullIData(oldp+63,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
    bufp->fullBit(oldp+64,((1U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                  >> 0xbU))));
    bufp->fullIData(oldp+65,(((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                               << 0x15U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+66,(((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                               << 0x15U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+67,(((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                               << 0x15U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+68,(((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                               << 0x15U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                            >> 0xbU))),32);
    bufp->fullCData(oldp+69,((7U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                    >> 0x17U))),3);
    bufp->fullCData(oldp+70,((0x7fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                       >> 4U))),7);
    bufp->fullCData(oldp+71,((0x7fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                       >> 0xbU))),7);
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
                                                       & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                          >> 0xaU)))) 
                                           << 0xbU) 
                                          | ((0x7e0U 
                                              & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                 << 1U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                   >> 0x12U))))
                                       : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                              >> 0xaU)))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                     >> 7U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                        << 1U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                          >> 0x12U)))))
                                           : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? (0xfffff000U 
                                                  & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                      << 0x15U) 
                                                     | (0x1ff000U 
                                                        & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                           >> 0xbU))))
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                                   >> 0xaU)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                          >> 0xbU)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                             >> 0x14U)) 
                                                         | (0x7feU 
                                                            & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                               << 1U)))))
                                                   : 0U))))))),32);
    bufp->fullSData(oldp+76,((0x3ffU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                        >> 1U))),10);
    bufp->fullBit(oldp+77,((1U & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U])));
    bufp->fullIData(oldp+78,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[0U]),32);
    bufp->fullCData(oldp+79,((0x1fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                       >> 0x1aU))),5);
    bufp->fullCData(oldp+80,((0x1fU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                        << 1U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                  >> 0x1fU)))),5);
    bufp->fullCData(oldp+81,((0x1fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                       >> 0x12U))),5);
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
                                >> (0x1fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                             >> 0x1aU)))) 
                            | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                  >> (0x1fU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                << 1U) 
                                               | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                  >> 0x1fU))))))));
    bufp->fullBit(oldp+94,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
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
    bufp->fullWData(oldp+95,(__Vtemp_h42a8682a__0),173);
    bufp->fullCData(oldp+101,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                        >> 8U))),6);
    bufp->fullIData(oldp+102,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+103,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+104,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xeU))),32);
    bufp->fullBit(oldp+105,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullIData(oldp+106,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+107,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+108,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 5U))));
    bufp->fullIData(oldp+109,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xaU))]),32);
    bufp->fullBit(oldp+111,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 6U))));
    bufp->fullIData(oldp+112,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_count_FE),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_FE),32);
    bufp->fullIData(oldp+115,(((IData)(4U) + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch)),32);
    bufp->fullSData(oldp+116,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BHR),10);
    bufp->fullSData(oldp+117,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__hash_FE),10);
    bufp->fullBit(oldp+118,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__prediction_FE));
    bufp->fullBit(oldp+119,((1U & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                   >> 0xdU))));
    bufp->fullIData(oldp+120,(((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                             >> 0xdU))),32);
    bufp->fullBit(oldp+121,((1U & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+122,((1U & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                   >> 0xbU))));
    bufp->fullSData(oldp+123,((0x3ffU & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                         >> 1U))),10);
    bufp->fullIData(oldp+124,(((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                << 0x1fU) | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U] 
                                             >> 1U))),32);
    bufp->fullBit(oldp+125,((1U & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U])));
    bufp->fullIData(oldp+126,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__i),32);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__j),32);
    bufp->fullBit(oldp+128,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_hit));
    bufp->fullIData(oldp+129,((((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_hit) 
                                & (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__prediction_FE))
                                ? (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__VdfgTmp_hccac3553__0)
                                : ((IData)(4U) + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch))),32);
    bufp->fullBit(oldp+130,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+131,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        >> 6U))),6);
    bufp->fullIData(oldp+132,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+133,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+134,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+135,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+136,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+138,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+139,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    __Vtemp_hfb3acc92__0[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0
                                 : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0
                                     : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                            >> 0xaU)))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                   << 1U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                     >> 0x12U))))
                                         : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                                >> 0xaU)))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                       >> 7U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                          << 1U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                            >> 0x12U)))))
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                     << 0x15U) 
                                                    | (0x1ff000U 
                                                       & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                          >> 0xbU))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                                  >> 0xaU)))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                         >> 0xbU)) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                            >> 0x14U)) 
                                                        | (0x7feU 
                                                           & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                              << 1U)))))
                                                  : 0U))))));
    __Vtemp_h3c07697c__0[0U] = (IData)((((QData)((IData)(
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
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            ((0x19U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               (0x17U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (0x18U 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                            >> 0x12U)))) 
                                                        << 0x2bU) 
                                                       | (0x7ffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[0U])))))))))));
    __Vtemp_h3c07697c__0[1U] = ((__Vtemp_hfb3acc92__0[0U] 
                                 << 0x15U) | (IData)(
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
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           ((0x19U 
                                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1aU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | (0x1bU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              (0x17U 
                                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                                >> 0x12U)))) 
                                                                       << 0x2bU) 
                                                                      | (0x7ffffffffffULL 
                                                                         & (((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U])) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[0U])))))))))) 
                                                      >> 0x20U)));
    __Vtemp_hff9c895e__0[0U] = __Vtemp_h3c07697c__0[0U];
    __Vtemp_hff9c895e__0[1U] = __Vtemp_h3c07697c__0[1U];
    __Vtemp_hff9c895e__0[2U] = ((__Vtemp_hfb3acc92__0[0U] 
                                 >> 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                             [(0x1fU 
                                               & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                   << 1U) 
                                                  | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                     >> 0x1fU)))] 
                                             << 0x15U));
    __Vtemp_hff9c895e__0[3U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                             << 1U) 
                                            | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                               >> 0x1fU)))] 
                                 >> 0xbU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                                                         << 0x15U) 
                                                                        | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                                                           >> 0xbU)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                        [
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                            >> 0x1aU))])))) 
                                             << 0x15U));
    __Vtemp_hff9c895e__0[4U] = (((IData)((((QData)((IData)(
                                                           ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                                             << 0x15U) 
                                                            | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                                               >> 0xbU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                >> 0x1aU))])))) 
                                 >> 0xbU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                                                          << 0x15U) 
                                                                         | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                                                            >> 0xbU)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                             >> 0x1aU))]))) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_hff9c895e__0[5U] = ((0xf8000000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                                << 0x10U)) 
                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                    << 0x15U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                                                              << 0x15U) 
                                                                             | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                                                                >> 0xbU)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                                >> 0x1aU))]))) 
                                                          >> 0x20U)) 
                                                 >> 0xbU)));
    __Vtemp_hff9c895e__0[6U] = (((0x7ff0000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                    >> 0x10U)) | (0xf8000000U 
                                                  & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                                     << 0x10U)));
    __Vtemp_hff9c895e__0[7U] = (((0x7ff0000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                    >> 0x10U)) | (0xf8000000U 
                                                  & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                     << 0x10U)));
    __Vtemp_hff9c895e__0[8U] = (((0x7ff0000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                    >> 0x10U)) | (0x8000000U 
                                                  & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                     << 0x10U)));
    bufp->fullWData(oldp+140,(__Vtemp_hff9c895e__0),284);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                         >> 0x1aU))]),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                          << 1U) | 
                                         (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                          >> 0x1fU)))]),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+184,(vlSelf->clk));
    bufp->fullBit(oldp+185,(vlSelf->reset));
    bufp->fullBit(oldp+186,(((~ ((IData)(vlSelf->reset) 
                                 | ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                     >> 0xdU) | (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE)))) 
                             & (0U != vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_FE))));
    __Vtemp_h1297cfc4__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__hash_FE)) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__prediction_FE)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_hit) 
                                                               & (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__prediction_FE))
                                                               ? (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__VdfgTmp_hccac3553__0)
                                                               : 
                                                              ((IData)(4U) 
                                                               + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch)))))));
    __Vtemp_h1297cfc4__0[1U] = ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_count_FE 
                                 << 0xbU) | (IData)(
                                                    ((((QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__hash_FE)) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__prediction_FE)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_hit) 
                                                                             & (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__prediction_FE))
                                                                             ? (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__VdfgTmp_hccac3553__0)
                                                                             : 
                                                                            ((IData)(4U) 
                                                                             + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch)))))) 
                                                     >> 0x20U)));
    __Vtemp_h1297cfc4__0[2U] = ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_count_FE 
                                 >> 0x15U) | (((IData)(4U) 
                                               + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch) 
                                              << 0xbU));
    __Vtemp_h1297cfc4__0[3U] = ((((IData)(4U) + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch) 
                                 >> 0x15U) | ((IData)(
                                                      (((QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch)))) 
                                              << 0xbU));
    __Vtemp_h1297cfc4__0[4U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_FE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch)))) 
                                 >> 0x15U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_FE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              << 0xbU));
    __Vtemp_h1297cfc4__0[5U] = ((((~ ((IData)(vlSelf->reset) 
                                      | ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                          >> 0xdU) 
                                         | (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE)))) 
                                  & (0U != vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_FE)) 
                                 << 0xbU) | ((IData)(
                                                     ((((QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch))) 
                                                      >> 0x20U)) 
                                             >> 0x15U));
    bufp->fullWData(oldp+187,(__Vtemp_h1297cfc4__0),172);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__pipeline__my_FE_stage.correct_predictions),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__pipeline__my_FE_stage.total_branches),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->fullBit(oldp+235,(0U));
    bufp->fullBit(oldp+236,(0U));
    bufp->fullIData(oldp+237,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_count_AGEX),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__predicted_target),32);
}
