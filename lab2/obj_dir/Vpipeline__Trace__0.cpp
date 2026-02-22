// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline___024root__trace_chg_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpipeline___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipeline___024root__trace_chg_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<6>/*191:0*/ __Vtemp_h0663615c__0;
    VlWide<6>/*191:0*/ __Vtemp_h42a8682a__0;
    VlWide<4>/*127:0*/ __Vtemp_hfb3acc92__0;
    VlWide<6>/*191:0*/ __Vtemp_h3c07697c__0;
    VlWide<9>/*287:0*/ __Vtemp_hff9c895e__0;
    VlWide<6>/*191:0*/ __Vtemp_h1297cfc4__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+1,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch),172);
        bufp->chgWData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),284);
        bufp->chgWData(oldp+16,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),175);
        bufp->chgWData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgBit(oldp+28,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
        bufp->chgWData(oldp+29,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE),78);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+33,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
        __Vtemp_h0663615c__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                     << 8U) | (0xffU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
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
                                        >> 0x18U) | 
                                       ((IData)(((0x3fffffffffULL 
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
                                        << 0x13U) | 
                                       (0x7c000U & 
                                        (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         >> 0xdU))));
        __Vtemp_h0663615c__0[5U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                >> 0xdU)) 
                                    | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  >> 0xdU)));
        bufp->chgWData(oldp+35,(__Vtemp_h0663615c__0),175);
        bufp->chgBit(oldp+41,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     >> 0x1bU))));
        bufp->chgIData(oldp+42,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                  << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0x1bU))),32);
        bufp->chgIData(oldp+43,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0x1bU))),32);
        bufp->chgIData(oldp+44,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x15U))),32);
        bufp->chgIData(oldp+45,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x1bU))),32);
        bufp->chgCData(oldp+46,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U))),6);
        bufp->chgBit(oldp+47,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
        bufp->chgBit(oldp+48,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x14U))));
        bufp->chgBit(oldp+49,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+50,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+51,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+52,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x10U))));
        bufp->chgCData(oldp+53,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0xbU))),5);
        bufp->chgIData(oldp+54,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x15U))),32);
        bufp->chgIData(oldp+55,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x15U))),32);
        bufp->chgIData(oldp+56,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0x15U))),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_target_AGEX),32);
        bufp->chgSData(oldp+60,((0x3ffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 1U))),10);
        bufp->chgBit(oldp+61,((1U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])));
        bufp->chgIData(oldp+62,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
        bufp->chgBit(oldp+63,((1U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                     >> 0xbU))));
        bufp->chgIData(oldp+64,(((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                  << 0x15U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+65,(((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                  << 0x15U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+66,(((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                  << 0x15U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+67,(((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                  << 0x15U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                               >> 0xbU))),32);
        bufp->chgCData(oldp+68,((7U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                       >> 0x17U))),3);
        bufp->chgCData(oldp+69,((0x7fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                          >> 4U))),7);
        bufp->chgCData(oldp+70,((0x7fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                          >> 0xbU))),7);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+73,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+74,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
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
                                                   : 0U))))))),32);
        bufp->chgSData(oldp+75,((0x3ffU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                           >> 1U))),10);
        bufp->chgBit(oldp+76,((1U & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U])));
        bufp->chgIData(oldp+77,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[0U]),32);
        bufp->chgCData(oldp+78,((0x1fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                          >> 0x1aU))),5);
        bufp->chgCData(oldp+79,((0x1fU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                           << 1U) | 
                                          (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                           >> 0x1fU)))),5);
        bufp->chgCData(oldp+80,((0x1fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                          >> 0x12U))),5);
        bufp->chgBit(oldp+81,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+82,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+83,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+84,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+86,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 0x25U)))));
        bufp->chgCData(oldp+87,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x20U)))),5);
        bufp->chgIData(oldp+88,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+92,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                >> 0x1aU)))) 
                               | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x1fU & ((
                                                   vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                   << 1U) 
                                                  | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                     >> 0x1fU))))))));
        bufp->chgBit(oldp+93,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
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
                                     << 6U) | (0x3fU 
                                               & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
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
                                              >> 2U)) 
                                    | ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                        << 0x1eU) | 
                                       (0x3fffffc0U 
                                        & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                           >> 2U))));
        __Vtemp_h42a8682a__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                              >> 2U)) 
                                    | ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                        << 0x1eU) | 
                                       (0x3fffffc0U 
                                        & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                           >> 2U))));
        __Vtemp_h42a8682a__0[5U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                              >> 2U)) 
                                    | (0x1fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                                  >> 2U)));
        bufp->chgWData(oldp+94,(__Vtemp_h42a8682a__0),173);
        bufp->chgCData(oldp+100,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                           >> 8U))),6);
        bufp->chgIData(oldp+101,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+102,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+103,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                >> 0xeU))),32);
        bufp->chgBit(oldp+104,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgIData(oldp+105,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+106,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+107,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+108,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              >> 0xaU))]),32);
        bufp->chgBit(oldp+110,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgIData(oldp+111,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_count_FE),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_FE),32);
        bufp->chgIData(oldp+114,(((IData)(4U) + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch)),32);
        bufp->chgSData(oldp+115,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BHR),10);
        bufp->chgSData(oldp+116,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__hash_FE),10);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__prediction_FE));
        bufp->chgBit(oldp+118,((1U & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+119,(((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                   << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                                >> 0xdU))),32);
        bufp->chgBit(oldp+120,((1U & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+121,((1U & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                      >> 0xbU))));
        bufp->chgSData(oldp+122,((0x3ffU & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                            >> 1U))),10);
        bufp->chgIData(oldp+123,(((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                   << 0x1fU) | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U] 
                                                >> 1U))),32);
        bufp->chgBit(oldp+124,((1U & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U])));
        bufp->chgIData(oldp+125,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__i),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__j),32);
        bufp->chgBit(oldp+127,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_hit));
        bufp->chgIData(oldp+128,((((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_hit) 
                                   & (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__prediction_FE))
                                   ? (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__VdfgTmp_hccac3553__0)
                                   : ((IData)(4U) + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch))),32);
        bufp->chgBit(oldp+129,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+130,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 6U))),6);
        bufp->chgIData(oldp+131,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+132,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+133,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+134,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+135,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+137,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+138,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
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
                                             : ((5U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
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
                                                 : 
                                                ((3U 
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
        __Vtemp_hff9c895e__0[5U] = ((0xf8000000U & 
                                     (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                      << 0x10U)) | 
                                    (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
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
        __Vtemp_hff9c895e__0[6U] = (((0x7ff0000U & 
                                      (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                      >> 0x10U)) | 
                                    (0xf8000000U & 
                                     (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                      << 0x10U)));
        __Vtemp_hff9c895e__0[7U] = (((0x7ff0000U & 
                                      (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                      >> 0x10U)) | 
                                    (0xf8000000U & 
                                     (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                      << 0x10U)));
        __Vtemp_hff9c895e__0[8U] = (((0x7ff0000U & 
                                      (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                      >> 0x10U)) | 
                                    (0x8000000U & (
                                                   vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                   << 0x10U)));
        bufp->chgWData(oldp+139,(__Vtemp_hff9c895e__0),284);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                            >> 0x1aU))]),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                             << 1U) 
                                            | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                               >> 0x1fU)))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+183,(vlSelf->clk));
    bufp->chgBit(oldp+184,(vlSelf->reset));
    bufp->chgBit(oldp+185,(((~ ((IData)(vlSelf->reset) 
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
    bufp->chgWData(oldp+186,(__Vtemp_h1297cfc4__0),172);
    bufp->chgIData(oldp+192,(vlSymsp->TOP__pipeline__my_FE_stage.correct_predictions),32);
    bufp->chgIData(oldp+193,(vlSymsp->TOP__pipeline__my_FE_stage.total_branches),32);
    bufp->chgIData(oldp+194,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+195,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+196,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+197,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+198,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+199,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+200,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+201,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+202,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+203,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+204,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+205,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+206,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+207,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+208,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+209,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+210,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+211,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+212,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+213,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+214,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+215,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+216,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+218,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+219,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+220,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+221,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+222,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+223,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+224,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+225,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+226,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+227,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+228,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
}

void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_cleanup\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
