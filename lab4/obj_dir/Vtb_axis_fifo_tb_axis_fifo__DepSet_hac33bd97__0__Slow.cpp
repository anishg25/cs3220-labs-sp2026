// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axis_fifo.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_axis_fifo__Syms.h"
#include "Vtb_axis_fifo__Syms.h"
#include "Vtb_axis_fifo_tb_axis_fifo.h"

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___stl_sequent__TOP__tb_axis_fifo__0(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___stl_sequent__TOP__tb_axis_fifo__0\n"); );
    // Body
    vlSelf->din_0_rsc_dat = vlSelf->__PVT__din_0_rsc_dat_reg;
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_write_data 
        = ((0x100000000ULL & vlSelf->__PVT__axis_fifo_inst__DOT__mem_write_data) 
           | (IData)((IData)(vlSelf->__PVT__din_0_rsc_dat_reg)));
    vlSelf->dout_0_rsc_dat = (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_data_reg);
    vlSelf->din_0_rsc_vld = vlSelf->__PVT__din_0_rsc_vld_reg;
    vlSelf->din_0_rsc_rdy = (1U & (~ ((((1U & ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg) 
                                               >> 4U)) 
                                        != (1U & ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg) 
                                                  >> 4U))) 
                                       & (((1U & ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg) 
                                                  >> 3U)) 
                                           != (1U & 
                                               ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg) 
                                                >> 3U))) 
                                          & ((7U & (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg)) 
                                             == (7U 
                                                 & (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg))))) 
                                      | (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg))));
    vlSelf->__PVT__axis_fifo_inst__DOT__empty = ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg) 
                                                 == (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg));
    vlSelf->dout_0_rsc_rdy = vlSelf->__PVT__dout_0_rsc_rdy_reg;
    vlSelf->dout_0_rsc_vld = vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    vlSelf->__PVT__axis_fifo_inst__DOT__write = 0U;
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_reg;
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg;
    if ((((IData)(vlSymsp->TOP.reset) & (IData)(vlSelf->din_0_rsc_rdy)) 
         & (IData)(vlSelf->din_0_rsc_vld))) {
        vlSelf->__PVT__axis_fifo_inst__DOT__write = 1U;
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_reg)));
        vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next 
            = (0x1fU & ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next) 
                        ^ ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next) 
                           >> 1U)));
    }
    vlSelf->__PVT__axis_fifo_inst__DOT__store_output = 0U;
    vlSelf->__PVT__axis_fifo_inst__DOT__read = 0U;
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next 
        = (1U & ((~ (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__empty)) 
                 & ((IData)(vlSelf->dout_0_rsc_rdy) 
                    | (~ (IData)(vlSelf->dout_0_rsc_vld)))));
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    if ((1U & ((IData)(vlSelf->dout_0_rsc_rdy) | (~ (IData)(vlSelf->dout_0_rsc_vld))))) {
        vlSelf->__PVT__axis_fifo_inst__DOT__store_output = 1U;
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
            = vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
    }
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_reg;
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next 
        = vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg;
    if ((1U & ((~ (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__empty)) 
               & ((IData)(vlSelf->dout_0_rsc_rdy) | 
                  (~ (IData)(vlSelf->dout_0_rsc_vld)))))) {
        vlSelf->__PVT__axis_fifo_inst__DOT__read = 1U;
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_reg)));
        vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next 
            = (0x1fU & ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next) 
                        ^ ((IData)(vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next) 
                           >> 1U)));
    }
}
