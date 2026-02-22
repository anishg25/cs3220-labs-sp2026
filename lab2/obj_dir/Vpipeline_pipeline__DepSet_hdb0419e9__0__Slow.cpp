// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

extern const VlWide<18>/*575:0*/ Vpipeline__ConstPool__CONST_h78c9e1d2_0;

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___eval_initial__TOP__pipeline\n"); );
    // Body
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(18, Vpipeline__ConstPool__CONST_h78c9e1d2_0)
                 ,  &(vlSelf->__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    vlSelf->my_DE_stage__DOT____Vxrand_h9b4ad1b0__0 
        = (7U & VL_RAND_RESET_I(3));
    vlSelf->my_DE_stage__DOT____Vxrand_h9b4ac0a8__0 
        = (0xfU & VL_RAND_RESET_I(4));
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(18, Vpipeline__ConstPool__CONST_h78c9e1d2_0)
                 ,  &(vlSelf->__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_hd5e700a3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h9093e326_0;

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
    // Init
    CData/*1:0*/ my_FE_stage__DOT____VdfgTmp_h6168066c__0;
    my_FE_stage__DOT____VdfgTmp_h6168066c__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h74b95097__0;
    my_DE_stage__DOT____VdfgTmp_h74b95097__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h867a0603__0;
    my_DE_stage__DOT____VdfgTmp_h867a0603__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h73e7bcf6__0;
    my_DE_stage__DOT____VdfgTmp_h73e7bcf6__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_hb365cba8__0;
    my_DE_stage__DOT____VdfgTmp_hb365cba8__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0;
    my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0;
    my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0;
    my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = ((IData)(4U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
    vlSelf->my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0 
        = (((- (IData)((1U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                              >> 8U)))) << 0xbU) | 
           (0x7ffU & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                       << 3U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 >> 0x1dU))));
    vlSelf->__PVT__my_FE_stage__DOT__inst_FE = vlSelf->__PVT__my_FE_stage__DOT__imem
        [(0x3fffU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U))];
    vlSelf->my_FE_stage__DOT____VdfgTmp_hccac35d1__0 
        = vlSelf->__PVT__my_FE_stage__DOT__BTB[(0xfU 
                                                & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                   >> 2U))];
    vlSelf->__PVT__my_FE_stage__DOT__hash_FE = (0xffU 
                                                & ((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                    >> 2U) 
                                                   ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR)));
    my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
             << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         >> 0x13U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0xdU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x13U)));
    my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0 
        = VL_LTS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x13U)), 
                     ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                       << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   >> 0x13U)));
    my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
             << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         >> 0x13U)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0xdU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x13U)));
    my_DE_stage__DOT____VdfgTmp_h74b95097__0 = (IData)(
                                                       (0x6600U 
                                                        == 
                                                        (0xe0fe00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h867a0603__0 = (IData)(
                                                       (0xa06600U 
                                                        == 
                                                        (0xe0fe00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h73e7bcf6__0 = (IData)(
                                                       ((0x200000U 
                                                         == 
                                                         (0xe00000U 
                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                        & (0U 
                                                           == 
                                                           (0x1fcU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))));
    my_DE_stage__DOT____VdfgTmp_hb365cba8__0 = (IData)(
                                                       (0xa02600U 
                                                        == 
                                                        (0xe0fe00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    vlSelf->__PVT__my_FE_stage__DOT__BTB_hit = ((IData)(
                                                        (vlSelf->my_FE_stage__DOT____VdfgTmp_hccac35d1__0 
                                                         >> 0x3aU)) 
                                                & ((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                    >> 6U) 
                                                   == 
                                                   (0x3ffffffU 
                                                    & (IData)(
                                                              (vlSelf->my_FE_stage__DOT____VdfgTmp_hccac35d1__0 
                                                               >> 0x20U)))));
    my_FE_stage__DOT____VdfgTmp_h6168066c__0 = vlSelf->__PVT__my_FE_stage__DOT__PHT
        [vlSelf->__PVT__my_FE_stage__DOT__hash_FE];
    if ((1U & (~ ((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x13U))) 
                        | (2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x13U)))) 
                       | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x13U)))) 
                      | (4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x13U)))) 
                     | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x13U)))) 
                    | (6U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U)))) 
                   | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x13U)))) 
                  | (8U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     >> 0x13U))))))) {
        if ((1U & (~ ((((((((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x13U))) 
                            | (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x13U)))) 
                           | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x13U)))) 
                          | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x13U)))) 
                         | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x13U)))) 
                        | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x13U)))) 
                       | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x13U)))) 
                      | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x13U))))))) {
            if (((((((((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x13U))) 
                       | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x13U)))) 
                      | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x13U)))) 
                     | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x13U)))) 
                    | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x13U)))) 
                   | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x13U)))) 
                  | ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x13U))) 
                     | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x13U))))) 
                 | (0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U))))) {
                if ((0x11U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x13U)))) {
                    if ((0x12U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x13U)))) {
                        if ((0x13U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x13U)))) {
                            if ((0x14U != (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x13U)))) {
                                if ((0x15U != (0x3fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x13U)))) {
                                    if ((0x16U != (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x13U)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x13U))) 
                                                    | (0x1bU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                           >> 0x13U))))))) {
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
                                           >> 0x13U)))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0
                        : 0U);
            }
        }
    }
    if (((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x13U))) | (2U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x13U)))) 
              | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 >> 0x13U)))) | (4U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x13U)))) 
            | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               >> 0x13U)))) | (6U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x13U)))) 
          | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                             >> 0x13U)))) | (8U == 
                                             (0x3fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x13U))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x13U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 << 0xdU) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x13U)) 
                                               + ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x13U)))
                : ((2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    >> 0x13U))) ? (
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     << 0xdU) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       >> 0x13U)) 
                                                   - 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0xdU) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x13U)))
                    : ((3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x13U)))
                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                             << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x13U)) 
                           & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x13U)))
                        : ((4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x13U)))
                            ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x13U)) 
                               | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x13U)))
                            : ((5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x13U)))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x13U)) 
                                   ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       << 0xdU) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x13U)))
                                : ((6U == (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x13U)))
                                    ? ((IData)(my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0)
                                        ? 1U : 0U) : 
                                   ((7U == (0x3fU & 
                                            (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x13U)))
                                     ? ((IData)(my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0)
                                         ? 1U : 0U)
                                     : VL_SHIFTRS_III(32,32,5, 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        << 0xdU) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x13U)), 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x13U))))))))));
    } else if (((((((((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U))) 
                      | (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x13U)))) 
                     | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x13U)))) 
                    | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x13U)))) 
                   | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x13U)))) 
                  | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U)))) 
                 | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x13U)))) 
                | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x13U))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x13U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 << 0xdU) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x13U)) 
                                               >> (0x1fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x13U)))
                : ((0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x13U))) ? 
                   (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                      << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0x13U)) << (0x1fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x13U)))
                    : ((0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x13U)))
                        ? VL_MULS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xdU) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x13U)), 
                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0xdU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x13U)))
                        : ((0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x13U)))
                            ? my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0
                            : ((0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x13U)))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x13U)) 
                                   & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0xdU) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x13U)))
                                : ((0xeU == (0x3fU 
                                             & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x13U)))
                                    ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         << 0xdU) | 
                                        (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x13U)) 
                                       | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 0xdU) 
                                          | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x13U)))
                                    : ((0xfU == (0x3fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x13U)))
                                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             << 0xdU) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x13U)) 
                                           ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 0xdU) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x13U)))
                                        : (VL_LTS_III(32, 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        << 0xdU) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x13U)), 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 0xdU) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x13U)))
                                            ? 1U : 0U))))))));
    } else if (((((((((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x13U))) 
                      | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x13U)))) 
                     | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x13U)))) 
                    | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x13U)))) 
                   | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x13U)))) 
                  | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x13U)))) 
                 | ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x13U))) 
                    | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x13U))))) 
                | (0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x13U))))) {
        if ((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x13U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                      << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0x13U)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 0xdU) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x13U)))
                    ? 1U : 0U);
        } else if ((0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xdU) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x13U)), 
                                 (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x13U)));
        } else if ((0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 >> 0x13U)) >> (0x1fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x13U)));
        } else if ((0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 >> 0x13U)) << (0x1fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x13U)));
        } else if ((0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                    << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                >> 0x13U));
        } else if ((0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                     << 7U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               >> 0x19U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 0xdU) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x13U)));
        } else if (((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x13U))) 
                    | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x13U))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                    << 7U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              >> 0x19U));
        }
    } else {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0x13U))) ? ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x13U))
                : 0U);
    }
    vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX 
        = ((0x1cU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               >> 0x13U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 0xdU) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x13U)) 
                                              == ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x13U)))
            : ((0x1dU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0x13U))) ? ((
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    << 0xdU) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x13U)) 
                                                  != 
                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0xdU) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x13U)))
                : ((0x1eU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U))) ? (IData)(my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0)
                    : ((0x1fU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x13U)))
                        ? VL_GTES_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xdU) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x13U)), 
                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0xdU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x13U)))
                        : ((0x20U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x13U)))
                            ? (IData)(my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0)
                            : (IData)(((0x1080000U 
                                        == (0x1f80000U 
                                            & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                       & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xdU) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x13U)) 
                                          >= ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 0xdU) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x13U))))))))));
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgTmp_h74b95097__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1fcU 
                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                 ? 1U
                                                 : 
                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h74b95097__0) 
                                                  & (0x80U 
                                                     == 
                                                     (0x1fcU 
                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          ((0xe06600U 
                                                            == 
                                                            (0xe0fe00U 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                           & (0U 
                                                              == 
                                                              (0x1fcU 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           ((0xc06600U 
                                                             == 
                                                             (0xe0fe00U 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                            & (0U 
                                                               == 
                                                               (0x1fcU 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            ((0x806600U 
                                                              == 
                                                              (0xe0fe00U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                             & (0U 
                                                                == 
                                                                (0x1fcU 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             ((0x406600U 
                                                               == 
                                                               (0xe0fe00U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0x1fcU 
                                                                  & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              ((0x606600U 
                                                                == 
                                                                (0xe0fe00U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x1fcU 
                                                                   & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                       ? 7U
                                                       : 
                                                      (((IData)(my_DE_stage__DOT____VdfgTmp_h867a0603__0) 
                                                        & (0x80U 
                                                           == 
                                                           (0x1fcU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                        ? 8U
                                                        : 
                                                       (((IData)(my_DE_stage__DOT____VdfgTmp_h867a0603__0) 
                                                         & (0U 
                                                            == 
                                                            (0x1fcU 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                         ? 9U
                                                         : 
                                                        ((IData)(
                                                                 ((0x6600U 
                                                                   == 
                                                                   (0xfe00U 
                                                                    & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                  & (IData)(my_DE_stage__DOT____VdfgTmp_h73e7bcf6__0)))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgTmp_h74b95097__0) 
                                                           & (4U 
                                                              == 
                                                              (0x1fcU 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   (0x2600U 
                                                                    == 
                                                                    (0xe0fe00U 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    (0xe02600U 
                                                                     == 
                                                                     (0xe0fe00U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     (0xc02600U 
                                                                      == 
                                                                      (0xe0fe00U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      (0x802600U 
                                                                       == 
                                                                       (0xe0fe00U 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       (0x402600U 
                                                                        == 
                                                                        (0xe0fe00U 
                                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        (0x602600U 
                                                                         == 
                                                                         (0xe0fe00U 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(my_DE_stage__DOT____VdfgTmp_hb365cba8__0) 
                                                                  & (0x80U 
                                                                     == 
                                                                     (0x1fcU 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(my_DE_stage__DOT____VdfgTmp_hb365cba8__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x1fcU 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(
                                                                           ((0x2600U 
                                                                             == 
                                                                             (0xfe00U 
                                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                            & (IData)(my_DE_stage__DOT____VdfgTmp_h73e7bcf6__0)))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 9U)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 9U)))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              (0x400600U 
                                                                               == 
                                                                               (0xe0fe00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               (0x404600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 9U)))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                (0xce00U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                (0xc600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                (0x20c600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x80c600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                (0xa0c600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                (0xc0c600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                (0xe0c600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                (0x40e600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x20e600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__my_FE_stage__DOT__prediction_FE 
        = ((2U == (IData)(my_FE_stage__DOT____VdfgTmp_h6168066c__0)) 
           | (3U == (IData)(my_FE_stage__DOT____VdfgTmp_h6168066c__0)));
    vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
        = ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               >> 0x13U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                << 7U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0x19U)) 
                                              + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  << 0xdU) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 0x13U)))
            : ((0x1aU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0x13U))) ? ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x13U))
                : ((0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U))) ? 
                   (0xfffffffeU & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x13U)) 
                                   + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0xdU) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x13U))))
                    : (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                         >> 0x12U) & (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX))
                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                             << 7U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       >> 0x19U)) + 
                           ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                             << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         >> 0x13U)))
                        : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                            << 7U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x19U))))));
    vlSelf->__PVT__my_AGEX_stage__DOT__br_mispred_AGEX 
        = (1U & (((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x13U))) | 
                  ((0x1aU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U))) 
                   | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x13U)))))
                  ? ((vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                      != vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])
                      ? 1U : 0U) : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x12U) & ((1U 
                                                   & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U])
                                                   ? 
                                                  ((((1U 
                                                      & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U]) 
                                                     != (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                                                    | (vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                                       != 
                                                       vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (((1U 
                                                     & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U]) 
                                                    != (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX))
                                                    ? 1U
                                                    : 0U)))));
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
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0x10U))));
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
    __Vtableidx1 = vlSelf->__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = Vpipeline__ConstPool__TABLE_hd5e700a3_0
        [__Vtableidx1];
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = Vpipeline__ConstPool__TABLE_h9093e326_0
        [__Vtableidx1];
    vlSelf->__PVT__from_DE_to_FE = ((((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                      & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                         >> (0x1fU 
                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0x18U)))) 
                                     | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                        & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                           >> (0x1fU 
                                               & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 3U) 
                                                  | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x1dU)))))) 
                                    | (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_mispred_AGEX));
}

VL_ATTR_COLD void Vpipeline_pipeline___ctor_var_reset(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__from_DE_to_FE = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(170, vlSelf->__PVT__my_FE_stage__DOT__FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__BHR = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB[__Vi0] = VL_RAND_RESET_Q(59);
    }
    vlSelf->__PVT__my_FE_stage__DOT__hash_FE = VL_RAND_RESET_I(8);
    vlSelf->__PVT__my_FE_stage__DOT__prediction_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__BTB_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__predicted_target = VL_RAND_RESET_I(32);
    vlSelf->my_FE_stage__DOT____VdfgTmp_hccac35d1__0 = 0;
    vlSelf->my_DE_stage__DOT____Vxrand_h9b4ad1b0__0 = VL_RAND_RESET_I(3);
    vlSelf->my_DE_stage__DOT____Vxrand_h9b4ac0a8__0 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(282, vlSelf->__PVT__my_DE_stage__DOT__DE_latch);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_RAND_RESET_I(6);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_RAND_RESET_I(3);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = VL_RAND_RESET_I(32);
    vlSelf->my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(175, vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch);
    vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__br_mispred_AGEX = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(173, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch);
    VL_RAND_RESET_W(170, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
    vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0;
}
