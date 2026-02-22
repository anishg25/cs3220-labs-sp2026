// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline___024root__trace_chg_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipeline___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_0\n"); );
    // Body
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vpipeline___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipeline___024root__trace_chg_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_0_sub_0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_9;
    VlWide<6>/*191:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_20;
    VlWide<9>/*287:0*/ __Vtemp_21;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),170);
        bufp->chgWData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),282);
        bufp->chgWData(oldp+16,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),175);
        bufp->chgWData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgBit(oldp+28,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
        bufp->chgQData(oldp+29,((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)) 
                                  << 0x00000022U) | 
                                 (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)) 
                                   << 2U) | (QData)((IData)(
                                                            (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_cond_AGEX) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                   >> 0x00000012U)))))))),35);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+32,((((QData)((IData)((0x0000003fU 
                                                   & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U]))) 
                                  << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regval_WB)))),38);
        __Vtemp_6[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                          << 8U) | (0x000000ffU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 9U)));
        __Vtemp_6[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                          >> 0x00000018U) | ((IData)(
                                                     ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                      >> 0x00000020U)) 
                                             << 8U));
        __Vtemp_6[2U] = (((IData)((0x0000003fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                       << 0x0000000dU) 
                                      | ((QData)((IData)(
                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                         >> 0x00000013U)))) 
                          << 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                             >> 0x00000020U)) 
                                    >> 0x00000018U));
        __Vtemp_6[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                           << 0x00000015U) | (0x001fc000U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 >> 0x0000000bU))) 
                         | (((IData)((0x0000003fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                          << 0x0000000dU) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                            >> 0x00000013U)))) 
                             >> 0x00000018U) | ((IData)(
                                                        ((0x0000003fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                              << 0x0000000dU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                >> 0x00000013U))) 
                                                         >> 0x00000020U)) 
                                                << 8U)));
        __Vtemp_6[4U] = ((0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         >> 0x0000000bU)) 
                         | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                             << 0x00000015U) | (0x001fc000U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                   >> 0x0000000bU))));
        __Vtemp_6[5U] = ((0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                         >> 0x0000000bU)) 
                         | (0x00004000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                           >> 0x0000000bU)));
        bufp->chgWData(oldp+34,(__Vtemp_6),175);
        bufp->chgBit(oldp+40,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     >> 0x00000019U))));
        bufp->chgIData(oldp+41,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                  << 7U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0x00000019U))),32);
        bufp->chgIData(oldp+42,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 7U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0x00000019U))),32);
        bufp->chgIData(oldp+43,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 0x0000000dU) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  >> 0x00000013U))),32);
        bufp->chgIData(oldp+44,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 7U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x00000019U))),32);
        bufp->chgCData(oldp+45,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x00000013U))),6);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_cond_AGEX));
        bufp->chgBit(oldp+47,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x00000012U))));
        bufp->chgBit(oldp+48,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x00000011U))));
        bufp->chgBit(oldp+49,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x00000010U))));
        bufp->chgBit(oldp+50,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x0000000fU))));
        bufp->chgBit(oldp+51,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x0000000eU))));
        bufp->chgCData(oldp+52,((0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 9U))),5);
        bufp->chgIData(oldp+53,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 0x0000000dU) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0x00000013U))),32);
        bufp->chgIData(oldp+54,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0x0000000dU) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0x00000013U))),32);
        bufp->chgIData(oldp+55,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 0x0000000dU) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0x00000013U))),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
        bufp->chgCData(oldp+59,((0x000000ffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 1U))),8);
        bufp->chgBit(oldp+60,((1U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])));
        bufp->chgIData(oldp+61,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
        bufp->chgBit(oldp+62,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                     >> 9U))));
        bufp->chgIData(oldp+63,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  << 0x00000017U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  >> 9U))),32);
        bufp->chgIData(oldp+64,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x00000017U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  >> 9U))),32);
        bufp->chgIData(oldp+65,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x00000017U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  >> 9U))),32);
        bufp->chgIData(oldp+66,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x00000017U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  >> 9U))),32);
        bufp->chgCData(oldp+67,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x00000015U))),3);
        bufp->chgCData(oldp+68,((0x0000007fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                >> 2U))),7);
        bufp->chgCData(oldp+69,((0x0000007fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 9U))),7);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+73,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                  ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                  : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                      ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                      : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                             >> 8U)))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                    << 3U)) 
                                                | (0x0000001fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 0x00000010U))))
                                          : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                 >> 8U)))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000800U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 5U)) 
                                                    | ((0x000007e0U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                           << 3U)) 
                                                       | (0x0000001eU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x00000010U)))))
                                              : ((3U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (0xfffff000U 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      << 0x00000017U) 
                                                     | (0x007ff000U 
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
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x00000014U)) 
                                                        | (1U 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 0x0000001dU))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                             << 3U) 
                                                            | (6U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  >> 0x0000001dU))))))
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+74,((0x000000ffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                >> 1U))),8);
        bufp->chgBit(oldp+75,((1U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])));
        bufp->chgIData(oldp+76,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
        bufp->chgCData(oldp+77,((0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0x00000018U))),5);
        bufp->chgCData(oldp+78,((0x0000001fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                 << 3U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x0000001dU)))),5);
        bufp->chgCData(oldp+79,((0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0x00000010U))),5);
        bufp->chgBit(oldp+80,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+81,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+82,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+83,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+85,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 5U))));
        bufp->chgCData(oldp+86,((0x0000001fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regval_WB),32);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+91,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x0000001fU 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x00000018U)))) 
                               | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x0000001fU 
                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 3U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x0000001dU))))))));
        bufp->chgIData(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                [(0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                 >> 2U))]),32);
        bufp->chgIData(oldp+95,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        __Vtemp_9[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__hash_FE)) 
                                  << 0x00000021U) | 
                                 (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__prediction_FE)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                                                    [
                                                    (0x0000000fU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                        >> 2U))])))));
        __Vtemp_9[1U] = (((IData)((((QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE)))) 
                          << 9U) | (IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__hash_FE)) 
                                              << 0x00000021U) 
                                             | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__prediction_FE)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                                                                  [
                                                                  (0x0000000fU 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                      >> 2U))])))) 
                                            >> 0x00000020U)));
        __Vtemp_9[2U] = (((IData)((((QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE)))) 
                          >> 0x00000017U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(4U) 
                                                                         + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE))) 
                                                      >> 0x00000020U)) 
                                             << 9U));
        __Vtemp_9[3U] = (((IData)((((QData)((IData)(
                                                    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                    [
                                                    (0x00003fffU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                        >> 2U))])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                          << 9U) | ((IData)(((((QData)((IData)(
                                                               ((IData)(4U) 
                                                                + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE))) 
                                             >> 0x00000020U)) 
                                    >> 0x00000017U));
        __Vtemp_9[4U] = (((IData)((((QData)((IData)(
                                                    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                    [
                                                    (0x00003fffU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                        >> 2U))])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                          >> 0x00000017U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                        [
                                                                        (0x00003fffU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                            >> 2U))])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                      >> 0x00000020U)) 
                                             << 9U));
        __Vtemp_9[5U] = (((IData)(((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                     [
                                                     (0x00003fffU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                         >> 2U))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                   >> 0x00000020U)) 
                          >> 0x00000017U) | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__valid_FE) 
                                             << 9U));
        bufp->chgWData(oldp+96,(__Vtemp_9),170);
        bufp->chgCData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
        bufp->chgQData(oldp+103,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0]),59);
        bufp->chgQData(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[1]),59);
        bufp->chgQData(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[2]),59);
        bufp->chgQData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[3]),59);
        bufp->chgQData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[4]),59);
        bufp->chgQData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[5]),59);
        bufp->chgQData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[6]),59);
        bufp->chgQData(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[7]),59);
        bufp->chgQData(oldp+119,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[8]),59);
        bufp->chgQData(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[9]),59);
        bufp->chgQData(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[10]),59);
        bufp->chgQData(oldp+125,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[11]),59);
        bufp->chgQData(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[12]),59);
        bufp->chgQData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[13]),59);
        bufp->chgQData(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[14]),59);
        bufp->chgQData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[15]),59);
        bufp->chgCData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__hash_FE),8);
        bufp->chgBit(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__prediction_FE));
        bufp->chgIData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__i),32);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__j),32);
        bufp->chgBit(oldp+139,(((IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                                         [(0x0000000fU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                              >> 2U))] 
                                         >> 0x0000003aU)) 
                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                    >> 6U) == (0x03ffffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                                                          [
                                                          (0x0000000fU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                              >> 2U))] 
                                                          >> 0x00000020U)))))));
        bufp->chgIData(oldp+140,((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                                         [(0x0000000fU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                              >> 2U))])),32);
        bufp->chgBit(oldp+141,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                      >> 0x0000000eU))));
        __Vtemp_14[0U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                     [
                                                     (0x00003fffU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                         >> 0x0000000aU))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x00000018U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                           << 6U) | (0x0000003fU & 
                                     vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
        __Vtemp_14[1U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                     [
                                                     (0x00003fffU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                         >> 0x0000000aU))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x00000018U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                           >> 0x0000001aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x00003fffU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                             >> 0x0000000aU))])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                            << 0x00000018U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                              >> 8U))))) 
                                                       >> 0x00000020U)) 
                                              << 6U));
        __Vtemp_14[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                            << 0x0000001eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                  >> 2U))) 
                          | ((IData)(((((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                        [
                                                        (0x00003fffU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                            >> 0x0000000aU))])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                           << 0x00000018U) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                             >> 8U))))) 
                                      >> 0x00000020U)) 
                             >> 0x0000001aU));
        __Vtemp_14[3U] = ((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                          >> 2U)) | 
                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                            << 0x0000001eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 2U))));
        __Vtemp_14[4U] = ((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                          >> 2U)) | 
                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                            << 0x0000001eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                  >> 2U))));
        __Vtemp_14[5U] = ((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                          >> 2U)) | 
                          (0x00001fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                          >> 2U)));
        bufp->chgWData(oldp+142,(__Vtemp_14),173);
        bufp->chgCData(oldp+148,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                 >> 8U))),6);
        bufp->chgIData(oldp+149,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+150,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   << 0x00000012U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                     >> 0x0000000eU))),32);
        bufp->chgIData(oldp+151,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   << 0x00000012U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                     >> 0x0000000eU))),32);
        bufp->chgBit(oldp+152,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgIData(oldp+153,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                     >> 8U))),32);
        bufp->chgCData(oldp+154,((0x0000001fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+155,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+156,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  >> 0x0000000aU))]),32);
        bufp->chgBit(oldp+158,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+159,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0x0000000cU))));
        bufp->chgCData(oldp+160,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                 >> 6U))),6);
        bufp->chgIData(oldp+161,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x00000014U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                     >> 0x0000000cU))),32);
        bufp->chgIData(oldp+162,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x00000014U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                     >> 0x0000000cU))),32);
        bufp->chgIData(oldp+163,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                     >> 6U))),32);
        bufp->chgIData(oldp+164,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 6U))),32);
        bufp->chgIData(oldp+165,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                     >> 6U))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        __Vtemp_19[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                           ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                           : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                               : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? (((- (IData)((1U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      >> 8U)))) 
                                       << 0x0000000bU) 
                                      | ((0x000007e0U 
                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 3U)) 
                                         | (0x0000001fU 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x00000010U))))
                                   : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          >> 8U)))) 
                                           << 0x0000000cU) 
                                          | ((0x00000800U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 >> 5U)) 
                                             | ((0x000007e0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                    << 3U)) 
                                                | (0x0000001eU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 0x00000010U)))))
                                       : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (0xfffff000U 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                  << 0x00000017U) 
                                                 | (0x007ff000U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 9U))))
                                           : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                  >> 8U)))) 
                                                   << 0x00000014U) 
                                                  | ((((0x000001feU 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0x00000014U)) 
                                                       | (1U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x0000001dU))) 
                                                      << 0x0000000bU) 
                                                     | (0x000007feU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                            << 3U) 
                                                           | (6U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 0x0000001dU))))))
                                               : 0U))))));
        __Vtemp_20[0U] = (IData)((((QData)((IData)(
                                                   ((((0x1cU 
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
                                                                     == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                                     << 2U) 
                                                    | ((((0x19U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((0x1aU 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | (0x1bU 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                        << 1U) 
                                                       | (0x17U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                   << 0x00000030U) 
                                  | (((QData)((IData)(
                                                      (0x18U 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                      << 0x0000002fU) 
                                     | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                         << 0x0000002eU) 
                                        | (((QData)((IData)(
                                                            (0x0000001fU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 0x00000010U)))) 
                                            << 0x00000029U) 
                                           | (0x000001ffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))));
        __Vtemp_20[1U] = ((__Vtemp_19[0U] << 0x00000013U) 
                          | (IData)(((((QData)((IData)(
                                                       ((((0x1cU 
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
                                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                                         << 2U) 
                                                        | ((((0x19U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                            << 1U) 
                                                           | (0x17U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                       << 0x00000030U) 
                                      | (((QData)((IData)(
                                                          (0x18U 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                          << 0x0000002fU) 
                                         | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                             << 0x0000002eU) 
                                            | (((QData)((IData)(
                                                                (0x0000001fU 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    >> 0x00000010U)))) 
                                                << 0x00000029U) 
                                               | (0x000001ffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))) 
                                     >> 0x00000020U)));
        __Vtemp_21[0U] = __Vtemp_20[0U];
        __Vtemp_21[1U] = __Vtemp_20[1U];
        __Vtemp_21[2U] = ((__Vtemp_19[0U] >> 0x0000000dU) 
                          | ((IData)((((QData)((IData)(
                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                       [
                                                       (0x0000001fU 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0x00000018U))])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                        [
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                             << 3U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0x0000001dU)))])))) 
                             << 0x00000013U));
        __Vtemp_21[3U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                     [
                                                     (0x0000001fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0x00000018U))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                      [
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                           << 3U) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x0000001dU)))])))) 
                           >> 0x0000000dU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x0000001fU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0x00000018U))])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x0000001fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                               << 3U) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x0000001dU)))]))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000013U));
        __Vtemp_21[4U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                        << 0x00000017U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                          >> 9U)))))) 
                           << 0x00000013U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x0000001fU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0x00000018U))])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x0000001fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                               << 3U) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x0000001dU)))]))) 
                                                       >> 0x00000020U)) 
                                              >> 0x0000000dU));
        __Vtemp_21[5U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                        << 0x00000017U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                          >> 9U)))))) 
                           >> 0x0000000dU) | ((((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 << 0x0000001dU) 
                                                | (0x1fffffc0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                      >> 3U))) 
                                               | (IData)(
                                                         ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                               << 0x00000017U) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                >> 9U))))) 
                                                          >> 0x00000020U))) 
                                              << 0x00000013U));
        __Vtemp_21[6U] = (((((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                              << 0x0000001dU) | (0x1fffffc0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                    >> 3U))) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                            << 0x00000017U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                              >> 9U))))) 
                                       >> 0x00000020U))) 
                           >> 0x0000000dU) | (((0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 3U)) 
                                               | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0x0000001dU) 
                                                  | (0x1fffffc0U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 3U)))) 
                                              << 0x00000013U));
        __Vtemp_21[7U] = ((((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 3U)) 
                            | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 0x0000001dU) | (0x1fffffc0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 3U)))) 
                           >> 0x0000000dU) | (((0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 3U)) 
                                               | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 0x0000001dU) 
                                                  | (0x1fffffc0U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 3U)))) 
                                              << 0x00000013U));
        __Vtemp_21[8U] = ((((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 3U)) 
                            | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                << 0x0000001dU) | (0x1fffffc0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 3U)))) 
                           >> 0x0000000dU) | (((0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   >> 3U)) 
                                               | (0x00000040U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     >> 3U))) 
                                              << 0x00000013U));
        bufp->chgWData(oldp+166,(__Vtemp_21),282);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x00000018U))]),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x0000001fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x0000001dU)))]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+210,(vlSelfRef.clk));
    bufp->chgBit(oldp+211,(vlSelfRef.reset));
    bufp->chgIData(oldp+212,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+213,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+214,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+215,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+216,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+218,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+219,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+220,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+221,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+222,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000aU]),32);
    bufp->chgIData(oldp+223,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000bU]),32);
    bufp->chgIData(oldp+224,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000cU]),32);
    bufp->chgIData(oldp+225,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000dU]),32);
    bufp->chgIData(oldp+226,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000eU]),32);
    bufp->chgIData(oldp+227,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000fU]),32);
    bufp->chgIData(oldp+228,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000010U]),32);
    bufp->chgIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000011U]),32);
    bufp->chgIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000012U]),32);
    bufp->chgIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000013U]),32);
    bufp->chgIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000014U]),32);
    bufp->chgIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000015U]),32);
    bufp->chgIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000016U]),32);
    bufp->chgIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000017U]),32);
    bufp->chgIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000018U]),32);
    bufp->chgIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000019U]),32);
    bufp->chgIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001aU]),32);
    bufp->chgIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001bU]),32);
    bufp->chgIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001cU]),32);
    bufp->chgIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001dU]),32);
    bufp->chgIData(oldp+242,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001eU]),32);
    bufp->chgIData(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001fU]),32);
    bufp->chgIData(oldp+244,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+247,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+248,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+249,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+250,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+251,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
}

void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_cleanup\n"); );
    // Body
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
