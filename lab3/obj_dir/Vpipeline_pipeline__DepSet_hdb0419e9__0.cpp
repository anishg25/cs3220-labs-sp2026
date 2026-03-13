// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

VL_INLINE_OPT void Vpipeline_pipeline___nba_comb__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_comb__TOP__pipeline__0\n"); );
    // Body
    vlSelf->__PVT__my_DE_stage__DOT__op3_DE = ((1U 
                                                == 
                                                (0xfU 
                                                 & vlSelf->__PVT__my_DE_stage__DOT__aluop_DE))
                                                ? vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                                : vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z);
    vlSelf->__PVT__my_DE_stage__DOT__CSR_ALU_OUT_DE 
        = ((((1U == (0xfU & vlSelf->__PVT__my_DE_stage__DOT__aluop_DE))
              ? (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb)
              : (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb)) 
            << 2U) | ((((1U == (0xfU & vlSelf->__PVT__my_DE_stage__DOT__aluop_DE))
                         ? (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack)
                         : (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack)) 
                       << 1U) | ((1U == (0xfU & vlSelf->__PVT__my_DE_stage__DOT__aluop_DE))
                                  ? (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack)
                                  : (IData)(vlSelf->__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack))));
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
                                    | ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                       | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_op2_DE) 
                                           & ((3U != (IData)(vlSelf->__PVT__my_DE_stage__DOT__state)) 
                                              & (4U 
                                                 != (IData)(vlSelf->__PVT__my_DE_stage__DOT__state)))) 
                                          | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_op3_DE) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__my_DE_stage__DOT__state))))));
}
