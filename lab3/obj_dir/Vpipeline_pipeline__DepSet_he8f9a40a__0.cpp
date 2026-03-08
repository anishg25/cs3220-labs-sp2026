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
    // Init
    CData/*4:0*/ __Vdlyvdim0__my_DE_stage__DOT__reg_file__v0;
    __Vdlyvdim0__my_DE_stage__DOT__reg_file__v0 = 0;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__reg_file__v0;
    __Vdlyvval__my_DE_stage__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__reg_file__v0;
    __Vdlyvset__my_DE_stage__DOT__reg_file__v0 = 0;
    // Body
    __Vdlyvset__my_DE_stage__DOT__reg_file__v0 = 0U;
    if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                       >> 0x25U)))) {
        __Vdlyvval__my_DE_stage__DOT__reg_file__v0 
            = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
        __Vdlyvset__my_DE_stage__DOT__reg_file__v0 = 1U;
        __Vdlyvdim0__my_DE_stage__DOT__reg_file__v0 
            = (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                >> 0x20U)));
    }
    if (__Vdlyvset__my_DE_stage__DOT__reg_file__v0) {
        vlSelf->__PVT__my_DE_stage__DOT__reg_file[__Vdlyvdim0__my_DE_stage__DOT__reg_file__v0] 
            = __Vdlyvval__my_DE_stage__DOT__reg_file__v0;
    }
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__num_brjmp;
    __Vdly__my_FE_stage__DOT__num_brjmp = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__BTB_VALID__v0;
    __Vdlyvdim0__my_FE_stage__DOT__BTB_VALID__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__BTB_VALID__v0;
    __Vdlyvset__my_FE_stage__DOT__BTB_VALID__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__BTB_TAG__v0;
    __Vdlyvdim0__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    IData/*25:0*/ __Vdlyvval__my_FE_stage__DOT__BTB_TAG__v0;
    __Vdlyvval__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__BTB_TAG__v0;
    __Vdlyvset__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__my_FE_stage__DOT__PHT__v0;
    __Vdlyvdim0__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*1:0*/ __Vdlyvval__my_FE_stage__DOT__PHT__v0;
    __Vdlyvval__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__PHT__v0;
    __Vdlyvset__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__BTB_TARGET__v0;
    __Vdlyvdim0__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    IData/*31:0*/ __Vdlyvval__my_FE_stage__DOT__BTB_TARGET__v0;
    __Vdlyvval__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__BTB_TARGET__v0;
    __Vdlyvset__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__mis_pred;
    __Vdly__my_FE_stage__DOT__mis_pred = 0;
    SData/*13:0*/ __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0;
    __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    __Vdlyvval__my_MEM_stage__DOT__dmem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_MEM_stage__DOT__dmem__v0;
    __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0;
    // Body
    __Vdly__my_FE_stage__DOT__mis_pred = vlSelf->__PVT__my_FE_stage__DOT__mis_pred;
    __Vdly__my_FE_stage__DOT__num_brjmp = vlSelf->__PVT__my_FE_stage__DOT__num_brjmp;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__sticky 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__sticky;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_s 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_s;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__sticky 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__sticky;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__divisor 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__divisor;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__dividend 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__dividend;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__count 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__count;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_s 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_s;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a;
    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack 
        = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack;
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
    __Vdlyvset__my_FE_stage__DOT__BTB_VALID__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__BTB_TAG__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__BTB_TARGET__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__PHT__v0 = 0U;
    __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__mis_pred = 0U;
        __Vdly__my_FE_stage__DOT__num_brjmp = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = 0U;
        vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = 0x200U;
    } else {
        vlSelf->__PVT__cycle_count = ((IData)(1U) + vlSelf->__PVT__cycle_count);
        if (vlSelf->__PVT__from_AGEX_to_DE) {
            __Vdly__my_FE_stage__DOT__mis_pred = ((IData)(1U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__mis_pred);
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
            vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                = vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX;
        } else {
            if (vlSelf->__PVT__from_DE_to_FE) {
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
            } else {
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                    = ((vlSelf->__PVT__my_FE_stage__DOT__pcnext_FE 
                        << 8U) | (IData)(vlSelf->__PVT__my_FE_stage__DOT__pc_xor_bhr_FE));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                    = ((vlSelf->__PVT__my_FE_stage__DOT__pcnext_FE 
                        >> 0x18U) | (((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                     << 8U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                    = ((((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                        >> 0x18U) | ((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                     << 8U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                    = (((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                        >> 0x18U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                              >> 0x20U)) 
                                     << 8U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                    = (((IData)((0U != vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                        << 8U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                           >> 0x20U)) 
                                  >> 0x18U));
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__from_DE_to_FE)))) {
                vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                    = vlSelf->__PVT__my_FE_stage__DOT__pcnext_FE;
            }
        }
        if (vlSelf->__PVT__my_FE_stage__DOT__is_brjmp_AGEX) {
            __Vdly__my_FE_stage__DOT__num_brjmp = ((IData)(1U) 
                                                   + vlSelf->__PVT__my_FE_stage__DOT__num_brjmp);
        }
        if (((~ (IData)(vlSelf->__PVT__from_DE_to_FE)) 
             & (IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (0x1fU & 
                                           (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0xfU)))));
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
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelf->__PVT__my_FE_stage__DOT__is_brjmp_AGEX) {
            vlSelf->__PVT__my_FE_stage__DOT__BHR = 
                ((0xfeU & (IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR)) 
                 | (IData)(vlSelf->__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
            __Vdlyvset__my_FE_stage__DOT__BTB_VALID__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__BTB_VALID__v0 
                = (0xfU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                            << 1U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                      >> 0x1fU)));
            __Vdlyvval__my_FE_stage__DOT__BTB_TAG__v0 
                = (0x3ffffffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                 >> 3U));
            __Vdlyvset__my_FE_stage__DOT__BTB_TAG__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__BTB_TAG__v0 
                = (0xfU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                            << 1U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                      >> 0x1fU)));
            __Vdlyvval__my_FE_stage__DOT__BTB_TARGET__v0 
                = vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX;
            __Vdlyvset__my_FE_stage__DOT__BTB_TARGET__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__BTB_TARGET__v0 
                = (0xfU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                            << 1U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                      >> 0x1fU)));
            __Vdlyvval__my_FE_stage__DOT__PHT__v0 = 
                ((IData)(vlSelf->__PVT__my_FE_stage__DOT__do_brjmp_AGEX)
                  ? ((2U & vlSelf->__PVT__my_FE_stage__DOT__PHT
                      [(0xffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                 >> 5U))]) ? 3U : (
                                                   (1U 
                                                    & vlSelf->__PVT__my_FE_stage__DOT__PHT
                                                    [
                                                    (0xffU 
                                                     & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 5U))])
                                                    ? 2U
                                                    : 1U))
                  : ((2U & vlSelf->__PVT__my_FE_stage__DOT__PHT
                      [(0xffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                 >> 5U))]) ? ((1U & 
                                               vlSelf->__PVT__my_FE_stage__DOT__PHT
                                               [(0xffU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 5U))])
                                               ? 2U
                                               : 1U)
                      : 0U));
            __Vdlyvset__my_FE_stage__DOT__PHT__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__PHT__v0 
                = (0xffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                            >> 5U));
        }
    }
    if ((0x800U & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])) {
        __Vdlyvval__my_MEM_stage__DOT__dmem__v0 = (
                                                   (2U 
                                                    & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])
                                                    ? 
                                                   vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]
                                                    : 
                                                   ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                     << 0x13U) 
                                                    | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                       >> 0xdU)));
        __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 
            (0x3fffU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                        >> 0xfU));
    }
    vlSelf->__PVT__my_FE_stage__DOT__mis_pred = __Vdly__my_FE_stage__DOT__mis_pred;
    vlSelf->__PVT__my_FE_stage__DOT__num_brjmp = __Vdly__my_FE_stage__DOT__num_brjmp;
    if (__Vdlyvset__my_FE_stage__DOT__BTB_VALID__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_VALID[__Vdlyvdim0__my_FE_stage__DOT__BTB_VALID__v0] = 1U;
    }
    if (__Vdlyvset__my_FE_stage__DOT__BTB_TAG__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_TAG[__Vdlyvdim0__my_FE_stage__DOT__BTB_TAG__v0] 
            = __Vdlyvval__my_FE_stage__DOT__BTB_TAG__v0;
    }
    if (__Vdlyvset__my_FE_stage__DOT__BTB_TARGET__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_TARGET[__Vdlyvdim0__my_FE_stage__DOT__BTB_TARGET__v0] 
            = __Vdlyvval__my_FE_stage__DOT__BTB_TARGET__v0;
    }
    if (__Vdlyvset__my_FE_stage__DOT__PHT__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__PHT[__Vdlyvdim0__my_FE_stage__DOT__PHT__v0] 
            = __Vdlyvval__my_FE_stage__DOT__PHT__v0;
    }
    if (__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
    vlSelf->__PVT__my_FE_stage__DOT__inst_FE = vlSelf->__PVT__my_FE_stage__DOT__imem
        [(0x3fffU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U))];
    vlSelf->__PVT__my_FE_stage__DOT__pc_xor_bhr_FE 
        = (0xffU & ((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U) ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR)));
    vlSelf->__PVT__my_FE_stage__DOT__pcnext_FE = ((
                                                   (1U 
                                                    < 
                                                    vlSelf->__PVT__my_FE_stage__DOT__PHT
                                                    [vlSelf->__PVT__my_FE_stage__DOT__pc_xor_bhr_FE]) 
                                                   & ((vlSelf->__PVT__my_FE_stage__DOT__BTB_TAG
                                                       [
                                                       (0xfU 
                                                        & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                           >> 2U))] 
                                                       == 
                                                       (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                        >> 6U)) 
                                                      & vlSelf->__PVT__my_FE_stage__DOT__BTB_VALID
                                                      [
                                                      (0xfU 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                          >> 2U))]))
                                                   ? 
                                                  vlSelf->__PVT__my_FE_stage__DOT__BTB_TARGET
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))]
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch));
}

extern const VlWide<9>/*287:0*/ Vpipeline__ConstPool__CONST_h7f58725f_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vpipeline__ConstPool__TABLE_h8d162c29_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vpipeline__ConstPool__TABLE_hbe980ec3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline__ConstPool__TABLE_hfb554e72_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline__ConstPool__TABLE_he5618b2b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline__ConstPool__TABLE_hceeb58d8_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline__ConstPool__TABLE_he7e8f9c3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline__ConstPool__TABLE_h49c2c8c5_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_hd5e700a3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h9093e326_0;

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_hee75c7bd__0;
    my_DE_stage__DOT____VdfgTmp_hee75c7bd__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h3be2a185__0;
    my_DE_stage__DOT____VdfgTmp_h3be2a185__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h18879c23__0;
    my_DE_stage__DOT____VdfgTmp_h18879c23__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_hd110deda__0;
    my_DE_stage__DOT____VdfgTmp_hd110deda__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0;
    my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0;
    my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgTmp_hec15c38d__0;
    my_AGEX_stage__DOT____VdfgTmp_hec15c38d__0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_haab59a2d__0;
    VlWide<5>/*159:0*/ __Vtemp_h7e42b545__0;
    VlWide<9>/*287:0*/ __Vtemp_hb42aeb1b__0;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] = 0U;
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                        << 0x13U) 
                                                       | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                          >> 0xdU)))))) 
                << 6U) | (0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   >> 5U)));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                        << 0x13U) 
                                                       | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                          >> 0xdU)))))) 
                >> 0x1aU) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                      << 0x13U) 
                                                                     | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                        >> 0xdU))))) 
                                      >> 0x20U)) << 6U));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = (((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                 << 0x19U) | (0x1ffffc0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                            >> 7U))) 
               | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                             << 0x20U) | (QData)((IData)(
                                                         ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                           << 0x13U) 
                                                          | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                             >> 0xdU))))) 
                           >> 0x20U)) >> 0x1aU));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = ((0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                         >> 7U)) | ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                     << 0x19U) | (0x1ffffc0U 
                                                  & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                     >> 7U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = ((0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                         >> 7U)) | (0x1fc0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                               >> 7U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = (IData)((((QData)((IData)((0xffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0xdU)))) 
                        << 0x25U) | (0x1fffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U]))))));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                << 0xdU) | (IData)(((((QData)((IData)(
                                                      (0xffU 
                                                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0xdU)))) 
                                      << 0x25U) | (0x1fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U]))))) 
                                    >> 0x20U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                >> 0x13U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                      >> 0x20U)) << 0xdU));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                 << 0x16U) | (0x380000U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           >> 0xaU))) 
               | ((0x7e000U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 0xaU)) | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                     >> 0x20U)) 
                                            >> 0x13U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = ((0x7ffffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                            >> 0xaU)) | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                          << 0x16U) 
                                         | (0x380000U 
                                            & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0xaU))));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
            = ((0x7ffffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                            >> 0xaU)) | (0x80000U & 
                                         (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                          >> 0xaU)));
    }
    vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM = 
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[(0x3fffU 
                                                & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                   >> 0xfU))];
    __Vtemp_haab59a2d__0[0U] = ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? (((- (IData)((1U 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 7U)))) 
                                     << 0xbU) | (0x7ffU 
                                                 & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1cU))))
                                 : ((4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 7U)))) 
                                         << 0xbU) | 
                                        ((0x7e0U & 
                                          (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 4U)) 
                                         | (0x1fU & 
                                            (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0xfU))))
                                     : ((5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 7U)))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 4U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0xfU)))))
                                         : ((3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (0xfffff000U 
                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0x18U) 
                                                   | (0xfff000U 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 8U))))
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 7U)))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 8U)) 
                                                    | ((0x800U 
                                                        & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x11U)) 
                                                       | (0x7feU 
                                                          & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 4U) 
                                                             | (0xeU 
                                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1cU)))))))
                                                 : 0U)))));
    __Vtemp_h7e42b545__0[0U] = (IData)((((QData)((IData)(
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
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            ((0x19U 
                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                            << 0x35U) 
                                           | (((QData)((IData)(
                                                               (0x17U 
                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  (0x18U 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0xfU)))) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U]))) 
                                                           << 0x25U) 
                                                          | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_aluop_DE)) 
                                                              << 0x24U) 
                                                             | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_op1_DE)) 
                                                                 << 0x23U) 
                                                                | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_op2_DE)) 
                                                                    << 0x22U) 
                                                                   | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_op3_DE)) 
                                                                       << 0x21U) 
                                                                      | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_alu_out_DE)) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                ((1U 
                                                                                == (IData)(vlSelf->__PVT__my_FU_stage__DOT__aluop_FU))
                                                                                 ? vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                                                                 : vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z))))))))))))))));
    __Vtemp_h7e42b545__0[1U] = ((__Vtemp_haab59a2d__0[0U] 
                                 << 0x17U) | (IData)(
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
                                                        << 0x36U) 
                                                       | (((QData)((IData)(
                                                                           ((0x19U 
                                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              (0x17U 
                                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                              << 0x34U) 
                                                             | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                 << 0x33U) 
                                                                | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                    << 0x32U) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0xfU)))) 
                                                                       << 0x2dU) 
                                                                      | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U]))) 
                                                                          << 0x25U) 
                                                                         | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_aluop_DE)) 
                                                                             << 0x24U) 
                                                                            | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_op1_DE)) 
                                                                                << 0x23U) 
                                                                               | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_op2_DE)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_op3_DE)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_alu_out_DE)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((1U 
                                                                                == (IData)(vlSelf->__PVT__my_FU_stage__DOT__aluop_FU))
                                                                                 ? vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                                                                 : vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_hb42aeb1b__0[3U] = ((IData)(vlSelf->__PVT__from_DE_to_FE)
                                 ? Vpipeline__ConstPool__CONST_h7f58725f_0[3U]
                                 : (((IData)((((QData)((IData)(
                                                               vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                               [
                                                               (0x1fU 
                                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x17U))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                [
                                                                (0x1fU 
                                                                 & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 4U) 
                                                                    | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x1cU)))])))) 
                                     >> 9U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                          [
                                                                          (0x1fU 
                                                                           & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x17U))])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                           [
                                                                           (0x1fU 
                                                                            & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                               | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))]))) 
                                                        >> 0x20U)) 
                                               << 0x17U)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[7U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[8U];
    } else if (vlSelf->__PVT__from_DE_to_FE) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = __Vtemp_hb42aeb1b__0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[7U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = Vpipeline__ConstPool__CONST_h7f58725f_0[8U];
    } else {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = __Vtemp_h7e42b545__0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = __Vtemp_h7e42b545__0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = ((__Vtemp_haab59a2d__0[0U] >> 9U) | ((IData)(
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x17U))])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                              [
                                                                              (0x1fU 
                                                                               & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))])))) 
                                                   << 0x17U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = __Vtemp_hb42aeb1b__0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = ((0xe0000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                               << 0x15U)) | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                                              << 0x17U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                           [
                                                                           (0x1fU 
                                                                            & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x17U))])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                            [
                                                                            (0x1fU 
                                                                             & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))]))) 
                                                         >> 0x20U)) 
                                                >> 9U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = (((0x1fe00000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                << 0x15U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                              >> 0xbU)) 
               | (0xe0000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                 << 0x15U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = (((0x1fe00000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                << 0x15U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                              >> 0xbU)) 
               | (0xe0000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                 << 0x15U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = (((0x1fe00000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                << 0x15U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                              >> 0xbU)) 
               | (0xe0000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 << 0x15U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = (((0x1fe00000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 0x15U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0xbU)) 
               | (0x20000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 << 0x15U)));
    }
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U];
    vlSelf->__PVT__my_FE_stage__DOT__is_brjmp_AGEX 
        = (IData)((0U != (0x600000U & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U])));
    my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
             << 3U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                       >> 0x1dU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x17U)));
    my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
             << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                       >> 0x17U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x17U)));
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0 
        = VL_LTS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x17U)), ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 9U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x17U)));
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
             << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                       >> 0x17U)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x17U)));
    if (((((((((0U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state)))) {
        if ((0U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack = 1U;
            if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack) 
                 & ((2U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__aluop_FU)) 
                    & ((IData)(vlSelf->__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                       >> 1U)))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a 
                    = vlSelf->__PVT__my_DE_stage__DOT__op1_DE;
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack = 0U;
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack = 1U;
            if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack) 
                 & ((2U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__aluop_FU)) 
                    & ((IData)(vlSelf->__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                       >> 2U)))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b 
                    = vlSelf->__PVT__my_DE_stage__DOT__op2_DE;
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack = 0U;
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m 
                = (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a);
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m 
                = (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b);
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 3U;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e 
                = (0x3ffU & ((0xffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a 
                                       >> 0x17U)) - (IData)(0x7fU)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e 
                = (0x3ffU & ((0xffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b 
                                       >> 0x17U)) - (IData)(0x7fU)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s 
                = (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a 
                   >> 0x1fU);
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s 
                = (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b 
                   >> 0x1fU);
        } else if ((3U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
            if ((((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e)) 
                  & (0U != vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m)) 
                 | ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e)) 
                    & (0U != vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m)))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z = 0xffc00000U;
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 0xcU;
            } else if ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s) 
                                       ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s)) 
                                      << 0x1fU));
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 0xcU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e))) 
                     & (0U == vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m))) {
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z = 0xffc00000U;
                }
            } else if ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s) 
                                       ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s)) 
                                      << 0x1fU));
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 0xcU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e))) 
                     & (0U == vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m))) {
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z = 0xffc00000U;
                }
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e))) 
                        & (0U == vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z 
                    = (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s) 
                        ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s)) 
                       << 0x1fU);
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 0xcU;
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e))) 
                        & (0U == vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z 
                    = (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s) 
                        ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s)) 
                       << 0x1fU);
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 0xcU;
            } else {
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e)))) {
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e = 0x382U;
                } else {
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m 
                        = (0x800000U | vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m);
                }
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e)))) {
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e = 0x382U;
                } else {
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m 
                        = (0x800000U | vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m);
                }
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 4U;
            }
        } else if ((4U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
            if ((0x800000U & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m)) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 5U;
            } else {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m 
                    = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m 
                                    << 1U));
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e 
                    = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e) 
                                 - (IData)(1U)));
            }
        } else if ((5U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
            if ((0x800000U & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m)) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 6U;
            } else {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m 
                    = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m 
                                    << 1U));
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e 
                    = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e) 
                                 - (IData)(1U)));
            }
        } else if ((6U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_s 
                = ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s) 
                   ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e 
                = (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e) 
                                            + (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e))));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product 
                = (0xffffffffffffULL & ((QData)((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m)) 
                                        * (QData)((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m))));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 7U;
        } else {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m 
                = (0xffffffU & (IData)((vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product 
                                        >> 0x18U)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 8U;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard 
                = (1U & (IData)((vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product 
                                 >> 0x17U)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit 
                = (1U & (IData)((vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product 
                                 >> 0x16U)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__sticky 
                = (0U != (0x3fffffU & (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product)));
        }
    } else if ((8U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
        if ((0x800000U & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m)) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 9U;
        } else {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e 
                = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e) 
                             - (IData)(1U)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m 
                = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m 
                                << 1U));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m 
                = ((0xfffffeU & vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m) 
                   | (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard 
                = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit = 0U;
        }
    } else if ((9U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
        if (VL_GTS_III(32, 0xffffff82U, VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e)))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m 
                = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m 
                                >> 1U));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__sticky 
                = ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__sticky) 
                   | (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit 
                = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard 
                = (1U & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m);
        } else {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 0xaU;
        }
    } else if ((0xaU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
        if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard) 
             & (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit) 
                 | (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__sticky)) 
                | vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m 
                = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m));
            if ((0xffffffU == vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m)) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e)));
            }
        }
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 0xbU;
    } else if ((0xbU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z 
            = ((0xff800000U & vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z) 
               | (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m));
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 0xcU;
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z 
            = ((0x7fffffU & vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z) 
               | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_s) 
                   << 0x1fU) | (0x7f800000U & (((IData)(0x7fU) 
                                                + (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e)) 
                                               << 0x17U))));
        if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e))) 
             & (~ (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m 
                   >> 0x17U)))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z 
                = (0x807fffffU & vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z);
        }
        if (VL_LTS_III(32, 0x7fU, VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e)))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z 
                = (0x7f800000U | ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_s) 
                                  << 0x1fU));
        }
    } else if ((0xcU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state))) {
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb = 1U;
        vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z 
            = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z;
        if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb) 
             & ((2U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__aluop_FU)) 
                & (IData)(vlSelf->__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE)))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb = 0U;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 0U;
        }
    }
    if (((((((((0U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state)))) {
        if ((0U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack = 1U;
            if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack) 
                 & ((1U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__aluop_FU)) 
                    & ((IData)(vlSelf->__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                       >> 1U)))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a 
                    = vlSelf->__PVT__my_DE_stage__DOT__op1_DE;
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack = 0U;
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack = 1U;
            if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack) 
                 & ((1U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__aluop_FU)) 
                    & ((IData)(vlSelf->__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                       >> 2U)))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b 
                    = vlSelf->__PVT__my_DE_stage__DOT__op2_DE;
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack = 0U;
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m 
                = (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a);
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m 
                = (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b);
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 3U;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e 
                = (0x3ffU & ((0xffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a 
                                       >> 0x17U)) - (IData)(0x7fU)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e 
                = (0x3ffU & ((0xffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b 
                                       >> 0x17U)) - (IData)(0x7fU)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s 
                = (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a 
                   >> 0x1fU);
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s 
                = (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b 
                   >> 0x1fU);
        } else if ((3U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
            if ((((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e)) 
                  & (0U != vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m)) 
                 | ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e)) 
                    & (0U != vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m)))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z = 0xffc00000U;
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xeU;
            } else if (((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e)) 
                        & (0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e)))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z = 0xffc00000U;
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xeU;
            } else if ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s) 
                                       ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s)) 
                                      << 0x1fU));
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xeU;
            } else if ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z 
                    = (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s) 
                        ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s)) 
                       << 0x1fU);
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xeU;
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e))) 
                        & (0U == vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z 
                    = (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s) 
                        ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s)) 
                       << 0x1fU);
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xeU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e))) 
                     & (0U == vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m))) {
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z = 0xffc00000U;
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xeU;
                }
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e))) 
                        & (0U == vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m))) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s) 
                                       ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s)) 
                                      << 0x1fU));
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xeU;
            } else {
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e)))) {
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e = 0x382U;
                } else {
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m 
                        = (0x800000U | vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m);
                }
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e)))) {
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e = 0x382U;
                } else {
                    vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m 
                        = (0x800000U | vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m);
                }
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 4U;
            }
        } else if ((4U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
            if ((0x800000U & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m)) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 5U;
            } else {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m 
                    = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m 
                                    << 1U));
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e 
                    = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e) 
                                 - (IData)(1U)));
            }
        } else if ((5U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
            if ((0x800000U & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m)) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 6U;
            } else {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m 
                    = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m 
                                    << 1U));
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e 
                    = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e) 
                                 - (IData)(1U)));
            }
        } else if ((6U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_s 
                = ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s) 
                   ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e 
                = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e) 
                             - (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient = 0ULL;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder = 0ULL;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__count = 0U;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__dividend 
                = (0x7ffffffffffffULL & ((QData)((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m)) 
                                         << 0x1bU));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__divisor 
                = (QData)((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 7U;
        } else {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient 
                = (0x7ffffffffffffULL & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient 
                                         << 1U));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder 
                = (0x7ffffffffffffULL & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder 
                                         << 1U));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 8U;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder 
                = ((0x7fffffffffffeULL & vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder) 
                   | (IData)((IData)((1U & (IData)(
                                                   (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__dividend 
                                                    >> 0x32U))))));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__dividend 
                = (0x7ffffffffffffULL & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__dividend 
                                         << 1U));
        }
    } else if ((8U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
        if ((vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder 
             >= vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__divisor)) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder 
                = (0x7ffffffffffffULL & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder 
                                         - vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__divisor));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient 
                = (1ULL | vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient);
        }
        if ((0x31U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__count))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 9U;
        } else {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__count 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__count)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 7U;
        }
    } else if ((9U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m 
            = (0xffffffU & (IData)((vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient 
                                    >> 3U)));
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xaU;
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard 
            = (1U & (IData)((vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient 
                             >> 2U)));
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit 
            = (1U & (IData)((vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient 
                             >> 1U)));
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__sticky 
            = (1U & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient) 
                     | (0ULL != vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder)));
    } else if ((0xaU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
        if (((~ (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m 
                 >> 0x17U)) & VL_LTS_III(32, 0xffffff82U, 
                                         VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e))))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e 
                = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e) 
                             - (IData)(1U)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m 
                = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m 
                                << 1U));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m 
                = ((0xfffffeU & vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m) 
                   | (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard 
                = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit = 0U;
        } else {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xbU;
        }
    } else if ((0xbU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
        if (VL_GTS_III(32, 0xffffff82U, VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e)))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e)));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m 
                = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m 
                                >> 1U));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__sticky 
                = ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__sticky) 
                   | (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit));
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit 
                = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard 
                = (1U & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m);
        } else {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xcU;
        }
    } else if ((0xcU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
        if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard) 
             & (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit) 
                 | (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__sticky)) 
                | vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m 
                = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m));
            if ((0xffffffU == vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m)) {
                vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e)));
            }
        }
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xdU;
    } else if ((0xdU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z 
            = ((0xff800000U & vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z) 
               | (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m));
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0xeU;
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z 
            = ((0x7fffffU & vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z) 
               | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_s) 
                   << 0x1fU) | (0x7f800000U & (((IData)(0x7fU) 
                                                + (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e)) 
                                               << 0x17U))));
        if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e))) 
             & (~ (vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m 
                   >> 0x17U)))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z 
                = (0x807fffffU & vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z);
        }
        if (VL_LTS_III(32, 0x7fU, VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e)))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z 
                = (0x7f800000U | ((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_s) 
                                  << 0x1fU));
        }
    } else if ((0xeU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state))) {
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb = 1U;
        vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z 
            = vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z;
        if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb) 
             & ((1U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__aluop_FU)) 
                & (IData)(vlSelf->__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE)))) {
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb = 0U;
            vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0U;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack = 0U;
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack = 0U;
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb = 0U;
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state = 0U;
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack = 0U;
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack = 0U;
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb = 0U;
        vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state = 0U;
    }
    my_DE_stage__DOT____VdfgTmp_hee75c7bd__0 = (IData)(
                                                       (0x3300U 
                                                        == 
                                                        (0x707f00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgTmp_h3be2a185__0 = (IData)(
                                                       (0x503300U 
                                                        == 
                                                        (0x707f00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgTmp_h18879c23__0 = (IData)(
                                                       ((0x100000U 
                                                         == 
                                                         (0x700000U 
                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                        & (0U 
                                                           == 
                                                           (0xfeU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))));
    my_DE_stage__DOT____VdfgTmp_hd110deda__0 = (IData)(
                                                       (0x501300U 
                                                        == 
                                                        (0x707f00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])));
    if ((1U & (~ ((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x17U))) 
                        | (2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x17U)))) 
                       | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x17U)))) 
                      | (4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x17U)))) 
                     | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x17U)))) 
                    | (6U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x17U)))) 
                   | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x17U)))) 
                  | (8U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     >> 0x17U))))))) {
        if ((1U & (~ ((((((((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x17U))) 
                            | (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x17U)))) 
                           | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x17U)))) 
                          | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x17U)))) 
                         | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x17U)))) 
                        | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x17U)))) 
                       | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x17U)))) 
                      | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x17U))))))) {
            if (((((((((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x17U))) 
                       | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x17U)))) 
                      | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x17U)))) 
                     | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x17U)))) 
                    | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x17U)))) 
                   | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x17U)))) 
                  | ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x17U))) 
                     | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x17U))))) 
                 | (0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x17U))))) {
                if ((0x11U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x17U)))) {
                    if ((0x12U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x17U)))) {
                        if ((0x13U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x17U)))) {
                            if ((0x14U != (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x17U)))) {
                                if ((0x15U != (0x3fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x17U)))) {
                                    if ((0x16U != (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x17U)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x17U))) 
                                                    | (0x1bU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                           >> 0x17U))))))) {
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
                    = ((0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x17U)))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0
                        : 0U);
            }
        }
    }
    if (((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0x17U))) | (2U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x17U)))) 
              | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 >> 0x17U)))) | (4U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x17U)))) 
            | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 0x17U)))) | (6U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x17U)))) 
          | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                             >> 0x17U)))) | (8U == 
                                             (0x3fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x17U))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0x17U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x17U)) 
                                               + ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 9U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x17U)))
                : ((2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0x17U))) ? (
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     << 9U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       >> 0x17U)) 
                                                   - 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 9U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x17U)))
                    : ((3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x17U)))
                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                             << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x17U)) & 
                           ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                             << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x17U))) : 
                       ((4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x17U)))
                         ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x17U)) 
                            | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 0x17U)))
                         : ((5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x17U)))
                             ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x17U)) 
                                ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                    << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x17U)))
                             : ((6U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x17U)))
                                 ? ((IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0)
                                     ? 1U : 0U) : (
                                                   (7U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x17U)))
                                                    ? 
                                                   ((IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   VL_SHIFTRS_III(32,32,5, 
                                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                    << 9U) 
                                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                      >> 0x17U)), 
                                                                  (0x1fU 
                                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      >> 0x17U))))))))));
    } else if (((((((((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x17U))) 
                      | (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x17U)))) 
                     | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x17U)))) 
                    | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x17U)))) 
                   | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x17U)))) 
                  | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x17U)))) 
                 | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x17U)))) 
                | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x17U))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0x17U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x17U)) 
                                               >> (0x1fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x17U)))
                : ((0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x17U))) ? 
                   (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                      << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x17U)) << (0x1fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x17U)))
                    : ((0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x17U)))
                        ? VL_MULS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 9U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x17U)), 
                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x17U)))
                        : ((0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x17U)))
                            ? my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0
                            : ((0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x17U)))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x17U)) 
                                   & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x17U)))
                                : ((0xeU == (0x3fU 
                                             & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x17U)))
                                    ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         << 9U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x17U)) 
                                       | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 9U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x17U)))
                                    : ((0xfU == (0x3fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x17U)))
                                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             << 9U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x17U)) 
                                           ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 9U) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x17U)))
                                        : (VL_LTS_III(32, 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        << 9U) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x17U)), 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 9U) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x17U)))
                                            ? 1U : 0U))))))));
    } else if (((((((((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x17U))) 
                      | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x17U)))) 
                     | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x17U)))) 
                    | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x17U)))) 
                   | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x17U)))) 
                  | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x17U)))) 
                 | ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x17U))) 
                    | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x17U))))) 
                | (0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x17U))))) {
        if ((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0x17U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                      << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x17U)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 9U) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x17U)))
                    ? 1U : 0U);
        } else if ((0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x17U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 9U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x17U)), 
                                 (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x17U)));
        } else if ((0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x17U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x17U)) >> (0x1fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x17U)));
        } else if ((0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x17U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x17U)) << (0x1fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x17U)));
        } else if ((0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x17U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                    << 9U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                              >> 0x17U));
        } else if ((0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x17U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0;
        } else if (((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x17U))) 
                    | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x17U))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                    << 3U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              >> 0x1dU));
        }
    } else {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0x17U))) ? ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 9U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x17U))
                : 0U);
    }
    my_AGEX_stage__DOT____VdfgTmp_hec15c38d__0 = ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x16U) 
                                                  & ((0x1cU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          >> 0x17U)))
                                                      ? 
                                                     (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        << 9U) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x17U)) 
                                                      == 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 9U) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x17U)))
                                                      : 
                                                     ((0x1dU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                           >> 0x17U)))
                                                       ? 
                                                      (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         << 9U) 
                                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                           >> 0x17U)) 
                                                       != 
                                                       ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         << 9U) 
                                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                           >> 0x17U)))
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                            >> 0x17U)))
                                                        ? (IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0)
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             >> 0x17U)))
                                                         ? 
                                                        VL_GTES_III(32, 
                                                                    ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                      << 9U) 
                                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                        >> 0x17U)), 
                                                                    ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                      << 9U) 
                                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                        >> 0x17U)))
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                              >> 0x17U)))
                                                          ? (IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0)
                                                          : (IData)(
                                                                    ((0x10800000U 
                                                                      == 
                                                                      (0x1f800000U 
                                                                       & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                     & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                          << 9U) 
                                                                         | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                            >> 0x17U)) 
                                                                        >= 
                                                                        ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                          << 9U) 
                                                                         | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                            >> 0x17U)))))))))));
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_s 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_s;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__sticky 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__sticky;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__state;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_s 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_s;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__count 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__count;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__dividend 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__dividend;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__divisor 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__divisor;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__sticky 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__sticky;
    vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb 
        = vlSelf->__Vdly__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb;
    vlSelf->__PVT__my_DE_stage__DOT__op1_DE = ((8U 
                                                & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])
                                                ? vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM
                                                : 0U);
    vlSelf->__PVT__my_DE_stage__DOT__op2_DE = ((4U 
                                                & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])
                                                ? vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM
                                                : 0U);
    vlSelf->__PVT__my_FU_stage__DOT__aluop_FU = ((0x10U 
                                                  & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])
                                                  ? 
                                                 (0xfU 
                                                  & vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM)
                                                  : 0U);
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgTmp_hee75c7bd__0) 
                                                 & (0U 
                                                    == 
                                                    (0xfeU 
                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                 ? 1U
                                                 : 
                                                (((IData)(my_DE_stage__DOT____VdfgTmp_hee75c7bd__0) 
                                                  & (0x40U 
                                                     == 
                                                     (0xfeU 
                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          ((0x703300U 
                                                            == 
                                                            (0x707f00U 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                           & (0U 
                                                              == 
                                                              (0xfeU 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           ((0x603300U 
                                                             == 
                                                             (0x707f00U 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                            & (0U 
                                                               == 
                                                               (0xfeU 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            ((0x403300U 
                                                              == 
                                                              (0x707f00U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                             & (0U 
                                                                == 
                                                                (0xfeU 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             ((0x203300U 
                                                               == 
                                                               (0x707f00U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0xfeU 
                                                                  & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              ((0x303300U 
                                                                == 
                                                                (0x707f00U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0xfeU 
                                                                   & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                       ? 7U
                                                       : 
                                                      (((IData)(my_DE_stage__DOT____VdfgTmp_h3be2a185__0) 
                                                        & (0x40U 
                                                           == 
                                                           (0xfeU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                        ? 8U
                                                        : 
                                                       (((IData)(my_DE_stage__DOT____VdfgTmp_h3be2a185__0) 
                                                         & (0U 
                                                            == 
                                                            (0xfeU 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                         ? 9U
                                                         : 
                                                        ((IData)(
                                                                 ((0x3300U 
                                                                   == 
                                                                   (0x7f00U 
                                                                    & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                  & (IData)(my_DE_stage__DOT____VdfgTmp_h18879c23__0)))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgTmp_hee75c7bd__0) 
                                                           & (2U 
                                                              == 
                                                              (0xfeU 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   (0x1300U 
                                                                    == 
                                                                    (0x707f00U 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    (0x701300U 
                                                                     == 
                                                                     (0x707f00U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     (0x601300U 
                                                                      == 
                                                                      (0x707f00U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      (0x401300U 
                                                                       == 
                                                                       (0x707f00U 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       (0x201300U 
                                                                        == 
                                                                        (0x707f00U 
                                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        (0x301300U 
                                                                         == 
                                                                         (0x707f00U 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(my_DE_stage__DOT____VdfgTmp_hd110deda__0) 
                                                                  & (0x40U 
                                                                     == 
                                                                     (0xfeU 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(my_DE_stage__DOT____VdfgTmp_hd110deda__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (0xfeU 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(
                                                                           ((0x1300U 
                                                                             == 
                                                                             (0x7f00U 
                                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                            & (IData)(my_DE_stage__DOT____VdfgTmp_h18879c23__0)))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 8U)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 8U)))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              (0x200300U 
                                                                               == 
                                                                               (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               (0x202300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 8U)))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x6700U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                (0x6300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                (0x106300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x406300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x506300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x606300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                (0x706300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                (0x207300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x107300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__my_FE_stage__DOT__do_brjmp_AGEX 
        = (1U & ((IData)(my_AGEX_stage__DOT____VdfgTmp_hec15c38d__0) 
                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                    >> 0x15U)));
    vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
        = ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 0x17U))) ? my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0
            : ((0x1aU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0x17U))) ? ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   << 9U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x17U))
                : ((0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x17U))) ? 
                   (0xfffffffeU & my_AGEX_stage__DOT____VdfgExtracted_h6b924261__0)
                    : ((IData)(my_AGEX_stage__DOT____VdfgTmp_hec15c38d__0)
                        ? my_AGEX_stage__DOT____VdfgExtracted_h4bb489a3__0
                        : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                            << 3U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x1dU))))));
    __Vtableidx1 = vlSelf->__PVT__my_DE_stage__DOT__op_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = Vpipeline__ConstPool__TABLE_h8d162c29_0
        [__Vtableidx1];
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = Vpipeline__ConstPool__TABLE_hbe980ec3_0[__Vtableidx1];
    __Vtableidx3 = (((0x1aU == (0x1fU & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 4U) | 
                                         (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1cU)))) 
                     << 6U) | (((0x1bU == (0x1fU & 
                                           ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x1cU)))) 
                                << 5U) | (((0x18U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           << 4U) | 
                                          (((0x1fU 
                                             == (0x1fU 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0xfU))) 
                                            << 3U) 
                                           | (((0x1eU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0xfU))) 
                                               << 2U) 
                                              | (((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0xfU))) 
                                                  << 1U) 
                                                 | (0x17U 
                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))));
    vlSelf->__PVT__my_DE_stage__DOT__is_op1_DE = Vpipeline__ConstPool__TABLE_hfb554e72_0
        [__Vtableidx3];
    vlSelf->__PVT__my_DE_stage__DOT__is_op2_DE = Vpipeline__ConstPool__TABLE_he5618b2b_0
        [__Vtableidx3];
    vlSelf->__PVT__my_DE_stage__DOT__is_op3_DE = Vpipeline__ConstPool__TABLE_hceeb58d8_0
        [__Vtableidx3];
    vlSelf->__PVT__my_DE_stage__DOT__is_aluop_DE = 
        Vpipeline__ConstPool__TABLE_he7e8f9c3_0[__Vtableidx3];
    vlSelf->__PVT__my_DE_stage__DOT__is_alu_out_DE 
        = Vpipeline__ConstPool__TABLE_h49c2c8c5_0[__Vtableidx3];
    vlSelf->__PVT__from_AGEX_to_DE = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_brjmp_AGEX) 
                                      & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                                         != ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 3U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1dU))));
    __Vtableidx2 = vlSelf->__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = Vpipeline__ConstPool__TABLE_hd5e700a3_0
        [__Vtableidx2];
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = Vpipeline__ConstPool__TABLE_h9093e326_0
        [__Vtableidx2];
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = ((
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_aluop_DE) 
                                                     | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_op1_DE) 
                                                        | (IData)(vlSelf->__PVT__my_DE_stage__DOT__is_op2_DE)))) 
                                                   | ((0x22U 
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
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))))))))))))))))))))))))) 
                                                  & (0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0xfU))));
    vlSelf->__PVT__from_DE_to_FE = ((((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                      & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                         >> (0x1fU 
                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x17U)))) 
                                     | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                        & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                           >> (0x1fU 
                                               & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x1cU)))))) 
                                    | (IData)(vlSelf->__PVT__from_AGEX_to_DE));
}
