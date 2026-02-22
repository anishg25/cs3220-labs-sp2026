// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_hd5e700a3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h9093e326_0;

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h26bfbacc__0;
    my_DE_stage__DOT____VdfgTmp_h26bfbacc__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h77708464__0;
    my_DE_stage__DOT____VdfgTmp_h77708464__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h45713d59__0;
    my_DE_stage__DOT____VdfgTmp_h45713d59__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_hd807bba6__0;
    my_DE_stage__DOT____VdfgTmp_hd807bba6__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0;
    my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0;
    my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0;
    my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0;
    my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0 
        = (((- (IData)((1U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                              >> 0xaU)))) << 0xbU) 
           | (0x7ffU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                         << 1U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                   >> 0x1fU))));
    my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
             << 5U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                       >> 0x1bU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x15U)));
    my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
             << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         >> 0x15U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0xbU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x15U)));
    my_DE_stage__DOT____VdfgTmp_h26bfbacc__0 = (IData)(
                                                       (0x19800U 
                                                        == 
                                                        (0x383f800U 
                                                         & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h77708464__0 = (IData)(
                                                       (0x2819800U 
                                                        == 
                                                        (0x383f800U 
                                                         & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h45713d59__0 = (IData)(
                                                       ((0x800000U 
                                                         == 
                                                         (0x3800000U 
                                                          & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                        & (0U 
                                                           == 
                                                           (0x7f0U 
                                                            & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))));
    my_DE_stage__DOT____VdfgTmp_hd807bba6__0 = (IData)(
                                                       (0x2809800U 
                                                        == 
                                                        (0x383f800U 
                                                         & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])));
    my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0 
        = VL_LTS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x15U)), 
                     ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                       << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   >> 0x15U)));
    my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
             << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         >> 0x15U)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0xbU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x15U)));
    if ((1U & (~ ((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U))) 
                        | (2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U)))) 
                       | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U)))) 
                      | (4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U)))) 
                     | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U)))) 
                    | (6U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) 
                   | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x15U)))) 
                  | (8U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     >> 0x15U))))))) {
        if ((1U & (~ ((((((((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x15U))) 
                            | (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x15U)))) 
                           | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x15U)))) 
                          | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x15U)))) 
                         | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x15U)))) 
                        | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x15U)))) 
                       | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))) 
                      | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U))))))) {
            if (((((((((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U))) 
                       | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x15U)))) 
                      | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))) 
                     | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U)))) 
                    | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U)))) 
                   | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U)))) 
                  | ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U))) 
                     | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U))))) 
                 | (0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U))))) {
                if ((0x11U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U)))) {
                    if ((0x12U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))) {
                        if ((0x13U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x15U)))) {
                            if ((0x14U != (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))) {
                                if ((0x15U != (0x3fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x15U)))) {
                                    if ((0x16U != (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x15U)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x15U))) 
                                                    | (0x1bU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                           >> 0x15U))))))) {
                                            vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                                                = my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                    = ((0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U)))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0
                        : 0U);
            }
        }
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgTmp_h26bfbacc__0) 
                                                 & (0U 
                                                    == 
                                                    (0x7f0U 
                                                     & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                 ? 1U
                                                 : 
                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h26bfbacc__0) 
                                                  & (0x200U 
                                                     == 
                                                     (0x7f0U 
                                                      & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          ((0x3819800U 
                                                            == 
                                                            (0x383f800U 
                                                             & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                           & (0U 
                                                              == 
                                                              (0x7f0U 
                                                               & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           ((0x3019800U 
                                                             == 
                                                             (0x383f800U 
                                                              & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                            & (0U 
                                                               == 
                                                               (0x7f0U 
                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            ((0x2019800U 
                                                              == 
                                                              (0x383f800U 
                                                               & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                             & (0U 
                                                                == 
                                                                (0x7f0U 
                                                                 & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             ((0x1019800U 
                                                               == 
                                                               (0x383f800U 
                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0x7f0U 
                                                                  & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              ((0x1819800U 
                                                                == 
                                                                (0x383f800U 
                                                                 & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x7f0U 
                                                                   & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))))
                                                       ? 7U
                                                       : 
                                                      (((IData)(my_DE_stage__DOT____VdfgTmp_h77708464__0) 
                                                        & (0x200U 
                                                           == 
                                                           (0x7f0U 
                                                            & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                        ? 8U
                                                        : 
                                                       (((IData)(my_DE_stage__DOT____VdfgTmp_h77708464__0) 
                                                         & (0U 
                                                            == 
                                                            (0x7f0U 
                                                             & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                         ? 9U
                                                         : 
                                                        ((IData)(
                                                                 ((0x19800U 
                                                                   == 
                                                                   (0x3f800U 
                                                                    & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                                  & (IData)(my_DE_stage__DOT____VdfgTmp_h45713d59__0)))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgTmp_h26bfbacc__0) 
                                                           & (0x10U 
                                                              == 
                                                              (0x7f0U 
                                                               & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   (0x9800U 
                                                                    == 
                                                                    (0x383f800U 
                                                                     & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    (0x3809800U 
                                                                     == 
                                                                     (0x383f800U 
                                                                      & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     (0x3009800U 
                                                                      == 
                                                                      (0x383f800U 
                                                                       & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      (0x2009800U 
                                                                       == 
                                                                       (0x383f800U 
                                                                        & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       (0x1009800U 
                                                                        == 
                                                                        (0x383f800U 
                                                                         & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        (0x1809800U 
                                                                         == 
                                                                         (0x383f800U 
                                                                          & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(my_DE_stage__DOT____VdfgTmp_hd807bba6__0) 
                                                                  & (0x200U 
                                                                     == 
                                                                     (0x7f0U 
                                                                      & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(my_DE_stage__DOT____VdfgTmp_hd807bba6__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x7f0U 
                                                                       & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(
                                                                           ((0x9800U 
                                                                             == 
                                                                             (0x3f800U 
                                                                              & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                                            & (IData)(my_DE_stage__DOT____VdfgTmp_h45713d59__0)))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                         >> 0xbU)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                          >> 0xbU)))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              (0x1001800U 
                                                                               == 
                                                                               (0x383f800U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               (0x1011800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                             >> 0xbU)))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x33800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                (0x31800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                (0x831800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x2031800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x2831800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x3031800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                (0x3831800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                (0x1039800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x839800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    if (((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x15U))) | (2U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x15U)))) 
              | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 >> 0x15U)))) | (4U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x15U)))) 
            | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               >> 0x15U)))) | (6U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x15U)))) 
          | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                             >> 0x15U)))) | (8U == 
                                             (0x3fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x15U))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x15U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 << 0xbU) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x15U)) 
                                               + ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0xbU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x15U)))
                : ((2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    >> 0x15U))) ? (
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     << 0xbU) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       >> 0x15U)) 
                                                   - 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0xbU) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x15U)))
                    : ((3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U)))
                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                             << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x15U)) 
                           & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x15U)))
                        : ((4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))
                            ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x15U)) 
                               | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x15U)))
                            : ((5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x15U)))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x15U)) 
                                   ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       << 0xbU) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x15U)))
                                : ((6U == (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))
                                    ? ((IData)(my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0)
                                        ? 1U : 0U) : 
                                   ((7U == (0x3fU & 
                                            (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x15U)))
                                     ? ((IData)(my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0)
                                         ? 1U : 0U)
                                     : VL_SHIFTRS_III(32,32,5, 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        << 0xbU) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x15U)), 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x15U))))))))));
    } else if (((((((((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U))) 
                      | (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U)))) 
                     | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U)))) 
                    | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U)))) 
                   | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U)))) 
                  | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) 
                 | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x15U)))) 
                | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x15U))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x15U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 << 0xbU) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x15U)) 
                                               >> (0x1fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x15U)))
                : ((0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x15U))) ? 
                   (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                      << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0x15U)) << (0x1fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x15U)))
                    : ((0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U)))
                        ? VL_MULS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xbU) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x15U)), 
                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0xbU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x15U)))
                        : ((0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x15U)))
                            ? my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0
                            : ((0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x15U)))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x15U)) 
                                   & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0xbU) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x15U)))
                                : ((0xeU == (0x3fU 
                                             & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x15U)))
                                    ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         << 0xbU) | 
                                        (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x15U)) 
                                       | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 0xbU) 
                                          | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x15U)))
                                    : ((0xfU == (0x3fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x15U)))
                                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             << 0xbU) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x15U)) 
                                           ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 0xbU) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x15U)))
                                        : (VL_LTS_III(32, 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        << 0xbU) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x15U)), 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 0xbU) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x15U)))
                                            ? 1U : 0U))))))));
    } else if (((((((((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U))) 
                      | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))) 
                     | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U)))) 
                    | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U)))) 
                   | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U)))) 
                  | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U)))) 
                 | ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U))) 
                    | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U))))) 
                | (0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x15U))))) {
        if ((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x15U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                      << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0x15U)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 0xbU) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x15U)))
                    ? 1U : 0U);
        } else if ((0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xbU) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x15U)), 
                                 (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x15U)));
        } else if ((0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 >> 0x15U)) >> (0x1fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x15U)));
        } else if ((0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 >> 0x15U)) << (0x1fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x15U)));
        } else if ((0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                    << 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                >> 0x15U));
        } else if ((0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0;
        } else if (((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U))) 
                    | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                    << 5U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              >> 0x1bU));
        }
    } else {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0x15U))) ? ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0xbU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x15U))
                : 0U);
    }
    vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX 
        = ((0x1cU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               >> 0x15U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 0xbU) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x15U)) 
                                              == ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0xbU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x15U)))
            : ((0x1dU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0x15U))) ? ((
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    << 0xbU) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x15U)) 
                                                  != 
                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0xbU) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x15U)))
                : ((0x1eU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U))) ? (IData)(my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0)
                    : ((0x1fU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U)))
                        ? VL_GTES_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xbU) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x15U)), 
                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0xbU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x15U)))
                        : ((0x20U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x15U)))
                            ? (IData)(my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0)
                            : (IData)(((0x4200000U 
                                        == (0x7e00000U 
                                            & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                       & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xbU) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x15U)) 
                                          >= ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 0xbU) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x15U))))))))));
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = vlSelf->my_DE_stage__DOT____Vxrand_h9b4ad1b0__0;
    if ((1U & (~ (((((((((((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                           | (2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                          | (3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                         | (4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (6U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (7U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (8U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (9U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xaU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xbU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) {
        if ((((((((((((0x22U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | (0x23U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0xcU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0xdU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xeU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xfU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x10U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x11U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (0x17U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (0x1aU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (0x1bU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if ((((0x12U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                     | (0x13U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x14U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if (((0x15U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x16U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 3U;
        } else if ((0x18U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 4U;
        } else if ((0x19U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 2U;
        } else if (((((((0x1cU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                        | (0x1dU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x1eU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x1fU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x20U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x21U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 5U;
        }
    }
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = ((
                                                   (0x22U 
                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((3U 
                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | ((4U 
                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                               | ((5U 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                  | ((6U 
                                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                     | ((7U 
                                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                        | ((8U 
                                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                           | ((9U 
                                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                              | ((0xaU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xbU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xcU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xdU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xeU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xfU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x10U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x12U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x13U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x14U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x15U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x16U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x17U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x19U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))))))))))))))))))))) 
                                                  & (0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                         >> 0x12U))));
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = vlSelf->my_DE_stage__DOT____Vxrand_h9b4ac0a8__0;
    if ((((((((((((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                  | (2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (6U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (7U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
            | (8U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
           | (9U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
          | (0xaU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
         | (0xbU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 1U;
    } else if ((((((((((((0x22U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | (0x23U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (0xcU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0xdU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0xeU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0xfU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x10U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x11U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x17U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x1aU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x1bU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((((0x12U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                 | (0x13U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x14U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if (((0x15U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                | (0x16U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 4U;
    } else if (((((((0x1cU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x1dU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x1eU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x1fU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x20U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x21U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    }
    vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
        = ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               >> 0x15U))) ? my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0
            : ((0x1aU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0x15U))) ? ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   << 0xbU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x15U))
                : ((0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U))) ? 
                   (0xfffffffeU & my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0)
                    : (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                         >> 0x14U) & (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0
                        : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                            << 5U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x1bU))))));
    __Vtableidx1 = vlSelf->__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = Vpipeline__ConstPool__TABLE_hd5e700a3_0
        [__Vtableidx1];
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = Vpipeline__ConstPool__TABLE_h9093e326_0
        [__Vtableidx1];
    vlSelf->__PVT__from_AGEX_to_DE = ((IData)((0U != 
                                               (0x180000U 
                                                & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U]))) 
                                      & (vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                         != vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U]));
    vlSelf->__PVT__from_AGEX_to_FE[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                                                   << 0x2cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                          >> 0x14U)))) 
                                                      << 0x2bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3ffU 
                                                                          & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                             >> 1U)))) 
                                                         << 0x21U) 
                                                        | (((QData)((IData)(
                                                                            ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                              << 5U) 
                                                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0x1bU)))) 
                                                            << 1U) 
                                                           | (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 0x13U)))))))));
    vlSelf->__PVT__from_AGEX_to_FE[1U] = ((vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                           << 0xdU) 
                                          | (IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                                                       << 0x2cU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                              >> 0x14U)))) 
                                                          << 0x2bU) 
                                                         | (((QData)((IData)(
                                                                             (0x3ffU 
                                                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 1U)))) 
                                                             << 0x21U) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 5U) 
                                                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0x1bU)))) 
                                                                << 1U) 
                                                               | (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 0x13U)))))))) 
                                                     >> 0x20U)));
    vlSelf->__PVT__from_AGEX_to_FE[2U] = (((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                           << 0xdU) 
                                          | (vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                             >> 0x13U));
    vlSelf->__PVT__from_DE_to_FE = ((((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                      & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                         >> (0x1fU 
                                             & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                >> 0x1aU)))) 
                                     | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                        & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                           >> (0x1fU 
                                               & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                   << 1U) 
                                                  | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                     >> 0x1fU)))))) 
                                    | (IData)(vlSelf->__PVT__from_AGEX_to_DE));
}
