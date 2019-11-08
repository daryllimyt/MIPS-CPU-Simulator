// This file contains the function declarations for R type instructions
#ifndef R_TYPE_INSTRUCTIONS
#define R_TYPE_INSTRUCTIONS
#include "headers.hpp"

class r_type_instructions
{
public:
    uint32_t code = 0;
    uint32_t src1 = 0;
    uint32_t src2 = 0;
    uint32_t dest = 0;
    uint32_t shift = 0;
    uint32_t func = 0;
    CPU *C;

    r_type_instructions(CPU &cpu_state)
    {
        C = &cpu_state;
    }

    void display()
    {
        std::cerr << "r_type_instruction state: " << std::endl;
        std::cerr << std::hex << "pc: " << C->pc << std::endl;
        std::cerr << std::hex << "npc: " << C->npc << std::endl;
        std::cerr << std::hex << "instr: " << C->instr << std::endl;
        std::cout << "code: " << std::bitset<CODE_SIZE>(code) << std::endl;
        std::cout << "src1: " << std::bitset<SRC1_SIZE>(src1) << std::endl;
        std::cout << "src2: " << std::bitset<SRC2_SIZE>(src2) << std::endl;
        std::cout << "dest: " << std::bitset<DEST_SIZE>(dest) << std::endl;
        std::cout << "shift: " << std::bitset<SHIFT_SIZE>(shift) << std::endl;
        std::cout << "funct: " << std::bitset<FUNC_SIZE>(func) << std::endl;
    }
    int execute();

    //COMPLEXITY 1
    void ADDU(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void AND(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void JR(CPU *&C, INSTR_TYPE &src1);
    void OR(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void SLTU(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void SUBU(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    //COMPLEXITY 2
    void XOR(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void ADD(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void SLL(CPU *&C, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift);
    void SLT(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void SRA(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void SRAV(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void SRL(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void SUB(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    //COMPLEXITY 3
    void MFHI(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void MFLO(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void MTHI(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void MTLO(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void SLLV(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void SRLV(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    //COMPLEXITY 4
    void DIV(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void DIVU(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void JALR(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void MULT(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void MULTU(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void ADDU(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest);
    void AND(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest);
    void OR(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest);
    // void SLTU(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    void SUBU(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest);
    // //COMPLEXITY 2
    void XOR(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest);
    void ADD(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest);
    // void ALL(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void SLT(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void SRA(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void SRAV(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void SRL(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void SUB(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // //COMPLEXITY 3
    // void MFHI(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void MFLO(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void MTHI(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void MTLO(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void SLLV(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void SRLV(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // //COMPLEXITY 4
    // void DIV(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void DIVU(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void JALR(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void MULT(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);
    // void MULTU(CPU *&C, INSTR_TYPE &src1, INSTR_TYPE &src2, INSTR_TYPE &dest, INSTR_TYPE &shift, INSTR_TYPE &func);

private:
};

#endif