// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline_FE_STAGE.h"

VL_INLINE_OPT void Vpipeline_FE_STAGE___nba_sequent__TOP__pipeline__my_FE_stage__1(Vpipeline_FE_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_FE_STAGE___nba_sequent__TOP__pipeline__my_FE_stage__1\n"); );
    // Body
    vlSelf->__PVT__FE_latch[0U] = vlSelf->__Vdly__FE_latch[0U];
    vlSelf->__PVT__FE_latch[1U] = vlSelf->__Vdly__FE_latch[1U];
    vlSelf->__PVT__FE_latch[2U] = vlSelf->__Vdly__FE_latch[2U];
    vlSelf->__PVT__FE_latch[3U] = vlSelf->__Vdly__FE_latch[3U];
    vlSelf->__PVT__FE_latch[4U] = vlSelf->__Vdly__FE_latch[4U];
    vlSelf->__PVT__FE_latch[5U] = vlSelf->__Vdly__FE_latch[5U];
}
