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
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"reset", false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"reset", false,-1);
    tracep->declBus(c+47,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+48,"FE_latch_out", false,-1, 136,0);
    tracep->declArray(c+53,"DE_latch_out", false,-1, 285,0);
    tracep->declArray(c+62,"AGEX_latch_out", false,-1, 179,0);
    tracep->declArray(c+68,"MEM_latch_out", false,-1, 140,0);
    tracep->declBus(c+73,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+74,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+361,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+362,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+77,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+78,"from_MEM_to_DE", false,-1, 95,0);
    tracep->declQuad(c+81,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+363,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+363,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+362,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+83,"from_DE_to_FU", false,-1, 70,0);
    tracep->declQuad(c+86,"from_FU_to_DE", false,-1, 34,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"reset", false,-1);
    tracep->declBus(c+363,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+363,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declArray(c+53,"from_DE_latch", false,-1, 285,0);
    tracep->declArray(c+62,"AGEX_latch_out", false,-1, 179,0);
    tracep->declArray(c+74,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+77,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+62,"AGEX_latch", false,-1, 179,0);
    tracep->declArray(c+88,"AGEX_latch_contents", false,-1, 179,0);
    tracep->declBit(c+94,"valid_AGEX", false,-1);
    tracep->declBus(c+95,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+96,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+97,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+98,"pcnext_AGEX", false,-1, 31,0);
    tracep->declBus(c+99,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+100,"br_cond_AGEX", false,-1);
    tracep->declBit(c+101,"is_br_AGEX", false,-1);
    tracep->declBit(c+102,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+103,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+104,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+105,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+106,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+107,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+108,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+109,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+110,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+111,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+112,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+77,"br_mispred_AGEX", false,-1);
    tracep->declBit(c+113,"is_brjmp_AGEX", false,-1);
    tracep->declBit(c+114,"do_brjmp_AGEX", false,-1);
    tracep->declBus(c+115,"pc_xor_bhr_AGEX", false,-1, 7,0);
    tracep->declBit(c+116,"is_aluop_AGEX", false,-1);
    tracep->declBit(c+117,"is_op1_AGEX", false,-1);
    tracep->declBit(c+118,"is_op2_AGEX", false,-1);
    tracep->declBit(c+119,"is_op3_AGEX", false,-1);
    tracep->declBit(c+120,"is_alu_out_AGEX", false,-1);
    tracep->declBus(c+121,"op3_AGEX", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"reset", false,-1);
    tracep->declArray(c+48,"from_FE_latch", false,-1, 136,0);
    tracep->declBus(c+77,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+78,"from_MEM_to_DE", false,-1, 95,0);
    tracep->declQuad(c+81,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+73,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+86,"from_FU_to_DE", false,-1, 34,0);
    tracep->declArray(c+83,"from_DE_to_FU", false,-1, 70,0);
    tracep->declArray(c+53,"DE_latch_out", false,-1, 285,0);
    tracep->declBus(c+122,"aluop_DE", false,-1, 31,0);
    tracep->declBus(c+123,"op1_DE", false,-1, 31,0);
    tracep->declBus(c+124,"op2_DE", false,-1, 31,0);
    tracep->declBus(c+125,"op3_DE", false,-1, 31,0);
    tracep->declArray(c+53,"DE_latch", false,-1, 285,0);
    tracep->declBit(c+126,"valid_DE", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+127,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+128,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+129,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+130,"pcnext_DE", false,-1, 31,0);
    tracep->declBus(c+131,"pc_xor_bhr_DE", false,-1, 7,0);
    tracep->declArray(c+36,"DE_latch_contents", false,-1, 285,0);
    tracep->declBus(c+132,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+133,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+134,"op_DE", false,-1, 6,0);
    tracep->declBus(c+135,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+136,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+137,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+138,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBit(c+139,"wr_reg_WB", false,-1);
    tracep->declBus(c+140,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+141,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+73,"pipeline_stall_DE", false,-1);
    tracep->declBus(c+142,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+143,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+144,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+45,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+46,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+145,"is_br_DE", false,-1);
    tracep->declBit(c+146,"is_jmp_DE", false,-1);
    tracep->declBit(c+147,"rd_mem_DE", false,-1);
    tracep->declBit(c+148,"wr_mem_DE", false,-1);
    tracep->declBit(c+149,"wr_reg_DE", false,-1);
    tracep->declBit(c+150,"use_rs1_DE", false,-1);
    tracep->declBit(c+151,"use_rs2_DE", false,-1);
    tracep->declBus(c+152,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+153,"has_data_hazards", false,-1);
    tracep->declBit(c+77,"br_mispred_AGEX", false,-1);
    tracep->declBit(c+154,"is_op1_DE", false,-1);
    tracep->declBit(c+155,"is_op2_DE", false,-1);
    tracep->declBit(c+156,"is_op3_DE", false,-1);
    tracep->declBit(c+157,"is_aluop_DE", false,-1);
    tracep->declBit(c+158,"is_alu_out_DE", false,-1);
    tracep->declBus(c+159,"CSR_ALU_OUT_DE", false,-1, 2,0);
    tracep->declBus(c+364,"CSR_ALU_IN_DE", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"reset", false,-1);
    tracep->declBus(c+73,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+74,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+361,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+362,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+48,"FE_latch_out", false,-1, 136,0);
    tracep->declArray(c+48,"FE_latch", false,-1, 136,0);
    tracep->declBit(c+160,"valid_FE", false,-1);
    tracep->declBus(c+161,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+162,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+163,"pcplus_FE", false,-1, 31,0);
    tracep->declBus(c+164,"pcnext_FE", false,-1, 31,0);
    tracep->declBit(c+73,"stall_pipe_FE", false,-1);
    tracep->declArray(c+165,"FE_latch_contents", false,-1, 136,0);
    tracep->declBit(c+77,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+112,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+113,"is_brjmp_AGEX", false,-1);
    tracep->declBit(c+114,"do_brjmp_AGEX", false,-1);
    tracep->declBus(c+115,"pc_xor_bhr_AGEX", false,-1, 7,0);
    tracep->declBus(c+96,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+170,"BHR", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+171+i*1,"BTB_TAG", true,(i+0), 25,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+187+i*1,"BTB_VALID", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+203+i*1,"BTB_TARGET", true,(i+0), 31,0);
    }
    tracep->declBus(c+219,"pc_xor_bhr_FE", false,-1, 7,0);
    tracep->declBit(c+220,"pht_pred", false,-1);
    tracep->declBus(c+221,"btb_tag_fetched", false,-1, 25,0);
    tracep->declBit(c+222,"btb_valid_fetched", false,-1);
    tracep->declBus(c+223,"btb_target_fetched", false,-1, 31,0);
    tracep->declBus(c+224,"num_brjmp", false,-1, 31,0);
    tracep->declBus(c+225,"mis_pred", false,-1, 31,0);
    tracep->declBus(c+226,"correct_pred", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FU_stage ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"reset", false,-1);
    tracep->declArray(c+83,"from_DE_to_FU", false,-1, 70,0);
    tracep->declQuad(c+86,"from_FU_to_DE", false,-1, 34,0);
    tracep->declBus(c+123,"op1_FU", false,-1, 31,0);
    tracep->declBus(c+124,"op2_FU", false,-1, 31,0);
    tracep->declBus(c+227,"aluop_FU", false,-1, 3,0);
    tracep->declBus(c+125,"op3_FU", false,-1, 31,0);
    tracep->declBus(c+159,"CSR_ALU_OUT_FU", false,-1, 2,0);
    tracep->declBus(c+364,"CSR_ALU_IN_FU", false,-1, 2,0);
    tracep->pushNamePrefix("fpu ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+123,"OP1", false,-1, 31,0);
    tracep->declBus(c+124,"OP2", false,-1, 31,0);
    tracep->declBus(c+125,"OP3", false,-1, 31,0);
    tracep->declBus(c+227,"ALUOP", false,-1, 3,0);
    tracep->declBus(c+159,"CSR_ALU_OUT", false,-1, 2,0);
    tracep->declBus(c+364,"CSR_ALU_IN", false,-1, 2,0);
    tracep->declBit(c+228,"div_input_a_ack", false,-1);
    tracep->declBit(c+229,"div_input_b_ack", false,-1);
    tracep->declBit(c+230,"mult_input_a_ack", false,-1);
    tracep->declBit(c+231,"mult_input_b_ack", false,-1);
    tracep->declBit(c+232,"div_output_z_ack", false,-1);
    tracep->declBit(c+233,"mult_output_z_ack", false,-1);
    tracep->declBit(c+234,"div_input_a_stb", false,-1);
    tracep->declBit(c+235,"div_input_b_stb", false,-1);
    tracep->declBit(c+236,"mult_input_a_stb", false,-1);
    tracep->declBit(c+237,"mult_input_b_stb", false,-1);
    tracep->declBit(c+238,"div_output_z_stb", false,-1);
    tracep->declBit(c+239,"mult_output_z_stb", false,-1);
    tracep->declBit(c+240,"ALU_ready_1", false,-1);
    tracep->declBit(c+241,"ALU_ready_2", false,-1);
    tracep->declBit(c+242,"ALU_resutls_valid", false,-1);
    tracep->declBus(c+243,"div_output_z", false,-1, 31,0);
    tracep->declBus(c+244,"mult_output_z", false,-1, 31,0);
    tracep->pushNamePrefix("div0 ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+123,"input_a", false,-1, 31,0);
    tracep->declBit(c+234,"input_a_stb", false,-1);
    tracep->declBit(c+228,"input_a_ack", false,-1);
    tracep->declBus(c+124,"input_b", false,-1, 31,0);
    tracep->declBit(c+235,"input_b_stb", false,-1);
    tracep->declBit(c+229,"input_b_ack", false,-1);
    tracep->declBus(c+243,"output_z", false,-1, 31,0);
    tracep->declBit(c+238,"output_z_stb", false,-1);
    tracep->declBit(c+232,"output_z_ack", false,-1);
    tracep->declBit(c+238,"s_output_z_stb", false,-1);
    tracep->declBus(c+243,"s_output_z", false,-1, 31,0);
    tracep->declBit(c+228,"s_input_a_ack", false,-1);
    tracep->declBit(c+229,"s_input_b_ack", false,-1);
    tracep->declBus(c+245,"state", false,-1, 3,0);
    tracep->declBus(c+363,"get_a", false,-1, 3,0);
    tracep->declBus(c+365,"get_b", false,-1, 3,0);
    tracep->declBus(c+366,"unpack", false,-1, 3,0);
    tracep->declBus(c+367,"special_cases", false,-1, 3,0);
    tracep->declBus(c+368,"normalise_a", false,-1, 3,0);
    tracep->declBus(c+369,"normalise_b", false,-1, 3,0);
    tracep->declBus(c+370,"divide_0", false,-1, 3,0);
    tracep->declBus(c+371,"divide_1", false,-1, 3,0);
    tracep->declBus(c+372,"divide_2", false,-1, 3,0);
    tracep->declBus(c+373,"divide_3", false,-1, 3,0);
    tracep->declBus(c+374,"normalise_1", false,-1, 3,0);
    tracep->declBus(c+375,"normalise_2", false,-1, 3,0);
    tracep->declBus(c+376,"round", false,-1, 3,0);
    tracep->declBus(c+377,"pack", false,-1, 3,0);
    tracep->declBus(c+378,"put_z", false,-1, 3,0);
    tracep->declBus(c+246,"a", false,-1, 31,0);
    tracep->declBus(c+247,"b", false,-1, 31,0);
    tracep->declBus(c+248,"z", false,-1, 31,0);
    tracep->declBus(c+249,"a_m", false,-1, 23,0);
    tracep->declBus(c+250,"b_m", false,-1, 23,0);
    tracep->declBus(c+251,"z_m", false,-1, 23,0);
    tracep->declBus(c+252,"a_e", false,-1, 9,0);
    tracep->declBus(c+253,"b_e", false,-1, 9,0);
    tracep->declBus(c+254,"z_e", false,-1, 9,0);
    tracep->declBit(c+255,"a_s", false,-1);
    tracep->declBit(c+256,"b_s", false,-1);
    tracep->declBit(c+257,"z_s", false,-1);
    tracep->declBit(c+258,"guard", false,-1);
    tracep->declBit(c+259,"round_bit", false,-1);
    tracep->declBit(c+260,"sticky", false,-1);
    tracep->declQuad(c+261,"quotient", false,-1, 50,0);
    tracep->declQuad(c+263,"divisor", false,-1, 50,0);
    tracep->declQuad(c+265,"dividend", false,-1, 50,0);
    tracep->declQuad(c+267,"remainder", false,-1, 50,0);
    tracep->declBus(c+269,"count", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mult0 ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+123,"input_a", false,-1, 31,0);
    tracep->declBit(c+236,"input_a_stb", false,-1);
    tracep->declBit(c+230,"input_a_ack", false,-1);
    tracep->declBus(c+124,"input_b", false,-1, 31,0);
    tracep->declBit(c+237,"input_b_stb", false,-1);
    tracep->declBit(c+231,"input_b_ack", false,-1);
    tracep->declBus(c+244,"output_z", false,-1, 31,0);
    tracep->declBit(c+239,"output_z_stb", false,-1);
    tracep->declBit(c+233,"output_z_ack", false,-1);
    tracep->declBit(c+239,"s_output_z_stb", false,-1);
    tracep->declBus(c+244,"s_output_z", false,-1, 31,0);
    tracep->declBit(c+230,"s_input_a_ack", false,-1);
    tracep->declBit(c+231,"s_input_b_ack", false,-1);
    tracep->declBus(c+270,"state", false,-1, 3,0);
    tracep->declBus(c+363,"get_a", false,-1, 3,0);
    tracep->declBus(c+365,"get_b", false,-1, 3,0);
    tracep->declBus(c+366,"unpack", false,-1, 3,0);
    tracep->declBus(c+367,"special_cases", false,-1, 3,0);
    tracep->declBus(c+368,"normalise_a", false,-1, 3,0);
    tracep->declBus(c+369,"normalise_b", false,-1, 3,0);
    tracep->declBus(c+370,"multiply_0", false,-1, 3,0);
    tracep->declBus(c+371,"multiply_1", false,-1, 3,0);
    tracep->declBus(c+372,"normalise_1", false,-1, 3,0);
    tracep->declBus(c+373,"normalise_2", false,-1, 3,0);
    tracep->declBus(c+374,"round", false,-1, 3,0);
    tracep->declBus(c+375,"pack", false,-1, 3,0);
    tracep->declBus(c+376,"put_z", false,-1, 3,0);
    tracep->declBus(c+271,"a", false,-1, 31,0);
    tracep->declBus(c+272,"b", false,-1, 31,0);
    tracep->declBus(c+273,"z", false,-1, 31,0);
    tracep->declBus(c+274,"a_m", false,-1, 23,0);
    tracep->declBus(c+275,"b_m", false,-1, 23,0);
    tracep->declBus(c+276,"z_m", false,-1, 23,0);
    tracep->declBus(c+277,"a_e", false,-1, 9,0);
    tracep->declBus(c+278,"b_e", false,-1, 9,0);
    tracep->declBus(c+279,"z_e", false,-1, 9,0);
    tracep->declBit(c+280,"a_s", false,-1);
    tracep->declBit(c+281,"b_s", false,-1);
    tracep->declBit(c+282,"z_s", false,-1);
    tracep->declBit(c+283,"guard", false,-1);
    tracep->declBit(c+284,"round_bit", false,-1);
    tracep->declBit(c+285,"sticky", false,-1);
    tracep->declQuad(c+286,"product", false,-1, 47,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"reset", false,-1);
    tracep->declBus(c+362,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+62,"from_AGEX_latch", false,-1, 179,0);
    tracep->declArray(c+68,"MEM_latch_out", false,-1, 140,0);
    tracep->declBus(c+361,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declArray(c+78,"from_MEM_to_DE", false,-1, 95,0);
    tracep->declBus(c+363,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declArray(c+68,"MEM_latch", false,-1, 140,0);
    tracep->declBit(c+288,"valid_MEM", false,-1);
    tracep->declArray(c+289,"MEM_latch_contents", false,-1, 140,0);
    tracep->declBus(c+294,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+295,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+296,"PC_MEM", false,-1, 31,0);
    tracep->declBus(c+297,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+298,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+299,"aluout_MEM", false,-1, 31,0);
    tracep->declBit(c+300,"wr_mem_MEM", false,-1);
    tracep->declBus(c+123,"op1_MEM", false,-1, 31,0);
    tracep->declBus(c+124,"op2_MEM", false,-1, 31,0);
    tracep->declBus(c+122,"aluop_MEM", false,-1, 31,0);
    tracep->declBus(c+301,"op3_MEM", false,-1, 31,0);
    tracep->declBit(c+302,"rd_mem_MEM", false,-1);
    tracep->declBus(c+303,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+304,"wr_reg_MEM", false,-1);
    tracep->declBit(c+305,"is_op1_MEM", false,-1);
    tracep->declBit(c+306,"is_op2_MEM", false,-1);
    tracep->declBit(c+307,"is_op3_MEM", false,-1);
    tracep->declBit(c+308,"is_aluop_MEM", false,-1);
    tracep->declBit(c+309,"is_alu_out_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"reset", false,-1);
    tracep->declArray(c+68,"from_MEM_latch", false,-1, 140,0);
    tracep->declBus(c+361,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+81,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+363,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+361,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+310,"valid_WB", false,-1);
    tracep->declBus(c+311,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+312,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+313,"op_I_WB", false,-1, 5,0);
    tracep->declBit(c+314,"wr_reg_WB", false,-1);
    tracep->declBus(c+315,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+316,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+317,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+318,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+321,"[0]", false,-1, 31,0);
    tracep->declBus(c+322,"[1]", false,-1, 31,0);
    tracep->declBus(c+323,"[2]", false,-1, 31,0);
    tracep->declBus(c+324,"[3]", false,-1, 31,0);
    tracep->declBus(c+325,"[4]", false,-1, 31,0);
    tracep->declBus(c+326,"[5]", false,-1, 31,0);
    tracep->declBus(c+327,"[6]", false,-1, 31,0);
    tracep->declBus(c+328,"[7]", false,-1, 31,0);
    tracep->declBus(c+329,"[8]", false,-1, 31,0);
    tracep->declBus(c+330,"[9]", false,-1, 31,0);
    tracep->declBus(c+331,"[10]", false,-1, 31,0);
    tracep->declBus(c+332,"[11]", false,-1, 31,0);
    tracep->declBus(c+333,"[12]", false,-1, 31,0);
    tracep->declBus(c+334,"[13]", false,-1, 31,0);
    tracep->declBus(c+335,"[14]", false,-1, 31,0);
    tracep->declBus(c+336,"[15]", false,-1, 31,0);
    tracep->declBus(c+337,"[16]", false,-1, 31,0);
    tracep->declBus(c+338,"[17]", false,-1, 31,0);
    tracep->declBus(c+339,"[18]", false,-1, 31,0);
    tracep->declBus(c+340,"[19]", false,-1, 31,0);
    tracep->declBus(c+341,"[20]", false,-1, 31,0);
    tracep->declBus(c+342,"[21]", false,-1, 31,0);
    tracep->declBus(c+343,"[22]", false,-1, 31,0);
    tracep->declBus(c+344,"[23]", false,-1, 31,0);
    tracep->declBus(c+345,"[24]", false,-1, 31,0);
    tracep->declBus(c+346,"[25]", false,-1, 31,0);
    tracep->declBus(c+347,"[26]", false,-1, 31,0);
    tracep->declBus(c+348,"[27]", false,-1, 31,0);
    tracep->declBus(c+349,"[28]", false,-1, 31,0);
    tracep->declBus(c+350,"[29]", false,-1, 31,0);
    tracep->declBus(c+351,"[30]", false,-1, 31,0);
    tracep->declBus(c+352,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+353,"[0]", false,-1, 31,0);
    tracep->declBus(c+354,"[1]", false,-1, 31,0);
    tracep->declBus(c+355,"[2]", false,-1, 31,0);
    tracep->declBus(c+356,"[3]", false,-1, 31,0);
    tracep->declBus(c+357,"[4]", false,-1, 31,0);
    tracep->declBus(c+358,"[5]", false,-1, 31,0);
    tracep->declBus(c+359,"[6]", false,-1, 31,0);
    tracep->declBus(c+360,"[7]", false,-1, 31,0);
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
    VlWide<5>/*159:0*/ __Vtemp_h4c92d0f7__0;
    VlWide<9>/*287:0*/ __Vtemp_h33ecc51f__0;
    VlWide<3>/*95:0*/ __Vtemp_h0b91824f__0;
    VlWide<3>/*95:0*/ __Vtemp_h4b98151e__0;
    VlWide<3>/*95:0*/ __Vtemp_ha09738ae__0;
    VlWide<6>/*191:0*/ __Vtemp_hf4c3144e__0;
    VlWide<5>/*159:0*/ __Vtemp_h28d0e6a7__0;
    VlWide<5>/*159:0*/ __Vtemp_hff7a503d__0;
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
    __Vtemp_h4c92d0f7__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x1cU 
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
                                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            ((0x19U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                            << 0x35U) 
                                           | (((QData)((IData)(
                                                               (0x17U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  (0x18U 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0xfU)))) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))) 
                                                           << 0x25U) 
                                                          | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_aluop_DE)) 
                                                              << 0x24U) 
                                                             | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op1_DE)) 
                                                                 << 0x23U) 
                                                                | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op2_DE)) 
                                                                    << 0x22U) 
                                                                   | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_DE)) 
                                                                       << 0x21U) 
                                                                      | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_alu_out_DE)) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                ((1U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                                                 ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                                                                 : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z))))))))))))))));
    __Vtemp_h4c92d0f7__0[1U] = ((__Vtemp_h21efc1b1__0[0U] 
                                 << 0x17U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((0x1cU 
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
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                                        << 0x36U) 
                                                       | (((QData)((IData)(
                                                                           ((0x19U 
                                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1aU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | (0x1bU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              (0x17U 
                                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                              << 0x34U) 
                                                             | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                 << 0x33U) 
                                                                | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                    << 0x32U) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0xfU)))) 
                                                                       << 0x2dU) 
                                                                      | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))) 
                                                                          << 0x25U) 
                                                                         | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_aluop_DE)) 
                                                                             << 0x24U) 
                                                                            | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op1_DE)) 
                                                                                << 0x23U) 
                                                                               | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op2_DE)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_DE)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_alu_out_DE)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((1U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                                                 ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                                                                 : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h33ecc51f__0[0U] = __Vtemp_h4c92d0f7__0[0U];
    __Vtemp_h33ecc51f__0[1U] = __Vtemp_h4c92d0f7__0[1U];
    __Vtemp_h33ecc51f__0[2U] = ((__Vtemp_h21efc1b1__0[0U] 
                                 >> 9U) | ((IData)(
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
                                           << 0x17U));
    __Vtemp_h33ecc51f__0[3U] = (((IData)((((QData)((IData)(
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
                                 >> 9U) | ((IData)(
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
                                           << 0x17U));
    __Vtemp_h33ecc51f__0[4U] = ((0xe0000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                << 0x15U)) 
                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                    << 0x17U) | ((IData)(
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
                                                 >> 9U)));
    __Vtemp_h33ecc51f__0[5U] = (((0x1fe00000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                 << 0x15U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                    >> 0xbU)) | (0xe0000000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                    << 0x15U)));
    __Vtemp_h33ecc51f__0[6U] = (((0x1fe00000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                 << 0x15U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                    >> 0xbU)) | (0xe0000000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                    << 0x15U)));
    __Vtemp_h33ecc51f__0[7U] = (((0x1fe00000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 << 0x15U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0xbU)) | (0xe0000000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    << 0x15U)));
    __Vtemp_h33ecc51f__0[8U] = (((0x1fe00000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 0x15U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0xbU)) | (0x20000000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0x15U)));
    bufp->fullWData(oldp+36,(__Vtemp_h33ecc51f__0),286);
    bufp->fullIData(oldp+45,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                             [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x17U))]),32);
    bufp->fullIData(oldp+46,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                             [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         << 4U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1cU)))]),32);
    bufp->fullIData(oldp+47,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
    bufp->fullWData(oldp+48,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),137);
    bufp->fullWData(oldp+53,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),286);
    bufp->fullWData(oldp+62,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),180);
    bufp->fullWData(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),141);
    bufp->fullBit(oldp+73,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
    __Vtemp_h0b91824f__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                         << 0x29U) 
                                        | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                   >> 5U)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                  << 3U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                    >> 0x1dU))))))));
    __Vtemp_h0b91824f__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                 << 0xaU) | (IData)(
                                                    ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                                       << 0x29U) 
                                                      | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 3U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0x1dU))))))) 
                                                     >> 0x20U)));
    __Vtemp_h0b91824f__0[2U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                 << 0xaU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                             >> 0x16U));
    bufp->fullWData(oldp+74,(__Vtemp_h0b91824f__0),75);
    bufp->fullBit(oldp+77,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
    __Vtemp_h4b98151e__0[0U] = vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE;
    __Vtemp_h4b98151e__0[1U] = (IData)((((QData)((IData)(
                                                         ((0x10U 
                                                           & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])
                                                           ? vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE))));
    __Vtemp_h4b98151e__0[2U] = (IData)(((((QData)((IData)(
                                                          ((0x10U 
                                                            & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])
                                                            ? vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+78,(__Vtemp_h4b98151e__0),96);
    bufp->fullQData(oldp+81,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
    __Vtemp_ha09738ae__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE)))) 
                                 << 3U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE));
    __Vtemp_ha09738ae__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE)))) 
                                 >> 0x1dU) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE))) 
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_ha09738ae__0[2U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU) 
                                 << 3U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE))) 
                                                    >> 0x20U)) 
                                           >> 0x1dU));
    bufp->fullWData(oldp+83,(__Vtemp_ha09738ae__0),71);
    bufp->fullQData(oldp+86,((((QData)((IData)(((1U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                 ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                                 : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z))) 
                               << 3U) | (QData)((IData)(
                                                        ((((1U 
                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                            ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb)
                                                            : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb)) 
                                                          << 2U) 
                                                         | ((((1U 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                               ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack)
                                                               : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack)) 
                                                             << 1U) 
                                                            | ((1U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                                                ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack)
                                                                : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack)))))))),35);
    __Vtemp_hf4c3144e__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                             >> 0xdU)))) 
                                         << 0x25U) 
                                        | (0x1fffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))))));
    __Vtemp_hf4c3144e__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 << 0xdU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       (0xffU 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                           >> 0xdU)))) 
                                                       << 0x25U) 
                                                      | (0x1fffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))))) 
                                                     >> 0x20U)));
    __Vtemp_hf4c3144e__0[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 >> 0x13U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 0xdU));
    __Vtemp_hf4c3144e__0[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0x16U) | (0x380000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0xaU))) 
                                | ((0x7e000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0xaU)) 
                                   | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                               >> 0x20U)) 
                                      >> 0x13U)));
    __Vtemp_hf4c3144e__0[4U] = ((0x7ffffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                             >> 0xaU)) 
                                | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                    << 0x16U) | (0x380000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xaU))));
    __Vtemp_hf4c3144e__0[5U] = ((0x7ffffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                             >> 0xaU)) 
                                | (0x80000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                               >> 0xaU)));
    bufp->fullWData(oldp+88,(__Vtemp_hf4c3144e__0),180);
    bufp->fullBit(oldp+94,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                  >> 0x1dU))));
    bufp->fullIData(oldp+95,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                               << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         >> 0x1dU))),32);
    bufp->fullIData(oldp+96,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         >> 0x1dU))),32);
    bufp->fullIData(oldp+97,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x1dU))),32);
    bufp->fullIData(oldp+98,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x1dU))),32);
    bufp->fullCData(oldp+99,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x17U))),6);
    bufp->fullBit(oldp+100,(((0x1cU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x17U)))
                              ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   << 9U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x17U)) 
                                 == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 9U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x17U)))
                              : ((0x1dU == (0x3fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x17U)))
                                  ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       << 9U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x17U)) 
                                     != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          << 9U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 0x17U)))
                                  : ((0x1eU == (0x3fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x17U)))
                                      ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h310f60f0__0)
                                      : ((0x1fU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x17U)))
                                          ? VL_GTES_III(32, 
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          << 9U) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            >> 0x17U)), 
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          << 9U) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                            >> 0x17U)))
                                          : ((0x20U 
                                              == (0x3fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x17U)))
                                              ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h30f81faf__0)
                                              : (IData)(
                                                        ((0x10800000U 
                                                          == 
                                                          (0x1f800000U 
                                                           & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                         & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                              << 9U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                >> 0x17U)) 
                                                            >= 
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                              << 9U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                >> 0x17U))))))))))));
    bufp->fullBit(oldp+101,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+102,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+103,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+104,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+105,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x12U))));
    bufp->fullCData(oldp+106,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0xdU))),5);
    bufp->fullIData(oldp+107,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                << 9U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x17U))),32);
    bufp->fullIData(oldp+108,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                << 9U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 0x17U))),32);
    bufp->fullIData(oldp+109,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                << 9U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x17U))),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
    bufp->fullBit(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
    bufp->fullCData(oldp+115,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 5U))),8);
    bufp->fullBit(oldp+116,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+117,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+118,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+119,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+120,((1U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])));
    bufp->fullIData(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
    bufp->fullIData(oldp+122,(((0x10U & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])
                                ? vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM
                                : 0U)),32);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_DE),32);
    bufp->fullIData(oldp+124,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_DE),32);
    bufp->fullIData(oldp+125,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z
                                : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z)),32);
    bufp->fullBit(oldp+126,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   >> 8U))));
    bufp->fullIData(oldp+127,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+128,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+129,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+130,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+131,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),8);
    bufp->fullCData(oldp+132,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     >> 0x14U))),3);
    bufp->fullCData(oldp+133,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        >> 1U))),7);
    bufp->fullCData(oldp+134,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 8U))),7);
    bufp->fullCData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+138,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
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
    bufp->fullBit(oldp+139,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+140,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+141,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullCData(oldp+142,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x17U))),5);
    bufp->fullCData(oldp+143,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         << 4U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1cU)))),5);
    bufp->fullCData(oldp+144,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+145,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                             | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                   | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                      | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                         | (0x21U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+146,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                             | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+147,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+148,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+153,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                 >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x17U)))) 
                             | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1cU))))))));
    bufp->fullBit(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op1_DE));
    bufp->fullBit(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op2_DE));
    bufp->fullBit(oldp+156,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_DE));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_aluop_DE));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_alu_out_DE));
    bufp->fullCData(oldp+159,(((((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                  ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb)
                                  : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb)) 
                                << 2U) | ((((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                             ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack)
                                             : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack)) 
                                           << 1U) | 
                                          ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                                            ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack)
                                            : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack))))),3);
    bufp->fullBit(oldp+160,((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)));
    bufp->fullIData(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE),32);
    bufp->fullIData(oldp+163,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE),32);
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
    bufp->fullWData(oldp+165,(__Vtemp_h28d0e6a7__0),137);
    bufp->fullCData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[0]),26);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[1]),26);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[2]),26);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[3]),26);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[4]),26);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[5]),26);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[6]),26);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[7]),26);
    bufp->fullIData(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[8]),26);
    bufp->fullIData(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[9]),26);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[10]),26);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[11]),26);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[12]),26);
    bufp->fullIData(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[13]),26);
    bufp->fullIData(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[14]),26);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[15]),26);
    bufp->fullBit(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[0]));
    bufp->fullBit(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[1]));
    bufp->fullBit(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[2]));
    bufp->fullBit(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[3]));
    bufp->fullBit(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[4]));
    bufp->fullBit(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[5]));
    bufp->fullBit(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[6]));
    bufp->fullBit(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[7]));
    bufp->fullBit(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[8]));
    bufp->fullBit(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[9]));
    bufp->fullBit(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[10]));
    bufp->fullBit(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[11]));
    bufp->fullBit(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[12]));
    bufp->fullBit(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[13]));
    bufp->fullBit(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[14]));
    bufp->fullBit(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[15]));
    bufp->fullIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[0]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[1]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[2]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[3]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[4]),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[5]),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[6]),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[7]),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[8]),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[9]),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[10]),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[11]),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[12]),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[13]),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[14]),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[15]),32);
    bufp->fullCData(oldp+219,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE),8);
    bufp->fullBit(oldp+220,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                             [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE])));
    bufp->fullIData(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),26);
    bufp->fullBit(oldp+222,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID
                            [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                      >> 2U))]));
    bufp->fullIData(oldp+223,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred),32);
    bufp->fullIData(oldp+226,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp 
                               - vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred)),32);
    bufp->fullCData(oldp+227,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU),4);
    bufp->fullBit(oldp+228,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+229,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+230,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+231,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+232,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE))));
    bufp->fullBit(oldp+233,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE))));
    bufp->fullBit(oldp+234,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                                >> 1U))));
    bufp->fullBit(oldp+235,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                                >> 2U))));
    bufp->fullBit(oldp+236,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                                >> 1U))));
    bufp->fullBit(oldp+237,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                                >> 2U))));
    bufp->fullBit(oldp+238,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb));
    bufp->fullBit(oldp+239,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb));
    bufp->fullBit(oldp+240,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                              ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_a_ack)
                              : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_a_ack))));
    bufp->fullBit(oldp+241,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                              ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_input_b_ack)
                              : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_input_b_ack))));
    bufp->fullBit(oldp+242,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__aluop_FU))
                              ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z_stb)
                              : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z_stb))));
    bufp->fullIData(oldp+243,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__s_output_z),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__s_output_z),32);
    bufp->fullCData(oldp+245,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__state),4);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_m),24);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_m),24);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_m),24);
    bufp->fullSData(oldp+252,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_e),10);
    bufp->fullSData(oldp+253,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_e),10);
    bufp->fullSData(oldp+254,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_e),10);
    bufp->fullBit(oldp+255,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__a_s));
    bufp->fullBit(oldp+256,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__b_s));
    bufp->fullBit(oldp+257,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__z_s));
    bufp->fullBit(oldp+258,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__guard));
    bufp->fullBit(oldp+259,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__round_bit));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__sticky));
    bufp->fullQData(oldp+261,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__quotient),51);
    bufp->fullQData(oldp+263,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__divisor),51);
    bufp->fullQData(oldp+265,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__dividend),51);
    bufp->fullQData(oldp+267,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__remainder),51);
    bufp->fullCData(oldp+269,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__div0__DOT__count),6);
    bufp->fullCData(oldp+270,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__state),4);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a),32);
    bufp->fullIData(oldp+272,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b),32);
    bufp->fullIData(oldp+273,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z),32);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_m),24);
    bufp->fullIData(oldp+275,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_m),24);
    bufp->fullIData(oldp+276,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_m),24);
    bufp->fullSData(oldp+277,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_e),10);
    bufp->fullSData(oldp+278,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_e),10);
    bufp->fullSData(oldp+279,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_e),10);
    bufp->fullBit(oldp+280,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__a_s));
    bufp->fullBit(oldp+281,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__b_s));
    bufp->fullBit(oldp+282,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__z_s));
    bufp->fullBit(oldp+283,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__guard));
    bufp->fullBit(oldp+284,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__round_bit));
    bufp->fullBit(oldp+285,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__sticky));
    bufp->fullQData(oldp+286,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__fpu__DOT__mult0__DOT__product),48);
    bufp->fullBit(oldp+288,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   >> 0x13U))));
    __Vtemp_hff7a503d__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                              << 0x13U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                >> 0xdU)))))) 
                                 << 6U) | (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                            >> 5U)));
    __Vtemp_hff7a503d__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                              << 0x13U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                >> 0xdU)))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                            << 0x13U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                              >> 0xdU))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_hff7a503d__0[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                  << 0x19U) | (0x1ffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 7U))) 
                                | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                 << 0x13U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                   >> 0xdU))))) 
                                            >> 0x20U)) 
                                   >> 0x1aU));
    __Vtemp_hff7a503d__0[3U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                          >> 7U)) | 
                                ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                  << 0x19U) | (0x1ffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                  >> 7U))));
    __Vtemp_hff7a503d__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                          >> 7U)) | 
                                (0x1fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                            >> 7U)));
    bufp->fullWData(oldp+289,(__Vtemp_hff7a503d__0),141);
    bufp->fullCData(oldp+294,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                        >> 0xdU))),6);
    bufp->fullIData(oldp+295,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+296,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+297,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 0xdU))),32);
    bufp->fullIData(oldp+298,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rd_val_MEM),32);
    bufp->fullIData(oldp+299,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 0xdU))),32);
    bufp->fullBit(oldp+300,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   >> 0xbU))));
    bufp->fullIData(oldp+301,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]),32);
    bufp->fullBit(oldp+302,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+303,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        >> 5U))),5);
    bufp->fullBit(oldp+304,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+305,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+306,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+307,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+308,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+309,((1U & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])));
    bufp->fullBit(oldp+310,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+311,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+312,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 0xcU))),32);
    bufp->fullCData(oldp+313,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                        >> 6U))),6);
    bufp->fullBit(oldp+314,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+315,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+317,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+318,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+319,(vlSelf->clk));
    bufp->fullBit(oldp+320,(vlSelf->reset));
    bufp->fullIData(oldp+321,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+322,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+323,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+325,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+326,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+327,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+328,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+329,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+332,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+333,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+334,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+335,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+336,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+337,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+338,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+339,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+340,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+341,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+342,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+343,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+344,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+345,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+346,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+347,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+348,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+349,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+350,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+351,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+352,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+353,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+354,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+355,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+356,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+357,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+358,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+359,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+360,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->fullBit(oldp+361,(0U));
    bufp->fullBit(oldp+362,(0U));
    bufp->fullCData(oldp+363,(0U),4);
    bufp->fullCData(oldp+364,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE),3);
    bufp->fullCData(oldp+365,(1U),4);
    bufp->fullCData(oldp+366,(2U),4);
    bufp->fullCData(oldp+367,(3U),4);
    bufp->fullCData(oldp+368,(4U),4);
    bufp->fullCData(oldp+369,(5U),4);
    bufp->fullCData(oldp+370,(6U),4);
    bufp->fullCData(oldp+371,(7U),4);
    bufp->fullCData(oldp+372,(8U),4);
    bufp->fullCData(oldp+373,(9U),4);
    bufp->fullCData(oldp+374,(0xaU),4);
    bufp->fullCData(oldp+375,(0xbU),4);
    bufp->fullCData(oldp+376,(0xcU),4);
    bufp->fullCData(oldp+377,(0xdU),4);
    bufp->fullCData(oldp+378,(0xeU),4);
}
