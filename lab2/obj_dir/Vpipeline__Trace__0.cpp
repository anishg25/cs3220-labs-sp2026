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
    VlWide<3>/*95:0*/ __Vtemp_h9625a42e__0;
    VlWide<6>/*191:0*/ __Vtemp_he011c453__0;
    VlWide<6>/*191:0*/ __Vtemp_h42a8682a__0;
    VlWide<4>/*127:0*/ __Vtemp_h5ab8b633__0;
    VlWide<6>/*191:0*/ __Vtemp_h442974fe__0;
    VlWide<9>/*287:0*/ __Vtemp_hb2cf61cc__0;
    VlWide<6>/*191:0*/ __Vtemp_h93337350__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),170);
        bufp->chgWData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),282);
        bufp->chgWData(oldp+16,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),175);
        bufp->chgWData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgBit(oldp+28,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
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
        bufp->chgWData(oldp+29,(__Vtemp_h9625a42e__0),76);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_mispred_AGEX));
        bufp->chgQData(oldp+33,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
        __Vtemp_he011c453__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                     << 8U) | (0xffU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
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
                                        >> 0x18U) | 
                                       ((IData)(((0x3fffffffffULL 
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
                                        << 0x15U) | 
                                       (0x1fc000U & 
                                        (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         >> 0xbU))));
        __Vtemp_he011c453__0[5U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                >> 0xbU)) 
                                    | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  >> 0xbU)));
        bufp->chgWData(oldp+35,(__Vtemp_he011c453__0),175);
        bufp->chgBit(oldp+41,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     >> 0x19U))));
        bufp->chgIData(oldp+42,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                  << 7U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+43,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 7U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+44,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x13U))),32);
        bufp->chgIData(oldp+45,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 7U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x19U))),32);
        bufp->chgCData(oldp+46,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x13U))),6);
        bufp->chgBit(oldp+47,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
        bufp->chgBit(oldp+48,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+49,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+50,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+51,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+52,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0xeU))));
        bufp->chgCData(oldp+53,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 9U))),5);
        bufp->chgIData(oldp+54,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x13U))),32);
        bufp->chgIData(oldp+55,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x13U))),32);
        bufp->chgIData(oldp+56,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0x13U))),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_target_AGEX),32);
        bufp->chgCData(oldp+60,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 1U))),8);
        bufp->chgBit(oldp+61,((1U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])));
        bufp->chgIData(oldp+62,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
        bufp->chgBit(oldp+63,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                     >> 9U))));
        bufp->chgIData(oldp+64,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+65,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+66,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+67,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               >> 9U))),32);
        bufp->chgCData(oldp+68,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x15U))),3);
        bufp->chgCData(oldp+69,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          >> 2U))),7);
        bufp->chgCData(oldp+70,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 9U))),7);
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
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+75,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                          >> 1U))),8);
        bufp->chgBit(oldp+76,((1U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])));
        bufp->chgIData(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
        bufp->chgCData(oldp+78,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x18U))),5);
        bufp->chgCData(oldp+79,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                           << 3U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 0x1dU)))),5);
        bufp->chgCData(oldp+80,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x10U))),5);
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
                                   >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0x18U)))) 
                               | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x1fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x1dU))))))));
        bufp->chgIData(oldp+93,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE),32);
        bufp->chgIData(oldp+96,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
        bufp->chgQData(oldp+98,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0]),59);
        bufp->chgQData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[1]),59);
        bufp->chgQData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[2]),59);
        bufp->chgQData(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[3]),59);
        bufp->chgQData(oldp+106,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[4]),59);
        bufp->chgQData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[5]),59);
        bufp->chgQData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[6]),59);
        bufp->chgQData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[7]),59);
        bufp->chgQData(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[8]),59);
        bufp->chgQData(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[9]),59);
        bufp->chgQData(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[10]),59);
        bufp->chgQData(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[11]),59);
        bufp->chgQData(oldp+122,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[12]),59);
        bufp->chgQData(oldp+124,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[13]),59);
        bufp->chgQData(oldp+126,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[14]),59);
        bufp->chgQData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[15]),59);
        bufp->chgCData(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__hash_FE),8);
        bufp->chgBit(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__prediction_FE));
        bufp->chgIData(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__i),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__j),32);
        bufp->chgBit(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_hit));
        bufp->chgIData(oldp+135,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_hit) 
                                   & (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__prediction_FE))
                                   ? (IData)(vlSymsp->TOP__pipeline.my_FE_stage__DOT____VdfgTmp_hccac35d1__0)
                                   : ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))),32);
        bufp->chgBit(oldp+136,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
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
        bufp->chgWData(oldp+137,(__Vtemp_h42a8682a__0),173);
        bufp->chgCData(oldp+143,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                           >> 8U))),6);
        bufp->chgIData(oldp+144,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+145,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+146,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                >> 0xeU))),32);
        bufp->chgBit(oldp+147,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgIData(oldp+148,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+149,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+150,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+151,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              >> 0xaU))]),32);
        bufp->chgBit(oldp+153,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+154,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+155,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 6U))),6);
        bufp->chgIData(oldp+156,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+157,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+158,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+159,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+160,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+162,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+163,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
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
                                             : ((5U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
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
                                                 : 
                                                ((3U 
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
        __Vtemp_hb2cf61cc__0[5U] = ((0xfe000000U & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      << 0x10U)) | 
                                    (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
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
        __Vtemp_hb2cf61cc__0[6U] = (((0x1ff0000U & 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      >> 0x10U)) | 
                                    (0xfe000000U & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      << 0x10U)));
        __Vtemp_hb2cf61cc__0[7U] = (((0x1ff0000U & 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x10U)) | 
                                    (0xfe000000U & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      << 0x10U)));
        __Vtemp_hb2cf61cc__0[8U] = (((0x1ff0000U & 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 0x10U)) | 
                                    (0x2000000U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 0x10U)));
        bufp->chgWData(oldp+164,(__Vtemp_hb2cf61cc__0),282);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 0x18U))]),32);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 3U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x1dU)))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+208,(vlSelf->clk));
    bufp->chgBit(oldp+209,(vlSelf->reset));
    bufp->chgBit(oldp+210,(((~ ((IData)(vlSelf->reset) 
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
    bufp->chgWData(oldp+211,(__Vtemp_h93337350__0),170);
    bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+218,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+219,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+220,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+221,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+222,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+223,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+224,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+225,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+226,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+227,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+228,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+242,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+244,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+247,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+248,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+249,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+250,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+251,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+252,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+253,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+254,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+255,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+256,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
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
