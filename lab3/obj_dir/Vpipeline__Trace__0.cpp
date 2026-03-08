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
    VlWide<3>/*95:0*/ __Vtemp_h21efc1b1__0;
    VlWide<5>/*159:0*/ __Vtemp_h4c92d0f7__0;
    VlWide<9>/*287:0*/ __Vtemp_h33ecc51f__0;
    VlWide<3>/*95:0*/ __Vtemp_h0b91824f__0;
    VlWide<3>/*95:0*/ __Vtemp_h4b98151e__0;
    VlWide<3>/*95:0*/ __Vtemp_ha09738ae__0;
    VlWide<6>/*191:0*/ __Vtemp_hf4c3144e__0;
    VlWide<5>/*159:0*/ __Vtemp_h28d0e6a7__0;
    VlWide<5>/*159:0*/ __Vtemp_hff7a503d__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[31]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        __Vtemp_h21efc1b1__0[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 7U)))) 
                                         << 0xbU) | 
                                        (0x7ffU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x1cU))))
                                     : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 7U)))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 4U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0xfU))))
                                         : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 7U)))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          << 4U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0xfU)))))
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x18U) 
                                                    | (0xfff000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 8U))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  >> 7U)))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 8U)) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x11U)) 
                                                        | (0x7feU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 4U) 
                                                              | (0xeU 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x1cU)))))))
                                                  : 0U)))));
        __Vtemp_h4c92d0f7__0[0U] = (IData)((((QData)((IData)(
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
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                ((0x19U 
                                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                 | ((0x1aU 
                                                                     == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                    | (0x1bU 
                                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                << 0x35U) 
                                               | (((QData)((IData)(
                                                                   (0x17U 
                                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      (0x18U 
                                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0xfU)))) 
                                                            << 0x2dU) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))) 
                                                               << 0x25U) 
                                                              | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_aluop_DE)) 
                                                                  << 0x24U) 
                                                                 | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op1_DE)) 
                                                                     << 0x23U) 
                                                                    | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op2_DE)) 
                                                                        << 0x22U) 
                                                                       | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_DE)) 
                                                                           << 0x21U) 
                                                                          | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_alu_out_DE)) 
                                                                              << 0x20U) 
                                                                             | (QData)((IData)(
                                                                                ((1U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                                                 ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                                                                 : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z))))))))))))))));
        __Vtemp_h4c92d0f7__0[1U] = ((__Vtemp_h21efc1b1__0[0U] 
                                     << 0x17U) | (IData)(
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
                                                            << 0x36U) 
                                                           | (((QData)((IData)(
                                                                               ((0x19U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x1aU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                               << 0x35U) 
                                                              | (((QData)((IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                  << 0x34U) 
                                                                 | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                     << 0x33U) 
                                                                    | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                        << 0x32U) 
                                                                       | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0xfU)))) 
                                                                           << 0x2dU) 
                                                                          | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))) 
                                                                              << 0x25U) 
                                                                             | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_aluop_DE)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op1_DE)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op2_DE)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_DE)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_alu_out_DE)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((1U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                                                 ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                                                                 : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z))))))))))))))) 
                                                          >> 0x20U)));
        __Vtemp_h33ecc51f__0[0U] = __Vtemp_h4c92d0f7__0[0U];
        __Vtemp_h33ecc51f__0[1U] = __Vtemp_h4c92d0f7__0[1U];
        __Vtemp_h33ecc51f__0[2U] = ((__Vtemp_h21efc1b1__0[0U] 
                                     >> 9U) | ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                         [
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x17U))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                          [
                                                                          (0x1fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 4U) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))])))) 
                                               << 0x17U));
        __Vtemp_h33ecc51f__0[3U] = (((IData)((((QData)((IData)(
                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                               [
                                                               (0x1fU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x17U))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                [
                                                                (0x1fU 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 4U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x1cU)))])))) 
                                     >> 9U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                          [
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x17U))])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                           [
                                                                           (0x1fU 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))]))) 
                                                        >> 0x20U)) 
                                               << 0x17U));
        __Vtemp_h33ecc51f__0[4U] = ((0xe0000000U & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                      << 0x15U)) | 
                                    (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                      << 0x17U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                              [
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x17U))])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                               [
                                                                               (0x1fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))]))) 
                                                            >> 0x20U)) 
                                                   >> 9U)));
        __Vtemp_h33ecc51f__0[5U] = (((0x1fe00000U & 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                       << 0x15U)) | 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                      >> 0xbU)) | (0xe0000000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                      << 0x15U)));
        __Vtemp_h33ecc51f__0[6U] = (((0x1fe00000U & 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                       << 0x15U)) | 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                      >> 0xbU)) | (0xe0000000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                      << 0x15U)));
        __Vtemp_h33ecc51f__0[7U] = (((0x1fe00000U & 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       << 0x15U)) | 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      >> 0xbU)) | (0xe0000000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      << 0x15U)));
        __Vtemp_h33ecc51f__0[8U] = (((0x1fe00000U & 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x15U)) | 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0xbU)) | (0x20000000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 0x15U)));
        bufp->chgWData(oldp+35,(__Vtemp_h33ecc51f__0),286);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x17U))]),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x1cU)))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+46,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+47,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),137);
        bufp->chgWData(oldp+52,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),286);
        bufp->chgWData(oldp+61,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),180);
        bufp->chgWData(oldp+67,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),141);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
        __Vtemp_h0b91824f__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                             << 0x29U) 
                                            | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                       >> 5U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                      << 3U) 
                                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                        >> 0x1dU))))))));
        __Vtemp_h0b91824f__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                     << 0xaU) | (IData)(
                                                        ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                                           << 0x29U) 
                                                          | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 5U)))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 3U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0x1dU))))))) 
                                                         >> 0x20U)));
        __Vtemp_h0b91824f__0[2U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                     << 0xaU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                                 >> 0x16U));
        bufp->chgWData(oldp+73,(__Vtemp_h0b91824f__0),75);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        __Vtemp_h4b98151e__0[0U] = vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE;
        __Vtemp_h4b98151e__0[1U] = (IData)((((QData)((IData)(
                                                             ((0x10U 
                                                               & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])
                                                               ? vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE))));
        __Vtemp_h4b98151e__0[2U] = (IData)(((((QData)((IData)(
                                                              ((0x10U 
                                                                & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])
                                                                ? vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+77,(__Vtemp_h4b98151e__0),96);
        bufp->chgQData(oldp+80,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
        __Vtemp_ha09738ae__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE)))) 
                                     << 3U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE));
        __Vtemp_ha09738ae__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE)))) 
                                     >> 0x1dU) | ((IData)(
                                                          ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE))) 
                                                           >> 0x20U)) 
                                                  << 3U));
        __Vtemp_ha09738ae__0[2U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU) 
                                     << 3U) | ((IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE))) 
                                                        >> 0x20U)) 
                                               >> 0x1dU));
        bufp->chgWData(oldp+82,(__Vtemp_ha09738ae__0),71);
        bufp->chgQData(oldp+85,((((QData)((IData)((
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                    ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                                    : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z))) 
                                  << 3U) | (QData)((IData)(
                                                           ((((1U 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                               ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb)
                                                               : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb)) 
                                                             << 2U) 
                                                            | ((((1U 
                                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                                  ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack)
                                                                  : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack)) 
                                                                << 1U) 
                                                               | ((1U 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                                   ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack)
                                                                   : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack)))))))),35);
        __Vtemp_hf4c3144e__0[0U] = (IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                 >> 0xdU)))) 
                                             << 0x25U) 
                                            | (0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))))));
        __Vtemp_hf4c3144e__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                     << 0xdU) | (IData)(
                                                        ((((QData)((IData)(
                                                                           (0xffU 
                                                                            & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                               >> 0xdU)))) 
                                                           << 0x25U) 
                                                          | (0x1fffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))))) 
                                                         >> 0x20U)));
        __Vtemp_hf4c3144e__0[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                     >> 0x13U) | ((IData)(
                                                          ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                           >> 0x20U)) 
                                                  << 0xdU));
        __Vtemp_hf4c3144e__0[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                      << 0x16U) | (0x380000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                      >> 0xaU))) 
                                    | ((0x7e000U & 
                                        (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0xaU)) 
                                       | ((IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                   >> 0x20U)) 
                                          >> 0x13U)));
        __Vtemp_hf4c3144e__0[4U] = ((0x7ffffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                 >> 0xaU)) 
                                    | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                        << 0x16U) | 
                                       (0x380000U & 
                                        (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         >> 0xaU))));
        __Vtemp_hf4c3144e__0[5U] = ((0x7ffffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                 >> 0xaU)) 
                                    | (0x80000U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                   >> 0xaU)));
        bufp->chgWData(oldp+87,(__Vtemp_hf4c3144e__0),180);
        bufp->chgBit(oldp+93,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     >> 0x1dU))));
        bufp->chgIData(oldp+94,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                  << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0x1dU))),32);
        bufp->chgIData(oldp+95,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0x1dU))),32);
        bufp->chgIData(oldp+96,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x1dU))),32);
        bufp->chgIData(oldp+97,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1dU))),32);
        bufp->chgCData(oldp+98,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x17U))),6);
        bufp->chgBit(oldp+99,(((0x1cU == (0x3fU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x17U)))
                                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 9U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x17U)) 
                                   == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 9U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x17U)))
                                : ((0x1dU == (0x3fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x17U)))
                                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         << 9U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x17U)) 
                                       != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 9U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x17U)))
                                    : ((0x1eU == (0x3fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x17U)))
                                        ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x17U)))
                                            ? VL_GTES_III(32, 
                                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                            << 9U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                              >> 0x17U)), 
                                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            << 9U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              >> 0x17U)))
                                            : ((0x20U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x17U)))
                                                ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0)
                                                : (IData)(
                                                          ((0x10800000U 
                                                            == 
                                                            (0x1f800000U 
                                                             & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                           & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                << 9U) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                  >> 0x17U)) 
                                                              >= 
                                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                << 9U) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                  >> 0x17U))))))))))));
        bufp->chgBit(oldp+100,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+101,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+102,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+103,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+104,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x12U))));
        bufp->chgCData(oldp+105,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0xdU))),5);
        bufp->chgIData(oldp+106,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   << 9U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x17U))),32);
        bufp->chgIData(oldp+107,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 9U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 0x17U))),32);
        bufp->chgIData(oldp+108,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 9U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x17U))),32);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
        bufp->chgBit(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
        bufp->chgCData(oldp+114,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 5U))),8);
        bufp->chgBit(oldp+115,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+116,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+117,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+118,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+119,((1U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])));
        bufp->chgIData(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
        bufp->chgIData(oldp+121,(((0x10U & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])
                                   ? vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM
                                   : 0U)),32);
        bufp->chgIData(oldp+122,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE),32);
        bufp->chgIData(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE),32);
        bufp->chgIData(oldp+124,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                   ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                   : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z)),32);
        bufp->chgBit(oldp+125,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 8U))));
        bufp->chgIData(oldp+126,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+127,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+128,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+129,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+130,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),8);
        bufp->chgCData(oldp+131,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x14U))),3);
        bufp->chgCData(oldp+132,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 1U))),7);
        bufp->chgCData(oldp+133,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+137,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? (((- (IData)((1U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 7U)))) 
                                       << 0xbU) | (0x7ffU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x1cU))))
                                   : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 7U)))) 
                                           << 0xbU) 
                                          | ((0x7e0U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 4U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0xfU))))
                                       : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 7U)))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 4U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0xfU)))))
                                           : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? (0xfffff000U 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 0x18U) 
                                                     | (0xfff000U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 8U))))
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   >> 7U)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 8U)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x11U)) 
                                                         | (0x7feU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 4U) 
                                                               | (0xeU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x1cU)))))))
                                                   : 0U)))))),32);
        bufp->chgBit(oldp+138,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 0x25U)))));
        bufp->chgCData(oldp+139,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                   >> 0x20U)))),5);
        bufp->chgIData(oldp+140,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
        bufp->chgCData(oldp+141,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x17U))),5);
        bufp->chgCData(oldp+142,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x1cU)))),5);
        bufp->chgCData(oldp+143,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0xfU))),5);
        bufp->chgBit(oldp+144,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                   | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                      | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                         | ((0x20U 
                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                            | (0x21U 
                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+145,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                   | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+146,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+147,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+152,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                    >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x17U)))) 
                                | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                      >> (0x1fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x1cU))))))));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op1_DE));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op2_DE));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_DE));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_aluop_DE));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_alu_out_DE));
        bufp->chgCData(oldp+158,(((((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                     ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb)
                                     : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb)) 
                                   << 2U) | ((((1U 
                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack)
                                                : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack)) 
                                              << 1U) 
                                             | ((1U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                 ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack)
                                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack))))),3);
        bufp->chgBit(oldp+159,((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)));
        bufp->chgIData(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE),32);
        bufp->chgIData(oldp+162,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE),32);
        __Vtemp_h28d0e6a7__0[0U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE 
                                     << 8U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE));
        __Vtemp_h28d0e6a7__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE 
                                     >> 0x18U) | (((IData)(4U) 
                                                   + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                                  << 8U));
        __Vtemp_h28d0e6a7__0[2U] = ((((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                     >> 0x18U) | ((IData)(
                                                          (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                                  << 8U));
        __Vtemp_h28d0e6a7__0[3U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                     >> 0x18U) | ((IData)(
                                                          ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_h28d0e6a7__0[4U] = (((IData)((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                     << 8U) | ((IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                        >> 0x20U)) 
                                               >> 0x18U));
        bufp->chgWData(oldp+164,(__Vtemp_h28d0e6a7__0),137);
        bufp->chgCData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[0]),26);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[1]),26);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[2]),26);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[3]),26);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[4]),26);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[5]),26);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[6]),26);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[7]),26);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[8]),26);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[9]),26);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[10]),26);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[11]),26);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[12]),26);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[13]),26);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[14]),26);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[15]),26);
        bufp->chgBit(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[0]));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[1]));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[2]));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[3]));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[4]));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[5]));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[6]));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[7]));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[8]));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[9]));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[10]));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[11]));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[12]));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[13]));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[14]));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[15]));
        bufp->chgIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[0]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[1]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[2]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[3]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[4]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[5]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[6]),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[7]),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[8]),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[9]),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[10]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[11]),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[12]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[13]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[14]),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[15]),32);
        bufp->chgCData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE),8);
        bufp->chgBit(oldp+219,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                                [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE])));
        bufp->chgIData(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG
                                 [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))]),26);
        bufp->chgBit(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID
                               [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                         >> 2U))]));
        bufp->chgIData(oldp+222,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET
                                 [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))]),32);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp),32);
        bufp->chgIData(oldp+224,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred),32);
        bufp->chgIData(oldp+225,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp 
                                  - vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred)),32);
        bufp->chgCData(oldp+226,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU),4);
        bufp->chgBit(oldp+227,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack));
        bufp->chgBit(oldp+231,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                                & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE))));
        bufp->chgBit(oldp+232,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                                & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE))));
        bufp->chgBit(oldp+233,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                                & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                                   >> 1U))));
        bufp->chgBit(oldp+234,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                                & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                                   >> 2U))));
        bufp->chgBit(oldp+235,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                                & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                                   >> 1U))));
        bufp->chgBit(oldp+236,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                                & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                                   >> 2U))));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb));
        bufp->chgBit(oldp+239,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                 ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack)
                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack))));
        bufp->chgBit(oldp+240,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                 ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack)
                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack))));
        bufp->chgBit(oldp+241,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                 ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb)
                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb))));
        bufp->chgIData(oldp+242,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z),32);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z),32);
        bufp->chgCData(oldp+244,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state),4);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a),32);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b),32);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z),32);
        bufp->chgIData(oldp+248,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m),24);
        bufp->chgIData(oldp+249,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m),24);
        bufp->chgIData(oldp+250,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m),24);
        bufp->chgSData(oldp+251,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e),10);
        bufp->chgSData(oldp+252,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e),10);
        bufp->chgSData(oldp+253,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e),10);
        bufp->chgBit(oldp+254,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_s));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard));
        bufp->chgBit(oldp+258,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__sticky));
        bufp->chgQData(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient),51);
        bufp->chgQData(oldp+262,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__divisor),51);
        bufp->chgQData(oldp+264,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__dividend),51);
        bufp->chgQData(oldp+266,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder),51);
        bufp->chgCData(oldp+268,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__count),6);
        bufp->chgCData(oldp+269,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state),4);
        bufp->chgIData(oldp+270,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a),32);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b),32);
        bufp->chgIData(oldp+272,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z),32);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m),24);
        bufp->chgIData(oldp+274,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m),24);
        bufp->chgIData(oldp+275,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m),24);
        bufp->chgSData(oldp+276,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e),10);
        bufp->chgSData(oldp+277,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e),10);
        bufp->chgSData(oldp+278,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e),10);
        bufp->chgBit(oldp+279,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_s));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__sticky));
        bufp->chgQData(oldp+285,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product),48);
        bufp->chgBit(oldp+287,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                      >> 0x13U))));
        __Vtemp_hff7a503d__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                  << 0x13U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                    >> 0xdU)))))) 
                                     << 6U) | (0x3fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  >> 5U)));
        __Vtemp_hff7a503d__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                  << 0x13U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                    >> 0xdU)))))) 
                                     >> 0x1aU) | ((IData)(
                                                          ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                                << 0x13U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                                >> 0xdU))))) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_hff7a503d__0[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                      << 0x19U) | (0x1ffffc0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                      >> 7U))) 
                                    | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                     << 0x13U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                       >> 0xdU))))) 
                                                >> 0x20U)) 
                                       >> 0x1aU));
        __Vtemp_hff7a503d__0[3U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                              >> 7U)) 
                                    | ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                        << 0x19U) | 
                                       (0x1ffffc0U 
                                        & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                           >> 7U))));
        __Vtemp_hff7a503d__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                              >> 7U)) 
                                    | (0x1fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                                  >> 7U)));
        bufp->chgWData(oldp+288,(__Vtemp_hff7a503d__0),141);
        bufp->chgCData(oldp+293,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                           >> 0xdU))),6);
        bufp->chgIData(oldp+294,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+295,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+296,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                   << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+297,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM),32);
        bufp->chgIData(oldp+298,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                   << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 0xdU))),32);
        bufp->chgBit(oldp+299,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+300,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]),32);
        bufp->chgBit(oldp+301,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+302,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 5U))),5);
        bufp->chgBit(oldp+303,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+304,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+305,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+306,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+307,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+308,((1U & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])));
        bufp->chgBit(oldp+309,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+310,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+311,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 0xcU))),32);
        bufp->chgCData(oldp+312,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                           >> 6U))),6);
        bufp->chgBit(oldp+313,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+314,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+315,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+316,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+317,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
    }
    bufp->chgBit(oldp+318,(vlSelf->clk));
    bufp->chgBit(oldp+319,(vlSelf->reset));
    bufp->chgIData(oldp+320,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+321,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+322,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+323,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+324,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+325,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+326,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+327,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+328,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+329,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+330,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+331,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+332,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+333,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+334,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+335,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+336,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+337,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+338,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+339,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+340,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+341,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+342,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+343,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+344,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+345,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+346,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+347,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+348,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+349,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+350,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+351,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+352,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+353,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+354,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+355,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+356,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+357,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+358,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+359,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
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
