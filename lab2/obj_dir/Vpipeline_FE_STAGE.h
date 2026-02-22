// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipeline.h for the primary calling header

#ifndef VERILATED_VPIPELINE_FE_STAGE_H_
#define VERILATED_VPIPELINE_FE_STAGE_H_  // guard

#include "verilated.h"


class Vpipeline__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpipeline_FE_STAGE final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__from_DE_to_FE,0,0);
    VL_IN8(__PVT__from_MEM_to_FE,0,0);
    VL_IN8(__PVT__from_WB_to_FE,0,0);
    CData/*7:0*/ __PVT__BHR;
    CData/*7:0*/ __PVT__hash_FE;
    CData/*0:0*/ __PVT__prediction_FE;
    CData/*0:0*/ __PVT__BTB_hit;
    VL_INW(__PVT__from_AGEX_to_FE,75,0,3);
    VL_OUTW(__PVT__FE_latch_out,169,0,6);
    VlWide<6>/*169:0*/ __PVT__FE_latch;
    IData/*31:0*/ __PVT__PC_FE_latch;
    IData/*31:0*/ __PVT__inst_count_FE;
    IData/*31:0*/ __PVT__inst_count_AGEX;
    IData/*31:0*/ __PVT__inst_FE;
    IData/*31:0*/ __PVT__pcplus_FE;
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ __PVT__j;
    IData/*31:0*/ __PVT__predicted_target;
    IData/*31:0*/ correct_predictions;
    IData/*31:0*/ total_branches;
    VlWide<6>/*169:0*/ __Vdly__FE_latch;
    QData/*58:0*/ __VdfgTmp_hccac3553__0;
    VlUnpacked<IData/*31:0*/, 16384> __PVT__imem;
    VlUnpacked<CData/*1:0*/, 256> __PVT__PHT;
    VlUnpacked<QData/*58:0*/, 64> __PVT__BTB;

    // INTERNAL VARIABLES
    Vpipeline__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpipeline_FE_STAGE(Vpipeline__Syms* symsp, const char* v__name);
    ~Vpipeline_FE_STAGE();
    VL_UNCOPYABLE(Vpipeline_FE_STAGE);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
