// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__0\n"); );
    // Body
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__cycle_count = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = 0U;
    } else {
        vlSelf->__PVT__cycle_count = ((IData)(1U) + vlSelf->__PVT__cycle_count);
        if (((~ (IData)(vlSelf->__PVT__from_DE_to_FE)) 
             & (IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (0x1fU & 
                                           (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                            >> 0x10U)))));
        }
        if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                           >> 0x25U)))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = ((~ ((IData)(1U) << (0x1fU & (IData)(
                                                       (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                        >> 0x20U))))) 
                   & vlSelf->__PVT__my_DE_stage__DOT__in_use_regs);
        }
    }
    if ((0x40U & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])) {
        vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 
            = ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                << 0x18U) | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                             >> 8U));
        vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 
            = (0x3fffU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                          >> 0xaU));
    }
}

extern const VlWide<9>/*287:0*/ Vpipeline__ConstPool__CONST_hbf00fadb_0;

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
    // Init
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0;
    my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0;
    my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0;
    my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0;
    my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_hca3bcfcd__0;
    VlWide<6>/*191:0*/ __Vtemp_hcb8df70d__0;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                << 6U) | (0x3fU & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                                        [
                                                        (0x3fffU 
                                                         & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                            >> 0xaU))])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                        >> 8U))))) 
                                      >> 0x20U)) << 6U));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = (((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                 << 0x1eU) | (0x3fffffc0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 2U))) 
               | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                             [(0x3fffU 
                                               & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  >> 0xaU))])) 
                             << 0x20U) | (QData)((IData)(
                                                         ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                           << 0x18U) 
                                                          | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                             >> 8U))))) 
                           >> 0x20U)) >> 0x1aU));
    }
    if (vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
    __Vtemp_hca3bcfcd__0[0U] = ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? vlSelf->my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0
                                 : ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSelf->my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0
                                     : ((4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                            >> 8U)))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                   << 3U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                     >> 0x10U))))
                                         : ((5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                                >> 8U)))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                       >> 5U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                          << 3U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                            >> 0x10U)))))
                                             : ((3U 
                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                     << 0x17U) 
                                                    | (0x7ff000U 
                                                       & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                          >> 9U))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                                  >> 8U)))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                         >> 9U)) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                            >> 0x12U)) 
                                                        | (0x7feU 
                                                           & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                               << 3U) 
                                                              | (6U 
                                                                 & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                    >> 0x1dU)))))))
                                                  : 0U))))));
    __Vtemp_hcb8df70d__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x1cU 
                                                           == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x1dU 
                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1eU 
                                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x1fU 
                                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x20U 
                                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | (0x21U 
                                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            ((0x19U 
                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               (0x17U 
                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0x18U 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x2fU) 
                                                 | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                     << 0x2eU) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                            >> 0x10U)))) 
                                                        << 0x29U) 
                                                       | (0x1ffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[0U])))))))))));
    __Vtemp_hcb8df70d__0[1U] = ((__Vtemp_hca3bcfcd__0[0U] 
                                 << 0x13U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((0x1cU 
                                                                          == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                         | ((0x1dU 
                                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | ((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x20U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x21U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(
                                                                           ((0x19U 
                                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                           << 0x31U) 
                                                          | (((QData)((IData)(
                                                                              (0x17U 
                                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                 << 0x2fU) 
                                                                | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                    << 0x2eU) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                                >> 0x10U)))) 
                                                                       << 0x29U) 
                                                                      | (0x1ffffffffffULL 
                                                                         & (((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U])) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[0U])))))))))) 
                                                      >> 0x20U)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hbf00fadb_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hbf00fadb_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hbf00fadb_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hbf00fadb_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hbf00fadb_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hbf00fadb_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hbf00fadb_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hbf00fadb_0[7U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = Vpipeline__ConstPool__CONST_hbf00fadb_0[8U];
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = ((0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                         >> 2U)) | ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                     << 0x1eU) | (0x3fffffc0U 
                                                  & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                     >> 2U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = ((0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                         >> 2U)) | ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                     << 0x1eU) | (0x3fffffc0U 
                                                  & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                     >> 2U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
            = ((0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                         >> 2U)) | (0x1fc0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                               >> 2U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                << 8U) | (0xffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 9U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                >> 0x18U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                      >> 0x20U)) << 8U));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                             vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                             << 0xdU) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                               >> 0x13U)))) 
                << 8U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                   >> 0x20U)) >> 0x18U));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                 << 0x15U) | (0x1fc000U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           >> 0xbU))) 
               | (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                                vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                  >> 0x13U)))) 
                   >> 0x18U) | ((IData)(((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                >> 0x13U))) 
                                         >> 0x20U)) 
                                << 8U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = ((0x3fffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                           >> 0xbU)) | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                         << 0x15U) 
                                        | (0x1fc000U 
                                           & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 0xbU))));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
            = ((0x3fffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                           >> 0xbU)) | (0x4000U & (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                   >> 0xbU)));
        if (vlSelf->__PVT__from_DE_to_FE) {
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = Vpipeline__ConstPool__CONST_hbf00fadb_0[0U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = Vpipeline__ConstPool__CONST_hbf00fadb_0[1U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = Vpipeline__ConstPool__CONST_hbf00fadb_0[2U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = Vpipeline__ConstPool__CONST_hbf00fadb_0[3U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = Vpipeline__ConstPool__CONST_hbf00fadb_0[4U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = Vpipeline__ConstPool__CONST_hbf00fadb_0[5U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = Vpipeline__ConstPool__CONST_hbf00fadb_0[6U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = Vpipeline__ConstPool__CONST_hbf00fadb_0[7U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                = Vpipeline__ConstPool__CONST_hbf00fadb_0[8U];
        } else {
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = __Vtemp_hcb8df70d__0[0U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = __Vtemp_hcb8df70d__0[1U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = ((__Vtemp_hca3bcfcd__0[0U] >> 0xdU) 
                   | (vlSelf->__PVT__my_DE_stage__DOT__regs
                      [(0x1fU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                  << 3U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                            >> 0x1dU)))] 
                      << 0x13U));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = ((vlSelf->__PVT__my_DE_stage__DOT__regs
                    [(0x1fU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                << 3U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                          >> 0x1dU)))] 
                    >> 0xdU) | ((IData)((((QData)((IData)(
                                                          ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                                            << 0x17U) 
                                                           | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                                              >> 9U)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__my_DE_stage__DOT__regs
                                                           [
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                               >> 0x18U))])))) 
                                << 0x13U));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = (((IData)((((QData)((IData)(((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                                << 0x17U) 
                                               | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                                  >> 9U)))) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__my_DE_stage__DOT__regs
                                                          [
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                              >> 0x18U))])))) 
                    >> 0xdU) | ((IData)(((((QData)((IData)(
                                                           ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                                             << 0x17U) 
                                                            | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                                               >> 9U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                >> 0x18U))]))) 
                                         >> 0x20U)) 
                                << 0x13U));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = ((0xfe000000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                   << 0x10U)) | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                                                  << 0x13U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                                                                << 0x17U) 
                                                                                | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U] 
                                                                                >> 9U)))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                                >> 0x18U))]))) 
                                                             >> 0x20U)) 
                                                    >> 0xdU)));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = (((0x1ff0000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                   << 0x10U)) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                                 >> 0x10U)) 
                   | (0xfe000000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                     << 0x10U)));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = (((0x1ff0000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                   << 0x10U)) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                                 >> 0x10U)) 
                   | (0xfe000000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                     << 0x10U)));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                = (((0x1ff0000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                   << 0x10U)) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                 >> 0x10U)) 
                   | (0x2000000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                    << 0x10U)));
        }
    }
    my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
             << 7U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                       >> 0x19U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 0xdU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x13U)));
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
                = my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0;
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
    vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
        = ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               >> 0x13U))) ? my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0
            : ((0x1aU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0x13U))) ? ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x13U))
                : ((0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x13U))) ? 
                   (0xfffffffeU & my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0)
                    : (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                         >> 0x12U) & (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0
                        : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                            << 7U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x19U))))));
    vlSelf->__PVT__from_AGEX_to_DE = ((IData)((0U != 
                                               (0x60000U 
                                                & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U]))) 
                                      & (vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                         != vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U]));
    vlSelf->__PVT__from_AGEX_to_FE[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                          >> 0x12U)))) 
                                                      << 0x29U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                             >> 1U)))) 
                                                         << 0x21U) 
                                                        | (((QData)((IData)(
                                                                            ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                              << 7U) 
                                                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0x19U)))) 
                                                            << 1U) 
                                                           | (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 0x11U)))))))));
    vlSelf->__PVT__from_AGEX_to_FE[1U] = ((vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                           << 0xbU) 
                                          | (IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                              >> 0x12U)))) 
                                                          << 0x29U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 1U)))) 
                                                             << 0x21U) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0x19U)))) 
                                                                << 1U) 
                                                               | (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 0x11U)))))))) 
                                                     >> 0x20U)));
    vlSelf->__PVT__from_AGEX_to_FE[2U] = (((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                           << 0xbU) 
                                          | (vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                             >> 0x15U));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_hd5e700a3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h9093e326_0;

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h74b95097__0;
    my_DE_stage__DOT____VdfgTmp_h74b95097__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h867a0603__0;
    my_DE_stage__DOT____VdfgTmp_h867a0603__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h73e7bcf6__0;
    my_DE_stage__DOT____VdfgTmp_h73e7bcf6__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_hb365cba8__0;
    my_DE_stage__DOT____VdfgTmp_hb365cba8__0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->my_DE_stage__DOT____VdfgExtracted_h1b77eed7__0 
        = (((- (IData)((1U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                              >> 8U)))) << 0xbU) | 
           (0x7ffU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                       << 3U) | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                 >> 0x1dU))));
    my_DE_stage__DOT____VdfgTmp_h74b95097__0 = (IData)(
                                                       (0x6600U 
                                                        == 
                                                        (0xe0fe00U 
                                                         & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h867a0603__0 = (IData)(
                                                       (0xa06600U 
                                                        == 
                                                        (0xe0fe00U 
                                                         & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h73e7bcf6__0 = (IData)(
                                                       ((0x200000U 
                                                         == 
                                                         (0xe00000U 
                                                          & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                        & (0U 
                                                           == 
                                                           (0x1fcU 
                                                            & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))));
    my_DE_stage__DOT____VdfgTmp_hb365cba8__0 = (IData)(
                                                       (0xa02600U 
                                                        == 
                                                        (0xe0fe00U 
                                                         & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])));
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgTmp_h74b95097__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1fcU 
                                                     & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                 ? 1U
                                                 : 
                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h74b95097__0) 
                                                  & (0x80U 
                                                     == 
                                                     (0x1fcU 
                                                      & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          ((0xe06600U 
                                                            == 
                                                            (0xe0fe00U 
                                                             & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                           & (0U 
                                                              == 
                                                              (0x1fcU 
                                                               & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           ((0xc06600U 
                                                             == 
                                                             (0xe0fe00U 
                                                              & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                            & (0U 
                                                               == 
                                                               (0x1fcU 
                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            ((0x806600U 
                                                              == 
                                                              (0xe0fe00U 
                                                               & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                             & (0U 
                                                                == 
                                                                (0x1fcU 
                                                                 & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             ((0x406600U 
                                                               == 
                                                               (0xe0fe00U 
                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0x1fcU 
                                                                  & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              ((0x606600U 
                                                                == 
                                                                (0xe0fe00U 
                                                                 & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x1fcU 
                                                                   & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U]))))
                                                       ? 7U
                                                       : 
                                                      (((IData)(my_DE_stage__DOT____VdfgTmp_h867a0603__0) 
                                                        & (0x80U 
                                                           == 
                                                           (0x1fcU 
                                                            & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                        ? 8U
                                                        : 
                                                       (((IData)(my_DE_stage__DOT____VdfgTmp_h867a0603__0) 
                                                         & (0U 
                                                            == 
                                                            (0x1fcU 
                                                             & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                         ? 9U
                                                         : 
                                                        ((IData)(
                                                                 ((0x6600U 
                                                                   == 
                                                                   (0xfe00U 
                                                                    & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                                  & (IData)(my_DE_stage__DOT____VdfgTmp_h73e7bcf6__0)))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgTmp_h74b95097__0) 
                                                           & (4U 
                                                              == 
                                                              (0x1fcU 
                                                               & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   (0x2600U 
                                                                    == 
                                                                    (0xe0fe00U 
                                                                     & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    (0xe02600U 
                                                                     == 
                                                                     (0xe0fe00U 
                                                                      & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     (0xc02600U 
                                                                      == 
                                                                      (0xe0fe00U 
                                                                       & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      (0x802600U 
                                                                       == 
                                                                       (0xe0fe00U 
                                                                        & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       (0x402600U 
                                                                        == 
                                                                        (0xe0fe00U 
                                                                         & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        (0x602600U 
                                                                         == 
                                                                         (0xe0fe00U 
                                                                          & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(my_DE_stage__DOT____VdfgTmp_hb365cba8__0) 
                                                                  & (0x80U 
                                                                     == 
                                                                     (0x1fcU 
                                                                      & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(my_DE_stage__DOT____VdfgTmp_hb365cba8__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x1fcU 
                                                                       & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])))
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(
                                                                           ((0x2600U 
                                                                             == 
                                                                             (0xfe00U 
                                                                              & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                                            & (IData)(my_DE_stage__DOT____VdfgTmp_h73e7bcf6__0)))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                         >> 9U)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                          >> 9U)))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              (0x400600U 
                                                                               == 
                                                                               (0xe0fe00U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               (0x404600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                             >> 9U)))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                (0xce00U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                (0xc600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                (0x20c600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x80c600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                (0xa0c600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                (0xc0c600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                (0xe0c600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                (0x40e600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x20e600U 
                                                                                == 
                                                                                (0xe0fe00U 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
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
                                             & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                >> 0x18U)))) 
                                     | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                        & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                           >> (0x1fU 
                                               & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                     >> 0x1dU)))))) 
                                    | (IData)(vlSelf->__PVT__from_AGEX_to_DE));
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__3(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__3\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v0;
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__my_DE_stage__DOT__regs__v32;
    __Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__regs__v32;
    __Vdlyvval__my_DE_stage__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v32;
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0;
    // Body
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0U;
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdlyvset__my_DE_stage__DOT__regs__v0 = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x25U)))) {
        __Vdlyvval__my_DE_stage__DOT__regs__v32 = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
        __Vdlyvset__my_DE_stage__DOT__regs__v32 = 1U;
        __Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 
            (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x20U)));
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[0U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[1U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[2U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[3U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[4U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[6U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[7U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[8U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[9U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xaU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xbU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xcU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xdU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xeU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xfU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x10U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x11U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x12U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x13U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x14U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x15U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x16U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x17U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x18U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x19U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1aU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1bU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1cU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1dU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1eU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v32) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vdlyvdim0__my_DE_stage__DOT__regs__v32] 
            = __Vdlyvval__my_DE_stage__DOT__regs__v32;
    }
}
