// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline_FE_STAGE.h"
#include "Vpipeline__Syms.h"

VL_INLINE_OPT void Vpipeline_FE_STAGE___nba_sequent__TOP__pipeline__my_FE_stage__0(Vpipeline_FE_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_FE_STAGE___nba_sequent__TOP__pipeline__my_FE_stage__0\n"); );
    // Init
    CData/*1:0*/ __VdfgTmp_h6168066c__0;
    __VdfgTmp_h6168066c__0 = 0;
    IData/*31:0*/ __Vdly__inst_count_FE;
    __Vdly__inst_count_FE = 0;
    IData/*31:0*/ __Vdly__PC_FE_latch;
    __Vdly__PC_FE_latch = 0;
    CData/*7:0*/ __Vdly__BHR;
    __Vdly__BHR = 0;
    IData/*31:0*/ __Vdly__correct_predictions;
    __Vdly__correct_predictions = 0;
    IData/*31:0*/ __Vdly__total_branches;
    __Vdly__total_branches = 0;
    CData/*5:0*/ __Vdlyvdim0__BTB__v0;
    __Vdlyvdim0__BTB__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__BTB__v0;
    __Vdlyvlsb__BTB__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BTB__v0;
    __Vdlyvset__BTB__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__BTB__v1;
    __Vdlyvdim0__BTB__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__BTB__v1;
    __Vdlyvlsb__BTB__v1 = 0;
    IData/*25:0*/ __Vdlyvval__BTB__v1;
    __Vdlyvval__BTB__v1 = 0;
    CData/*5:0*/ __Vdlyvdim0__BTB__v2;
    __Vdlyvdim0__BTB__v2 = 0;
    CData/*5:0*/ __Vdlyvlsb__BTB__v2;
    __Vdlyvlsb__BTB__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BTB__v2;
    __Vdlyvval__BTB__v2 = 0;
    CData/*7:0*/ __Vdlyvdim0__PHT__v0;
    __Vdlyvdim0__PHT__v0 = 0;
    CData/*1:0*/ __Vdlyvval__PHT__v0;
    __Vdlyvval__PHT__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PHT__v0;
    __Vdlyvset__PHT__v0 = 0;
    // Body
    __Vdly__inst_count_FE = vlSelf->__PVT__inst_count_FE;
    __Vdly__total_branches = vlSelf->total_branches;
    __Vdly__correct_predictions = vlSelf->correct_predictions;
    __Vdlyvset__PHT__v0 = 0U;
    __Vdly__BHR = vlSelf->__PVT__BHR;
    __Vdly__PC_FE_latch = vlSelf->__PVT__PC_FE_latch;
    __Vdlyvset__BTB__v0 = 0U;
    vlSelf->__Vdly__FE_latch[0U] = vlSelf->__PVT__FE_latch[0U];
    vlSelf->__Vdly__FE_latch[1U] = vlSelf->__PVT__FE_latch[1U];
    vlSelf->__Vdly__FE_latch[2U] = vlSelf->__PVT__FE_latch[2U];
    vlSelf->__Vdly__FE_latch[3U] = vlSelf->__PVT__FE_latch[3U];
    vlSelf->__Vdly__FE_latch[4U] = vlSelf->__PVT__FE_latch[4U];
    vlSelf->__Vdly__FE_latch[5U] = vlSelf->__PVT__FE_latch[5U];
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__j = 0x40U;
        vlSelf->__PVT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__PHT[(0xffU & vlSelf->__PVT__i)] = 1U;
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
        __Vdly__inst_count_FE = 1U;
        __Vdly__total_branches = 0U;
        __Vdly__correct_predictions = 0U;
        __Vdly__BHR = 0U;
        vlSelf->__PVT__BTB[0U] = (0x3ffffffffffffffULL 
                                  & vlSelf->__PVT__BTB
                                  [0U]);
        __Vdly__PC_FE_latch = 0x200U;
        vlSelf->__PVT__BTB[1U] = (0x3ffffffffffffffULL 
                                  & vlSelf->__PVT__BTB
                                  [1U]);
        vlSelf->__PVT__BTB[2U] = (0x3ffffffffffffffULL 
                                  & vlSelf->__PVT__BTB
                                  [2U]);
        vlSelf->__PVT__BTB[3U] = (0x3ffffffffffffffULL 
                                  & vlSelf->__PVT__BTB
                                  [3U]);
        vlSelf->__PVT__BTB[4U] = (0x3ffffffffffffffULL 
                                  & vlSelf->__PVT__BTB
                                  [4U]);
        vlSelf->__PVT__BTB[5U] = (0x3ffffffffffffffULL 
                                  & vlSelf->__PVT__BTB
                                  [5U]);
        vlSelf->__PVT__BTB[6U] = (0x3ffffffffffffffULL 
                                  & vlSelf->__PVT__BTB
                                  [6U]);
        vlSelf->__PVT__BTB[7U] = (0x3ffffffffffffffULL 
                                  & vlSelf->__PVT__BTB
                                  [7U]);
        vlSelf->__PVT__BTB[8U] = (0x3ffffffffffffffULL 
                                  & vlSelf->__PVT__BTB
                                  [8U]);
        vlSelf->__PVT__BTB[9U] = (0x3ffffffffffffffULL 
                                  & vlSelf->__PVT__BTB
                                  [9U]);
        vlSelf->__PVT__BTB[0xaU] = (0x3ffffffffffffffULL 
                                    & vlSelf->__PVT__BTB
                                    [0xaU]);
        vlSelf->__PVT__BTB[0xbU] = (0x3ffffffffffffffULL 
                                    & vlSelf->__PVT__BTB
                                    [0xbU]);
        vlSelf->__PVT__BTB[0xcU] = (0x3ffffffffffffffULL 
                                    & vlSelf->__PVT__BTB
                                    [0xcU]);
        vlSelf->__PVT__BTB[0xdU] = (0x3ffffffffffffffULL 
                                    & vlSelf->__PVT__BTB
                                    [0xdU]);
        vlSelf->__PVT__BTB[0xeU] = (0x3ffffffffffffffULL 
                                    & vlSelf->__PVT__BTB
                                    [0xeU]);
        vlSelf->__PVT__BTB[0xfU] = (0x3ffffffffffffffULL 
                                    & vlSelf->__PVT__BTB
                                    [0xfU]);
        vlSelf->__PVT__BTB[0x10U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x10U]);
        vlSelf->__PVT__BTB[0x11U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x11U]);
        vlSelf->__PVT__BTB[0x12U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x12U]);
        vlSelf->__PVT__BTB[0x13U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x13U]);
        vlSelf->__PVT__BTB[0x14U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x14U]);
        vlSelf->__PVT__BTB[0x15U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x15U]);
        vlSelf->__PVT__BTB[0x16U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x16U]);
        vlSelf->__PVT__BTB[0x17U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x17U]);
        vlSelf->__PVT__BTB[0x18U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x18U]);
        vlSelf->__PVT__BTB[0x19U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x19U]);
        vlSelf->__PVT__BTB[0x1aU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x1aU]);
        vlSelf->__PVT__BTB[0x1bU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x1bU]);
        vlSelf->__PVT__BTB[0x1cU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x1cU]);
        vlSelf->__PVT__BTB[0x1dU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x1dU]);
        vlSelf->__PVT__BTB[0x1eU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x1eU]);
        vlSelf->__PVT__BTB[0x1fU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x1fU]);
        vlSelf->__PVT__BTB[0x20U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x20U]);
        vlSelf->__PVT__BTB[0x21U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x21U]);
        vlSelf->__PVT__BTB[0x22U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x22U]);
        vlSelf->__PVT__BTB[0x23U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x23U]);
        vlSelf->__PVT__BTB[0x24U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x24U]);
        vlSelf->__PVT__BTB[0x25U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x25U]);
        vlSelf->__PVT__BTB[0x26U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x26U]);
        vlSelf->__PVT__BTB[0x27U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x27U]);
        vlSelf->__PVT__BTB[0x28U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x28U]);
        vlSelf->__PVT__BTB[0x29U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x29U]);
        vlSelf->__PVT__BTB[0x2aU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x2aU]);
        vlSelf->__PVT__BTB[0x2bU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x2bU]);
        vlSelf->__PVT__BTB[0x2cU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x2cU]);
        vlSelf->__PVT__BTB[0x2dU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x2dU]);
        vlSelf->__PVT__BTB[0x2eU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x2eU]);
        vlSelf->__PVT__BTB[0x2fU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x2fU]);
        vlSelf->__PVT__BTB[0x30U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x30U]);
        vlSelf->__PVT__BTB[0x31U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x31U]);
        vlSelf->__PVT__BTB[0x32U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x32U]);
        vlSelf->__PVT__BTB[0x33U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x33U]);
        vlSelf->__PVT__BTB[0x34U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x34U]);
        vlSelf->__PVT__BTB[0x35U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x35U]);
        vlSelf->__PVT__BTB[0x36U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x36U]);
        vlSelf->__PVT__BTB[0x37U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x37U]);
        vlSelf->__PVT__BTB[0x38U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x38U]);
        vlSelf->__PVT__BTB[0x39U] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x39U]);
        vlSelf->__PVT__BTB[0x3aU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x3aU]);
        vlSelf->__PVT__BTB[0x3bU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x3bU]);
        vlSelf->__PVT__BTB[0x3cU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x3cU]);
        vlSelf->__PVT__BTB[0x3dU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x3dU]);
        vlSelf->__PVT__BTB[0x3eU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x3eU]);
        vlSelf->__PVT__BTB[0x3fU] = (0x3ffffffffffffffULL 
                                     & vlSelf->__PVT__BTB
                                     [0x3fU]);
        vlSelf->__Vdly__FE_latch[0U] = 0U;
        vlSelf->__Vdly__FE_latch[1U] = 0U;
        vlSelf->__Vdly__FE_latch[2U] = 0U;
        vlSelf->__Vdly__FE_latch[3U] = 0U;
        vlSelf->__Vdly__FE_latch[4U] = 0U;
        vlSelf->__Vdly__FE_latch[5U] = 0U;
    } else {
        if ((1U & (~ (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                      >> 0xbU)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE)))) {
                __Vdly__inst_count_FE = ((IData)(1U) 
                                         + vlSelf->__PVT__inst_count_FE);
            }
        }
        if ((0x800U & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U])) {
            __Vdly__PC_FE_latch = ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                    << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                                 >> 0xbU));
            vlSelf->__Vdly__FE_latch[0U] = 0U;
            vlSelf->__Vdly__FE_latch[1U] = 0U;
            vlSelf->__Vdly__FE_latch[2U] = 0U;
            vlSelf->__Vdly__FE_latch[3U] = 0U;
            vlSelf->__Vdly__FE_latch[4U] = 0U;
            vlSelf->__Vdly__FE_latch[5U] = 0U;
        } else if (vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE) {
            __Vdly__PC_FE_latch = vlSelf->__PVT__PC_FE_latch;
            vlSelf->__Vdly__FE_latch[0U] = vlSelf->__PVT__FE_latch[0U];
            vlSelf->__Vdly__FE_latch[1U] = vlSelf->__PVT__FE_latch[1U];
            vlSelf->__Vdly__FE_latch[2U] = vlSelf->__PVT__FE_latch[2U];
            vlSelf->__Vdly__FE_latch[3U] = vlSelf->__PVT__FE_latch[3U];
            vlSelf->__Vdly__FE_latch[4U] = vlSelf->__PVT__FE_latch[4U];
            vlSelf->__Vdly__FE_latch[5U] = vlSelf->__PVT__FE_latch[5U];
        } else {
            __Vdly__PC_FE_latch = (((IData)(vlSelf->__PVT__prediction_FE) 
                                    & (IData)(vlSelf->__PVT__BTB_hit))
                                    ? (IData)(vlSelf->__PVT__BTB
                                              [(0x3fU 
                                                & (vlSelf->__PVT__PC_FE_latch 
                                                   >> 2U))])
                                    : vlSelf->__PVT__pcplus_FE);
            vlSelf->__Vdly__FE_latch[0U] = (IData)(
                                                   (((QData)((IData)(vlSelf->__PVT__hash_FE)) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(vlSelf->__PVT__prediction_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((IData)(vlSelf->__PVT__BTB_hit)
                                                                           ? (IData)(vlSelf->__VdfgTmp_hccac3553__0)
                                                                           : 
                                                                          ((IData)(4U) 
                                                                           + vlSelf->__PVT__PC_FE_latch)))))));
            vlSelf->__Vdly__FE_latch[1U] = ((vlSelf->__PVT__inst_count_FE 
                                             << 9U) 
                                            | (IData)(
                                                      ((((QData)((IData)(vlSelf->__PVT__hash_FE)) 
                                                         << 0x21U) 
                                                        | (((QData)((IData)(vlSelf->__PVT__prediction_FE)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((IData)(vlSelf->__PVT__BTB_hit)
                                                                               ? (IData)(vlSelf->__VdfgTmp_hccac3553__0)
                                                                               : 
                                                                              ((IData)(4U) 
                                                                               + vlSelf->__PVT__PC_FE_latch)))))) 
                                                       >> 0x20U)));
            vlSelf->__Vdly__FE_latch[2U] = ((vlSelf->__PVT__inst_count_FE 
                                             >> 0x17U) 
                                            | (((IData)(4U) 
                                                + vlSelf->__PVT__PC_FE_latch) 
                                               << 9U));
            vlSelf->__Vdly__FE_latch[3U] = ((((IData)(4U) 
                                              + vlSelf->__PVT__PC_FE_latch) 
                                             >> 0x17U) 
                                            | ((IData)(
                                                       (((QData)((IData)(vlSelf->__PVT__inst_FE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->__PVT__PC_FE_latch)))) 
                                               << 9U));
            vlSelf->__Vdly__FE_latch[4U] = (((IData)(
                                                     (((QData)((IData)(vlSelf->__PVT__inst_FE)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__PC_FE_latch)))) 
                                             >> 0x17U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->__PVT__inst_FE)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->__PVT__PC_FE_latch))) 
                                                        >> 0x20U)) 
                                               << 9U));
            vlSelf->__Vdly__FE_latch[5U] = ((((~ ((IData)(vlSymsp->TOP.reset) 
                                                  | ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                                      >> 0xbU) 
                                                     | (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE)))) 
                                              & (0U 
                                                 != vlSelf->__PVT__inst_FE)) 
                                             << 9U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->__PVT__inst_FE)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->__PVT__PC_FE_latch))) 
                                                        >> 0x20U)) 
                                               >> 0x17U));
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((1U & ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                    >> 9U) | vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U]))) {
            __Vdly__total_branches = ((IData)(1U) + vlSelf->total_branches);
            if ((1U & (~ (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                          >> 0xbU)))) {
                __Vdly__correct_predictions = ((IData)(1U) 
                                               + vlSelf->correct_predictions);
            }
            __Vdlyvset__BTB__v0 = 1U;
            __Vdlyvlsb__BTB__v0 = 0x3aU;
            __Vdlyvdim0__BTB__v0 = (0x3fU & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U] 
                                             >> 3U));
            __Vdlyvval__BTB__v1 = (0x3ffffffU & ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                                  << 0x19U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U] 
                                                    >> 7U)));
            __Vdlyvlsb__BTB__v1 = 0x20U;
            __Vdlyvdim0__BTB__v1 = (0x3fU & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U] 
                                             >> 3U));
            __Vdlyvval__BTB__v2 = ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                    << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                                 >> 0xbU));
            __Vdlyvlsb__BTB__v2 = 0U;
            __Vdlyvdim0__BTB__v2 = (0x3fU & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U] 
                                             >> 3U));
        }
        if ((0x200U & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U])) {
            __Vdlyvval__PHT__v0 = ((2U & vlSelf->__PVT__PHT
                                    [(0xffU & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                               >> 1U))])
                                    ? ((1U & vlSelf->__PVT__PHT
                                        [(0xffU & (
                                                   vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                                   >> 1U))])
                                        ? ((0x400U 
                                            & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U])
                                            ? 3U : 2U)
                                        : ((0x400U 
                                            & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U])
                                            ? 3U : 1U))
                                    : ((1U & vlSelf->__PVT__PHT
                                        [(0xffU & (
                                                   vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                                   >> 1U))])
                                        ? ((0x400U 
                                            & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U])
                                            ? 2U : 0U)
                                        : ((0x400U 
                                            & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U])
                                            ? 1U : 0U)));
            __Vdlyvset__PHT__v0 = 1U;
            __Vdlyvdim0__PHT__v0 = (0xffU & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                             >> 1U));
            __Vdly__BHR = ((0xfeU & ((IData)(vlSelf->__PVT__BHR) 
                                     << 1U)) | (1U 
                                                & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                                   >> 0xaU)));
        }
    }
    vlSelf->total_branches = __Vdly__total_branches;
    vlSelf->correct_predictions = __Vdly__correct_predictions;
    if (__Vdlyvset__PHT__v0) {
        vlSelf->__PVT__PHT[__Vdlyvdim0__PHT__v0] = __Vdlyvval__PHT__v0;
    }
    vlSelf->__PVT__BHR = __Vdly__BHR;
    if (__Vdlyvset__BTB__v0) {
        vlSelf->__PVT__BTB[__Vdlyvdim0__BTB__v0] = 
            (vlSelf->__PVT__BTB[__Vdlyvdim0__BTB__v0] 
             | (0x7ffffffffffffffULL & ((QData)((IData)(1U)) 
                                        << (IData)(__Vdlyvlsb__BTB__v0))));
        vlSelf->__PVT__BTB[__Vdlyvdim0__BTB__v1] = 
            (((~ (0x3ffffffULL << (IData)(__Vdlyvlsb__BTB__v1))) 
              & vlSelf->__PVT__BTB[__Vdlyvdim0__BTB__v1]) 
             | (0x7ffffffffffffffULL & ((QData)((IData)(__Vdlyvval__BTB__v1)) 
                                        << (IData)(__Vdlyvlsb__BTB__v1))));
        vlSelf->__PVT__BTB[__Vdlyvdim0__BTB__v2] = 
            (((~ (0xffffffffULL << (IData)(__Vdlyvlsb__BTB__v2))) 
              & vlSelf->__PVT__BTB[__Vdlyvdim0__BTB__v2]) 
             | (0x7ffffffffffffffULL & ((QData)((IData)(__Vdlyvval__BTB__v2)) 
                                        << (IData)(__Vdlyvlsb__BTB__v2))));
    }
    vlSelf->__PVT__inst_count_FE = __Vdly__inst_count_FE;
    vlSelf->__PVT__PC_FE_latch = __Vdly__PC_FE_latch;
    vlSelf->__PVT__pcplus_FE = ((IData)(4U) + vlSelf->__PVT__PC_FE_latch);
    vlSelf->__PVT__inst_FE = vlSelf->__PVT__imem[(0x3fffU 
                                                  & (vlSelf->__PVT__PC_FE_latch 
                                                     >> 2U))];
    vlSelf->__VdfgTmp_hccac3553__0 = vlSelf->__PVT__BTB
        [(0x3fU & (vlSelf->__PVT__PC_FE_latch >> 2U))];
    vlSelf->__PVT__hash_FE = (0xffU & ((vlSelf->__PVT__PC_FE_latch 
                                        >> 2U) ^ (IData)(vlSelf->__PVT__BHR)));
    vlSelf->__PVT__BTB_hit = ((IData)((vlSelf->__VdfgTmp_hccac3553__0 
                                       >> 0x3aU)) & 
                              ((vlSelf->__PVT__PC_FE_latch 
                                >> 6U) == (0x3ffffffU 
                                           & (IData)(
                                                     (vlSelf->__VdfgTmp_hccac3553__0 
                                                      >> 0x20U)))));
    __VdfgTmp_h6168066c__0 = vlSelf->__PVT__PHT[vlSelf->__PVT__hash_FE];
    vlSelf->__PVT__prediction_FE = ((2U == (IData)(__VdfgTmp_h6168066c__0)) 
                                    | (3U == (IData)(__VdfgTmp_h6168066c__0)));
}
