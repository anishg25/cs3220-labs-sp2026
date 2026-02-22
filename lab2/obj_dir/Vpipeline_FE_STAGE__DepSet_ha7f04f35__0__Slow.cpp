// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline_FE_STAGE.h"

extern const VlWide<18>/*575:0*/ Vpipeline__ConstPool__CONST_hef7c7652_0;

VL_ATTR_COLD void Vpipeline_FE_STAGE___eval_initial__TOP__pipeline__my_FE_stage(Vpipeline_FE_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_FE_STAGE___eval_initial__TOP__pipeline__my_FE_stage\n"); );
    // Body
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(18, Vpipeline__ConstPool__CONST_hef7c7652_0)
                 ,  &(vlSelf->__PVT__imem), 0, ~0ULL);
}

VL_ATTR_COLD void Vpipeline_FE_STAGE___stl_sequent__TOP__pipeline__my_FE_stage__0(Vpipeline_FE_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_FE_STAGE___stl_sequent__TOP__pipeline__my_FE_stage__0\n"); );
    // Init
    CData/*1:0*/ __VdfgTmp_h616807a8__0;
    __VdfgTmp_h616807a8__0 = 0;
    // Body
    vlSelf->__PVT__pcplus_FE = ((IData)(4U) + vlSelf->__PVT__PC_FE_latch);
    vlSelf->__PVT__inst_FE = vlSelf->__PVT__imem[(0x3fffU 
                                                  & (vlSelf->__PVT__PC_FE_latch 
                                                     >> 2U))];
    vlSelf->__VdfgTmp_hccac3553__0 = vlSelf->__PVT__BTB
        [(0x3fU & (vlSelf->__PVT__PC_FE_latch >> 2U))];
    vlSelf->__PVT__hash_FE = (0x3ffU & ((vlSelf->__PVT__PC_FE_latch 
                                         >> 2U) ^ (IData)(vlSelf->__PVT__BHR)));
    vlSelf->__PVT__BTB_hit = ((IData)((vlSelf->__VdfgTmp_hccac3553__0 
                                       >> 0x3aU)) & 
                              ((vlSelf->__PVT__PC_FE_latch 
                                >> 6U) == (0x3ffffffU 
                                           & (IData)(
                                                     (vlSelf->__VdfgTmp_hccac3553__0 
                                                      >> 0x20U)))));
    __VdfgTmp_h616807a8__0 = vlSelf->__PVT__PHT[vlSelf->__PVT__hash_FE];
    vlSelf->__PVT__prediction_FE = ((2U == (IData)(__VdfgTmp_h616807a8__0)) 
                                    | (3U == (IData)(__VdfgTmp_h616807a8__0)));
}

VL_ATTR_COLD void Vpipeline_FE_STAGE___ctor_var_reset(Vpipeline_FE_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_FE_STAGE___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_DE_to_FE = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->__PVT__from_AGEX_to_FE);
    vlSelf->__PVT__from_MEM_to_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_WB_to_FE = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(172, vlSelf->__PVT__FE_latch_out);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(172, vlSelf->__PVT__FE_latch);
    vlSelf->__PVT__PC_FE_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_count_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_count_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pcplus_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__BHR = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__BTB[__Vi0] = VL_RAND_RESET_Q(59);
    }
    vlSelf->__PVT__hash_FE = VL_RAND_RESET_I(10);
    vlSelf->__PVT__prediction_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__j = VL_RAND_RESET_I(32);
    vlSelf->__PVT__BTB_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__predicted_target = VL_RAND_RESET_I(32);
    vlSelf->correct_predictions = VL_RAND_RESET_I(32);
    vlSelf->total_branches = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_hccac3553__0 = 0;
    VL_RAND_RESET_W(172, vlSelf->__Vdly__FE_latch);
}
