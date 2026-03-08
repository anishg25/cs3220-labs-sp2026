// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+289,"clk", false,-1);
    tracep->declBit(c+290,"reset", false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+289,"clk", false,-1);
    tracep->declBit(c+290,"reset", false,-1);
    tracep->declBus(c+46,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+47,"FE_latch_out", false,-1, 136,0);
    tracep->declArray(c+52,"DE_latch_out", false,-1, 250,0);
    tracep->declArray(c+60,"AGEX_latch_out", false,-1, 144,0);
    tracep->declArray(c+65,"MEM_latch_out", false,-1, 140,0);
    tracep->declBus(c+70,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+71,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+331,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+332,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+74,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+331,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+75,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+333,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+333,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+332,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+334,"from_DE_to_FU", false,-1, 70,0);
    tracep->declQuad(c+337,"from_FU_to_DE", false,-1, 34,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+289,"clk", false,-1);
    tracep->declBit(c+290,"reset", false,-1);
    tracep->declBus(c+333,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+333,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declArray(c+52,"from_DE_latch", false,-1, 250,0);
    tracep->declArray(c+60,"AGEX_latch_out", false,-1, 144,0);
    tracep->declArray(c+71,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+74,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+60,"AGEX_latch", false,-1, 144,0);
    tracep->declArray(c+77,"AGEX_latch_contents", false,-1, 144,0);
    tracep->declBit(c+82,"valid_AGEX", false,-1);
    tracep->declBus(c+83,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+84,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+85,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+86,"pcnext_AGEX", false,-1, 31,0);
    tracep->declBus(c+87,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+88,"br_cond_AGEX", false,-1);
    tracep->declBit(c+89,"is_br_AGEX", false,-1);
    tracep->declBit(c+90,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+91,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+92,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+93,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+94,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+95,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+96,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+97,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+98,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+99,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+100,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+74,"br_mispred_AGEX", false,-1);
    tracep->declBit(c+101,"is_brjmp_AGEX", false,-1);
    tracep->declBit(c+102,"do_brjmp_AGEX", false,-1);
    tracep->declBus(c+103,"pc_xor_bhr_AGEX", false,-1, 7,0);
    tracep->declBit(c+104,"is_op3_AGEX", false,-1);
    tracep->declBit(c+105,"is_alu_out_AGEX", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+289,"clk", false,-1);
    tracep->declBit(c+290,"reset", false,-1);
    tracep->declArray(c+47,"from_FE_latch", false,-1, 136,0);
    tracep->declBus(c+74,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+331,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+75,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+70,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+337,"from_FU_to_DE", false,-1, 34,0);
    tracep->declArray(c+334,"from_DE_to_FU", false,-1, 70,0);
    tracep->declArray(c+52,"DE_latch_out", false,-1, 250,0);
    tracep->declArray(c+52,"DE_latch", false,-1, 250,0);
    tracep->declBit(c+106,"valid_DE", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+107,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+108,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+109,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+110,"pcnext_DE", false,-1, 31,0);
    tracep->declBus(c+111,"pc_xor_bhr_DE", false,-1, 7,0);
    tracep->declArray(c+36,"DE_latch_contents", false,-1, 250,0);
    tracep->declBus(c+112,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+113,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+114,"op_DE", false,-1, 6,0);
    tracep->declBus(c+115,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+116,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+117,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+118,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBit(c+119,"wr_reg_WB", false,-1);
    tracep->declBus(c+120,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+121,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+70,"pipeline_stall_DE", false,-1);
    tracep->declBus(c+122,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+123,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+124,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+44,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+45,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+125,"is_br_DE", false,-1);
    tracep->declBit(c+126,"is_jmp_DE", false,-1);
    tracep->declBit(c+127,"rd_mem_DE", false,-1);
    tracep->declBit(c+128,"wr_mem_DE", false,-1);
    tracep->declBit(c+129,"wr_reg_DE", false,-1);
    tracep->declBit(c+130,"use_rs1_DE", false,-1);
    tracep->declBit(c+131,"use_rs2_DE", false,-1);
    tracep->declBus(c+132,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+133,"has_data_hazards", false,-1);
    tracep->declBit(c+74,"br_mispred_AGEX", false,-1);
    tracep->declBit(c+134,"is_op1_DE", false,-1);
    tracep->declBit(c+135,"is_op2_DE", false,-1);
    tracep->declBit(c+136,"is_op3_DE", false,-1);
    tracep->declBit(c+137,"is_aluop_DE", false,-1);
    tracep->declBit(c+138,"is_alu_out_DE", false,-1);
    tracep->declBus(c+339,"CSR_ALU_OUT_DE", false,-1, 2,0);
    tracep->declBus(c+340,"CSR_ALU_IN_DE", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+289,"clk", false,-1);
    tracep->declBit(c+290,"reset", false,-1);
    tracep->declBus(c+70,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+71,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+331,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+332,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+47,"FE_latch_out", false,-1, 136,0);
    tracep->declArray(c+47,"FE_latch", false,-1, 136,0);
    tracep->declBit(c+139,"valid_FE", false,-1);
    tracep->declBus(c+140,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+141,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+142,"pcplus_FE", false,-1, 31,0);
    tracep->declBus(c+143,"pcnext_FE", false,-1, 31,0);
    tracep->declBit(c+70,"stall_pipe_FE", false,-1);
    tracep->declArray(c+144,"FE_latch_contents", false,-1, 136,0);
    tracep->declBit(c+74,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+100,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+101,"is_brjmp_AGEX", false,-1);
    tracep->declBit(c+102,"do_brjmp_AGEX", false,-1);
    tracep->declBus(c+103,"pc_xor_bhr_AGEX", false,-1, 7,0);
    tracep->declBus(c+84,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+149,"BHR", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+150+i*1,"BTB_TAG", true,(i+0), 25,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+166+i*1,"BTB_VALID", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+182+i*1,"BTB_TARGET", true,(i+0), 31,0);
    }
    tracep->declBus(c+198,"pc_xor_bhr_FE", false,-1, 7,0);
    tracep->declBit(c+199,"pht_pred", false,-1);
    tracep->declBus(c+200,"btb_tag_fetched", false,-1, 25,0);
    tracep->declBit(c+201,"btb_valid_fetched", false,-1);
    tracep->declBus(c+202,"btb_target_fetched", false,-1, 31,0);
    tracep->declBus(c+203,"num_brjmp", false,-1, 31,0);
    tracep->declBus(c+204,"mis_pred", false,-1, 31,0);
    tracep->declBus(c+205,"correct_pred", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FU_stage ");
    tracep->declBit(c+289,"clk", false,-1);
    tracep->declBit(c+290,"reset", false,-1);
    tracep->declArray(c+334,"from_DE_to_FU", false,-1, 70,0);
    tracep->declQuad(c+337,"from_FU_to_DE", false,-1, 34,0);
    tracep->declBus(c+341,"op1_FU", false,-1, 31,0);
    tracep->declBus(c+342,"op2_FU", false,-1, 31,0);
    tracep->declBus(c+206,"op3_FU", false,-1, 31,0);
    tracep->declBus(c+343,"aluop_FU", false,-1, 3,0);
    tracep->declBus(c+207,"CSR_ALU_OUT_FU", false,-1, 2,0);
    tracep->declBus(c+344,"CSR_ALU_IN_FU", false,-1, 2,0);
    tracep->pushNamePrefix("fpu ");
    tracep->declBit(c+289,"clk", false,-1);
    tracep->declBit(c+290,"rst", false,-1);
    tracep->declBus(c+341,"OP1", false,-1, 31,0);
    tracep->declBus(c+342,"OP2", false,-1, 31,0);
    tracep->declBus(c+206,"OP3", false,-1, 31,0);
    tracep->declBus(c+343,"ALUOP", false,-1, 3,0);
    tracep->declBus(c+207,"CSR_ALU_OUT", false,-1, 2,0);
    tracep->declBus(c+344,"CSR_ALU_IN", false,-1, 2,0);
    tracep->declBit(c+208,"div_input_a_ack", false,-1);
    tracep->declBit(c+209,"div_input_b_ack", false,-1);
    tracep->declBit(c+210,"mult_input_a_ack", false,-1);
    tracep->declBit(c+211,"mult_input_b_ack", false,-1);
    tracep->declBit(c+345,"div_output_z_ack", false,-1);
    tracep->declBit(c+346,"mult_output_z_ack", false,-1);
    tracep->declBit(c+347,"div_input_a_stb", false,-1);
    tracep->declBit(c+348,"div_input_b_stb", false,-1);
    tracep->declBit(c+349,"mult_input_a_stb", false,-1);
    tracep->declBit(c+350,"mult_input_b_stb", false,-1);
    tracep->declBit(c+212,"div_output_z_stb", false,-1);
    tracep->declBit(c+213,"mult_output_z_stb", false,-1);
    tracep->declBit(c+214,"ALU_ready_1", false,-1);
    tracep->declBit(c+215,"ALU_ready_2", false,-1);
    tracep->declBit(c+216,"ALU_resutls_valid", false,-1);
    tracep->declBus(c+217,"div_output_z", false,-1, 31,0);
    tracep->declBus(c+218,"mult_output_z", false,-1, 31,0);
    tracep->pushNamePrefix("div0 ");
    tracep->declBit(c+289,"clk", false,-1);
    tracep->declBit(c+290,"rst", false,-1);
    tracep->declBus(c+341,"input_a", false,-1, 31,0);
    tracep->declBit(c+347,"input_a_stb", false,-1);
    tracep->declBit(c+208,"input_a_ack", false,-1);
    tracep->declBus(c+342,"input_b", false,-1, 31,0);
    tracep->declBit(c+348,"input_b_stb", false,-1);
    tracep->declBit(c+209,"input_b_ack", false,-1);
    tracep->declBus(c+217,"output_z", false,-1, 31,0);
    tracep->declBit(c+212,"output_z_stb", false,-1);
    tracep->declBit(c+345,"output_z_ack", false,-1);
    tracep->declBit(c+212,"s_output_z_stb", false,-1);
    tracep->declBus(c+217,"s_output_z", false,-1, 31,0);
    tracep->declBit(c+208,"s_input_a_ack", false,-1);
    tracep->declBit(c+209,"s_input_b_ack", false,-1);
    tracep->declBus(c+219,"state", false,-1, 3,0);
    tracep->declBus(c+333,"get_a", false,-1, 3,0);
    tracep->declBus(c+351,"get_b", false,-1, 3,0);
    tracep->declBus(c+352,"unpack", false,-1, 3,0);
    tracep->declBus(c+353,"special_cases", false,-1, 3,0);
    tracep->declBus(c+354,"normalise_a", false,-1, 3,0);
    tracep->declBus(c+355,"normalise_b", false,-1, 3,0);
    tracep->declBus(c+356,"divide_0", false,-1, 3,0);
    tracep->declBus(c+357,"divide_1", false,-1, 3,0);
    tracep->declBus(c+358,"divide_2", false,-1, 3,0);
    tracep->declBus(c+359,"divide_3", false,-1, 3,0);
    tracep->declBus(c+360,"normalise_1", false,-1, 3,0);
    tracep->declBus(c+361,"normalise_2", false,-1, 3,0);
    tracep->declBus(c+362,"round", false,-1, 3,0);
    tracep->declBus(c+363,"pack", false,-1, 3,0);
    tracep->declBus(c+364,"put_z", false,-1, 3,0);
    tracep->declBus(c+220,"a", false,-1, 31,0);
    tracep->declBus(c+221,"b", false,-1, 31,0);
    tracep->declBus(c+222,"z", false,-1, 31,0);
    tracep->declBus(c+223,"a_m", false,-1, 23,0);
    tracep->declBus(c+224,"b_m", false,-1, 23,0);
    tracep->declBus(c+225,"z_m", false,-1, 23,0);
    tracep->declBus(c+226,"a_e", false,-1, 9,0);
    tracep->declBus(c+227,"b_e", false,-1, 9,0);
    tracep->declBus(c+228,"z_e", false,-1, 9,0);
    tracep->declBit(c+229,"a_s", false,-1);
    tracep->declBit(c+230,"b_s", false,-1);
    tracep->declBit(c+231,"z_s", false,-1);
    tracep->declBit(c+232,"guard", false,-1);
    tracep->declBit(c+233,"round_bit", false,-1);
    tracep->declBit(c+234,"sticky", false,-1);
    tracep->declQuad(c+235,"quotient", false,-1, 50,0);
    tracep->declQuad(c+237,"divisor", false,-1, 50,0);
    tracep->declQuad(c+239,"dividend", false,-1, 50,0);
    tracep->declQuad(c+241,"remainder", false,-1, 50,0);
    tracep->declBus(c+243,"count", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mult0 ");
    tracep->declBit(c+289,"clk", false,-1);
    tracep->declBit(c+290,"rst", false,-1);
    tracep->declBus(c+341,"input_a", false,-1, 31,0);
    tracep->declBit(c+349,"input_a_stb", false,-1);
    tracep->declBit(c+210,"input_a_ack", false,-1);
    tracep->declBus(c+342,"input_b", false,-1, 31,0);
    tracep->declBit(c+350,"input_b_stb", false,-1);
    tracep->declBit(c+211,"input_b_ack", false,-1);
    tracep->declBus(c+218,"output_z", false,-1, 31,0);
    tracep->declBit(c+213,"output_z_stb", false,-1);
    tracep->declBit(c+346,"output_z_ack", false,-1);
    tracep->declBit(c+213,"s_output_z_stb", false,-1);
    tracep->declBus(c+218,"s_output_z", false,-1, 31,0);
    tracep->declBit(c+210,"s_input_a_ack", false,-1);
    tracep->declBit(c+211,"s_input_b_ack", false,-1);
    tracep->declBus(c+244,"state", false,-1, 3,0);
    tracep->declBus(c+333,"get_a", false,-1, 3,0);
    tracep->declBus(c+351,"get_b", false,-1, 3,0);
    tracep->declBus(c+352,"unpack", false,-1, 3,0);
    tracep->declBus(c+353,"special_cases", false,-1, 3,0);
    tracep->declBus(c+354,"normalise_a", false,-1, 3,0);
    tracep->declBus(c+355,"normalise_b", false,-1, 3,0);
    tracep->declBus(c+356,"multiply_0", false,-1, 3,0);
    tracep->declBus(c+357,"multiply_1", false,-1, 3,0);
    tracep->declBus(c+358,"normalise_1", false,-1, 3,0);
    tracep->declBus(c+359,"normalise_2", false,-1, 3,0);
    tracep->declBus(c+360,"round", false,-1, 3,0);
    tracep->declBus(c+361,"pack", false,-1, 3,0);
    tracep->declBus(c+362,"put_z", false,-1, 3,0);
    tracep->declBus(c+245,"a", false,-1, 31,0);
    tracep->declBus(c+246,"b", false,-1, 31,0);
    tracep->declBus(c+247,"z", false,-1, 31,0);
    tracep->declBus(c+248,"a_m", false,-1, 23,0);
    tracep->declBus(c+249,"b_m", false,-1, 23,0);
    tracep->declBus(c+250,"z_m", false,-1, 23,0);
    tracep->declBus(c+251,"a_e", false,-1, 9,0);
    tracep->declBus(c+252,"b_e", false,-1, 9,0);
    tracep->declBus(c+253,"z_e", false,-1, 9,0);
    tracep->declBit(c+254,"a_s", false,-1);
    tracep->declBit(c+255,"b_s", false,-1);
    tracep->declBit(c+256,"z_s", false,-1);
    tracep->declBit(c+257,"guard", false,-1);
    tracep->declBit(c+258,"round_bit", false,-1);
    tracep->declBit(c+259,"sticky", false,-1);
    tracep->declQuad(c+260,"product", false,-1, 47,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+289,"clk", false,-1);
    tracep->declBit(c+290,"reset", false,-1);
    tracep->declBus(c+332,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+60,"from_AGEX_latch", false,-1, 144,0);
    tracep->declArray(c+65,"MEM_latch_out", false,-1, 140,0);
    tracep->declBus(c+331,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+331,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+333,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declArray(c+65,"MEM_latch", false,-1, 140,0);
    tracep->declBit(c+262,"valid_MEM", false,-1);
    tracep->declArray(c+263,"MEM_latch_contents", false,-1, 140,0);
    tracep->declBus(c+268,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+269,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+270,"PC_MEM", false,-1, 31,0);
    tracep->declBus(c+271,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+272,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+273,"aluout_MEM", false,-1, 31,0);
    tracep->declBit(c+274,"wr_mem_MEM", false,-1);
    tracep->declBit(c+275,"rd_mem_MEM", false,-1);
    tracep->declBus(c+276,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+277,"wr_reg_MEM", false,-1);
    tracep->declBit(c+365,"is_op1_MEM", false,-1);
    tracep->declBit(c+366,"is_op2_MEM", false,-1);
    tracep->declBit(c+278,"is_op3_MEM", false,-1);
    tracep->declBit(c+367,"is_aluop_MEM", false,-1);
    tracep->declBit(c+279,"is_alu_out_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+289,"clk", false,-1);
    tracep->declBit(c+290,"reset", false,-1);
    tracep->declArray(c+65,"from_MEM_latch", false,-1, 140,0);
    tracep->declBus(c+331,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+75,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+333,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+331,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+280,"valid_WB", false,-1);
    tracep->declBus(c+281,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+282,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+283,"op_I_WB", false,-1, 5,0);
    tracep->declBit(c+284,"wr_reg_WB", false,-1);
    tracep->declBus(c+285,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+286,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+287,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+288,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+291,"[0]", false,-1, 31,0);
    tracep->declBus(c+292,"[1]", false,-1, 31,0);
    tracep->declBus(c+293,"[2]", false,-1, 31,0);
    tracep->declBus(c+294,"[3]", false,-1, 31,0);
    tracep->declBus(c+295,"[4]", false,-1, 31,0);
    tracep->declBus(c+296,"[5]", false,-1, 31,0);
    tracep->declBus(c+297,"[6]", false,-1, 31,0);
    tracep->declBus(c+298,"[7]", false,-1, 31,0);
    tracep->declBus(c+299,"[8]", false,-1, 31,0);
    tracep->declBus(c+300,"[9]", false,-1, 31,0);
    tracep->declBus(c+301,"[10]", false,-1, 31,0);
    tracep->declBus(c+302,"[11]", false,-1, 31,0);
    tracep->declBus(c+303,"[12]", false,-1, 31,0);
    tracep->declBus(c+304,"[13]", false,-1, 31,0);
    tracep->declBus(c+305,"[14]", false,-1, 31,0);
    tracep->declBus(c+306,"[15]", false,-1, 31,0);
    tracep->declBus(c+307,"[16]", false,-1, 31,0);
    tracep->declBus(c+308,"[17]", false,-1, 31,0);
    tracep->declBus(c+309,"[18]", false,-1, 31,0);
    tracep->declBus(c+310,"[19]", false,-1, 31,0);
    tracep->declBus(c+311,"[20]", false,-1, 31,0);
    tracep->declBus(c+312,"[21]", false,-1, 31,0);
    tracep->declBus(c+313,"[22]", false,-1, 31,0);
    tracep->declBus(c+314,"[23]", false,-1, 31,0);
    tracep->declBus(c+315,"[24]", false,-1, 31,0);
    tracep->declBus(c+316,"[25]", false,-1, 31,0);
    tracep->declBus(c+317,"[26]", false,-1, 31,0);
    tracep->declBus(c+318,"[27]", false,-1, 31,0);
    tracep->declBus(c+319,"[28]", false,-1, 31,0);
    tracep->declBus(c+320,"[29]", false,-1, 31,0);
    tracep->declBus(c+321,"[30]", false,-1, 31,0);
    tracep->declBus(c+322,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+323,"[0]", false,-1, 31,0);
    tracep->declBus(c+324,"[1]", false,-1, 31,0);
    tracep->declBus(c+325,"[2]", false,-1, 31,0);
    tracep->declBus(c+326,"[3]", false,-1, 31,0);
    tracep->declBus(c+327,"[4]", false,-1, 31,0);
    tracep->declBus(c+328,"[5]", false,-1, 31,0);
    tracep->declBus(c+329,"[6]", false,-1, 31,0);
    tracep->declBus(c+330,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_top(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_top\n"); );
    // Body
    Vpipeline___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("pipeline ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__0(vlSelf, tracep);
    tracep->pushNamePrefix("my_WB_stage ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpipeline___024root__trace_register(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpipeline___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpipeline___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpipeline___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipeline___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h21efc1b1__0;
    VlWide<4>/*127:0*/ __Vtemp_hb1d472ce__0;
    VlWide<8>/*255:0*/ __Vtemp_hdf636e03__0;
    VlWide<3>/*95:0*/ __Vtemp_h5749e3c7__0;
    VlWide<5>/*159:0*/ __Vtemp_h88482838__0;
    VlWide<5>/*159:0*/ __Vtemp_h28d0e6a7__0;
    VlWide<5>/*159:0*/ __Vtemp_h2f818c3d__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+35,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[31]),32);
    __Vtemp_h21efc1b1__0[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? (((- (IData)((1U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 7U)))) 
                                     << 0xbU) | (0x7ffU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1cU))))
                                 : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 7U)))) 
                                         << 0xbU) | 
                                        ((0x7e0U & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 4U)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0xfU))))
                                     : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 7U)))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 4U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0xfU)))))
                                         : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (0xfffff000U 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0x18U) 
                                                   | (0xfff000U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 8U))))
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 7U)))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 8U)) 
                                                    | ((0x800U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x11U)) 
                                                       | (0x7feU 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 4U) 
                                                             | (0xeU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1cU)))))))
                                                 : 0U)))));
    __Vtemp_hb1d472ce__0[0U] = ((__Vtemp_h21efc1b1__0[0U] 
                                 << 0x14U) | ((((0x1cU 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                | ((0x1dU 
                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1eU 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((0x1fU 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((0x20U 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | (0x21U 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                               << 0x13U) 
                                              | ((((0x19U 
                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1aU 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | (0x1bU 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x12U) 
                                                 | (((0x17U 
                                                      == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     << 0x11U) 
                                                    | (((0x18U 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        << 0x10U) 
                                                       | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                           << 0xfU) 
                                                          | ((0x7c00U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 5U)) 
                                                             | ((0x3fcU 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                    << 2U)) 
                                                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_DE) 
                                                                    << 1U) 
                                                                   | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_alu_out_DE))))))))));
    __Vtemp_hdf636e03__0[0U] = __Vtemp_hb1d472ce__0[0U];
    __Vtemp_hdf636e03__0[1U] = ((__Vtemp_h21efc1b1__0[0U] 
                                 >> 0xcU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                       [
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x17U))])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                        [
                                                                        (0x1fU 
                                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 4U) 
                                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x1cU)))])))) 
                                             << 0x14U));
    __Vtemp_hdf636e03__0[2U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                           [
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x17U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                            [
                                                            (0x1fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 4U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1cU)))])))) 
                                 >> 0xcU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                        [
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x17U))])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                         [
                                                                         (0x1fU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 4U) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))]))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_hdf636e03__0[3U] = ((0xfc000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                << 0x12U)) 
                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                    << 0x14U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                            [
                                                                            (0x1fU 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x17U))])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                             [
                                                                             (0x1fU 
                                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))]))) 
                                                          >> 0x20U)) 
                                                 >> 0xcU)));
    __Vtemp_hdf636e03__0[4U] = (((0x3fc0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                << 0x12U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                    >> 0xeU)) | (0xfc000000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                    << 0x12U)));
    __Vtemp_hdf636e03__0[5U] = (((0x3fc0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                << 0x12U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                    >> 0xeU)) | (0xfc000000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                    << 0x12U)));
    __Vtemp_hdf636e03__0[6U] = (((0x3fc0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                << 0x12U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0xeU)) | (0xfc000000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    << 0x12U)));
    __Vtemp_hdf636e03__0[7U] = (((0x3fc0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x12U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0xeU)) | (0x4000000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0x12U)));
    bufp->fullWData(oldp+36,(__Vtemp_hdf636e03__0),251);
    bufp->fullIData(oldp+44,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                             [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x17U))]),32);
    bufp->fullIData(oldp+45,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                             [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         << 4U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1cU)))]),32);
    bufp->fullIData(oldp+46,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
    bufp->fullWData(oldp+47,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),137);
    bufp->fullWData(oldp+52,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),251);
    bufp->fullWData(oldp+60,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),145);
    bufp->fullWData(oldp+65,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),141);
    bufp->fullBit(oldp+70,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
    __Vtemp_h5749e3c7__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                         << 0x29U) 
                                        | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                   >> 2U)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                  << 6U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                    >> 0x1aU))))))));
    __Vtemp_h5749e3c7__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                 << 0xaU) | (IData)(
                                                    ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                                       << 0x29U) 
                                                      | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                                >> 2U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                << 6U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                                >> 0x1aU))))))) 
                                                     >> 0x20U)));
    __Vtemp_h5749e3c7__0[2U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                 << 0xaU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                             >> 0x16U));
    bufp->fullWData(oldp+71,(__Vtemp_h5749e3c7__0),75);
    bufp->fullBit(oldp+74,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+75,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
    __Vtemp_h88482838__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 << 0xaU) | ((0x3fcU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 8U)) 
                                             | (3U 
                                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])));
    __Vtemp_h88482838__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 >> 0x16U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 0xaU));
    __Vtemp_h88482838__0[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 0x16U) | (0x3f0000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0xaU))) 
                                | ((0xfc00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0xaU)) 
                                   | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                               >> 0x20U)) 
                                      >> 0x16U)));
    __Vtemp_h88482838__0[3U] = ((0xffffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0xaU)) 
                                | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                    << 0x16U) | (0x3f0000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    >> 0xaU))));
    __Vtemp_h88482838__0[4U] = ((0xffffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0xaU)) 
                                | (0x10000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0xaU)));
    bufp->fullWData(oldp+77,(__Vtemp_h88482838__0),145);
    bufp->fullBit(oldp+82,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  >> 0x1aU))));
    bufp->fullIData(oldp+83,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         >> 0x1aU))),32);
    bufp->fullIData(oldp+84,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x1aU))),32);
    bufp->fullIData(oldp+85,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x1aU))),32);
    bufp->fullIData(oldp+86,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x1aU))),32);
    bufp->fullCData(oldp+87,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x14U))),6);
    bufp->fullBit(oldp+88,(((0x1cU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x14U)))
                             ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x14U)) 
                                == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x14U)))
                             : ((0x1dU == (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x14U)))
                                 ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x14U)) 
                                    != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0xcU) | 
                                        (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         >> 0x14U)))
                                 : ((0x1eU == (0x3fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x14U)))
                                     ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0)
                                     : ((0x1fU == (0x3fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x14U)))
                                         ? VL_GTES_III(32, 
                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         << 0xcU) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                           >> 0x14U)), 
                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         << 0xcU) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                           >> 0x14U)))
                                         : ((0x20U 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    >> 0x14U)))
                                             ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0)
                                             : (IData)(
                                                       ((0x2100000U 
                                                         == 
                                                         (0x3f00000U 
                                                          & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                        & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                             << 0xcU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                               >> 0x14U)) 
                                                           >= 
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                             << 0xcU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                               >> 0x14U))))))))))));
    bufp->fullBit(oldp+89,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x13U))));
    bufp->fullBit(oldp+90,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x12U))));
    bufp->fullBit(oldp+91,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+92,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+93,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0xfU))));
    bufp->fullCData(oldp+94,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 0xaU))),5);
    bufp->fullIData(oldp+95,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+96,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+97,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
    bufp->fullBit(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
    bufp->fullCData(oldp+103,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 2U))),8);
    bufp->fullBit(oldp+104,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+105,((1U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])));
    bufp->fullBit(oldp+106,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   >> 8U))));
    bufp->fullIData(oldp+107,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+108,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+109,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+110,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+111,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),8);
    bufp->fullCData(oldp+112,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     >> 0x14U))),3);
    bufp->fullCData(oldp+113,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        >> 1U))),7);
    bufp->fullCData(oldp+114,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 8U))),7);
    bufp->fullCData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+118,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                ? (((- (IData)((1U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 7U)))) 
                                    << 0xbU) | (0x7ffU 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x1cU))))
                                : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 7U)))) 
                                        << 0xbU) | 
                                       ((0x7e0U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 4U)) 
                                        | (0x1fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0xfU))))
                                    : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 7U)))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U)) 
                                                 | (0x1eU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0xfU)))))
                                        : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                            ? (0xfffff000U 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0x18U) 
                                                  | (0xfff000U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 8U))))
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   >> 7U)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 8U)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x11U)) 
                                                         | (0x7feU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 4U) 
                                                               | (0xeU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x1cU)))))))
                                                : 0U)))))),32);
    bufp->fullBit(oldp+119,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+120,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+121,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullCData(oldp+122,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x17U))),5);
    bufp->fullCData(oldp+123,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         << 4U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1cU)))),5);
    bufp->fullCData(oldp+124,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+125,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                             | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                   | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                      | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                         | (0x21U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+126,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                             | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+127,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+128,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullIData(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+133,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                 >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x17U)))) 
                             | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1cU))))))));
    bufp->fullBit(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op1_DE));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op2_DE));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_DE));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_aluop_DE));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_alu_out_DE));
    bufp->fullBit(oldp+139,((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)));
    bufp->fullIData(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE),32);
    bufp->fullIData(oldp+142,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE),32);
    __Vtemp_h28d0e6a7__0[0U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE 
                                 << 8U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE));
    __Vtemp_h28d0e6a7__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE 
                                 >> 0x18U) | (((IData)(4U) 
                                               + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                              << 8U));
    __Vtemp_h28d0e6a7__0[2U] = ((((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                              << 8U));
    __Vtemp_h28d0e6a7__0[3U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h28d0e6a7__0[4U] = (((IData)((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                 << 8U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                    >> 0x20U)) 
                                           >> 0x18U));
    bufp->fullWData(oldp+144,(__Vtemp_h28d0e6a7__0),137);
    bufp->fullCData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[0]),26);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[1]),26);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[2]),26);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[3]),26);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[4]),26);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[5]),26);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[6]),26);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[7]),26);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[8]),26);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[9]),26);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[10]),26);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[11]),26);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[12]),26);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[13]),26);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[14]),26);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[15]),26);
    bufp->fullBit(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[0]));
    bufp->fullBit(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[1]));
    bufp->fullBit(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[2]));
    bufp->fullBit(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[3]));
    bufp->fullBit(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[4]));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[5]));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[6]));
    bufp->fullBit(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[7]));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[8]));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[9]));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[10]));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[11]));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[12]));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[13]));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[14]));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[15]));
    bufp->fullIData(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[0]),32);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[1]),32);
    bufp->fullIData(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[2]),32);
    bufp->fullIData(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[3]),32);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[4]),32);
    bufp->fullIData(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[5]),32);
    bufp->fullIData(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[6]),32);
    bufp->fullIData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[7]),32);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[8]),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[9]),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[10]),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[11]),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[12]),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[13]),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[14]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[15]),32);
    bufp->fullCData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE),8);
    bufp->fullBit(oldp+199,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                             [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE])));
    bufp->fullIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),26);
    bufp->fullBit(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID
                            [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                      >> 2U))]));
    bufp->fullIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred),32);
    bufp->fullIData(oldp+205,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp 
                               - vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred)),32);
    bufp->fullIData(oldp+206,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z)),32);
    bufp->fullCData(oldp+207,(((((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                  ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb)
                                  : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb)) 
                                << 2U) | ((((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                             ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack)
                                             : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack)) 
                                           << 1U) | 
                                          ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                            ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack)
                                            : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack))))),3);
    bufp->fullBit(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+211,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb));
    bufp->fullBit(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb));
    bufp->fullBit(oldp+214,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                              ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack)
                              : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack))));
    bufp->fullBit(oldp+215,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                              ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack)
                              : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack))));
    bufp->fullBit(oldp+216,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                              ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb)
                              : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb))));
    bufp->fullIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z),32);
    bufp->fullCData(oldp+219,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state),4);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m),24);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m),24);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m),24);
    bufp->fullSData(oldp+226,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e),10);
    bufp->fullSData(oldp+227,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e),10);
    bufp->fullSData(oldp+228,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e),10);
    bufp->fullBit(oldp+229,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s));
    bufp->fullBit(oldp+230,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s));
    bufp->fullBit(oldp+231,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_s));
    bufp->fullBit(oldp+232,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard));
    bufp->fullBit(oldp+233,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit));
    bufp->fullBit(oldp+234,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__sticky));
    bufp->fullQData(oldp+235,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient),51);
    bufp->fullQData(oldp+237,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__divisor),51);
    bufp->fullQData(oldp+239,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__dividend),51);
    bufp->fullQData(oldp+241,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder),51);
    bufp->fullCData(oldp+243,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__count),6);
    bufp->fullCData(oldp+244,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state),4);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m),24);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m),24);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m),24);
    bufp->fullSData(oldp+251,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e),10);
    bufp->fullSData(oldp+252,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e),10);
    bufp->fullSData(oldp+253,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e),10);
    bufp->fullBit(oldp+254,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s));
    bufp->fullBit(oldp+255,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s));
    bufp->fullBit(oldp+256,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_s));
    bufp->fullBit(oldp+257,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard));
    bufp->fullBit(oldp+258,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit));
    bufp->fullBit(oldp+259,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__sticky));
    bufp->fullQData(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product),48);
    bufp->fullBit(oldp+262,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   >> 0x10U))));
    __Vtemp_h2f818c3d__0[0U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               >> 0xcU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x16U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 0xaU)))))) 
                                 << 6U) | (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                            >> 2U)));
    __Vtemp_h2f818c3d__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               >> 0xcU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x16U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 0xaU)))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x3fffU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                             >> 0xcU))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                            << 0x16U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                              >> 0xaU))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h2f818c3d__0[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                  << 0x1cU) | (0xfffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                  >> 4U))) 
                                | ((IData)(((((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                              [
                                                              (0x3fffU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                  >> 0xcU))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                 << 0x16U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                   >> 0xaU))))) 
                                            >> 0x20U)) 
                                   >> 0x1aU));
    __Vtemp_h2f818c3d__0[3U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                          >> 4U)) | 
                                ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                  << 0x1cU) | (0xfffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 4U))));
    __Vtemp_h2f818c3d__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                          >> 4U)) | 
                                (0x1fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                            >> 4U)));
    bufp->fullWData(oldp+263,(__Vtemp_h2f818c3d__0),141);
    bufp->fullCData(oldp+268,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                        >> 0xaU))),6);
    bufp->fullIData(oldp+269,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0x10U))),32);
    bufp->fullIData(oldp+270,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 0x10U))),32);
    bufp->fullIData(oldp+271,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 0xaU))),32);
    bufp->fullIData(oldp+272,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xcU))]),32);
    bufp->fullIData(oldp+273,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                             >> 0xaU))),32);
    bufp->fullBit(oldp+274,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+275,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 9U))));
    bufp->fullCData(oldp+276,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                        >> 2U))),5);
    bufp->fullBit(oldp+277,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+278,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+279,((1U & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])));
    bufp->fullBit(oldp+280,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+281,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+282,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 0xcU))),32);
    bufp->fullCData(oldp+283,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                        >> 6U))),6);
    bufp->fullBit(oldp+284,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+285,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+286,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+287,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+288,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+289,(vlSelf->clk));
    bufp->fullBit(oldp+290,(vlSelf->reset));
    bufp->fullIData(oldp+291,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+292,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+293,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+294,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+295,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+296,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+297,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+298,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+299,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+300,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+302,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+303,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+305,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+310,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+311,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+312,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+313,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+314,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+315,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+317,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+318,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+319,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+320,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+321,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+322,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+323,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+325,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+326,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+327,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+328,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+329,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->fullBit(oldp+331,(0U));
    bufp->fullBit(oldp+332,(0U));
    bufp->fullCData(oldp+333,(0U),4);
    bufp->fullWData(oldp+334,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FU),71);
    bufp->fullQData(oldp+337,(vlSymsp->TOP__pipeline.__PVT__from_FU_to_DE),35);
    bufp->fullCData(oldp+339,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT_DE),3);
    bufp->fullCData(oldp+340,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE),3);
    bufp->fullIData(oldp+341,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__op1_FU),32);
    bufp->fullIData(oldp+342,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__op2_FU),32);
    bufp->fullCData(oldp+343,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU),4);
    bufp->fullCData(oldp+344,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__CSR_ALU_IN_FU),3);
    bufp->fullBit(oldp+345,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__CSR_ALU_IN_FU))));
    bufp->fullBit(oldp+346,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__CSR_ALU_IN_FU))));
    bufp->fullBit(oldp+347,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__CSR_ALU_IN_FU) 
                                >> 1U))));
    bufp->fullBit(oldp+348,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__CSR_ALU_IN_FU) 
                                >> 2U))));
    bufp->fullBit(oldp+349,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__CSR_ALU_IN_FU) 
                                >> 1U))));
    bufp->fullBit(oldp+350,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__CSR_ALU_IN_FU) 
                                >> 2U))));
    bufp->fullCData(oldp+351,(1U),4);
    bufp->fullCData(oldp+352,(2U),4);
    bufp->fullCData(oldp+353,(3U),4);
    bufp->fullCData(oldp+354,(4U),4);
    bufp->fullCData(oldp+355,(5U),4);
    bufp->fullCData(oldp+356,(6U),4);
    bufp->fullCData(oldp+357,(7U),4);
    bufp->fullCData(oldp+358,(8U),4);
    bufp->fullCData(oldp+359,(9U),4);
    bufp->fullCData(oldp+360,(0xaU),4);
    bufp->fullCData(oldp+361,(0xbU),4);
    bufp->fullCData(oldp+362,(0xcU),4);
    bufp->fullCData(oldp+363,(0xdU),4);
    bufp->fullCData(oldp+364,(0xeU),4);
    bufp->fullBit(oldp+365,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__is_op1_MEM));
    bufp->fullBit(oldp+366,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__is_op2_MEM));
    bufp->fullBit(oldp+367,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__is_aluop_MEM));
}
