/*

Instruction assembly

Copyright 2013-2014 Ciaran Anscomb

This file is part of asm6809.

asm6809 is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option)
any later version.

See COPYING.GPL for redistribution conditions.

*/

#ifndef ASM6809_INSTR_H_
#define ASM6809_INSTR_H_

/*
 * Called from assemble_prog() as appropriate.  Each generates appropriate
 * machine code bytes and emits them to the current section.
 */

#include "register.h"

struct node;
struct opcode;

void instr_inherent(struct opcode const *op, struct node const *args);
void instr_immediate(struct opcode const *op, struct node const *args);
void instr_rel(struct opcode const *op, struct node const *args);
void instr_indexed(struct opcode const *op, struct node const *args, int imm8_val);
void instr_address(struct opcode const *op, struct node const *args, int imm8_val);
void instr_imm8_mem(struct opcode const *op, struct node const *args);
void instr_stack(struct opcode const *op, struct node const *args, enum reg_id stack);
void instr_pair(struct opcode const *op, struct node const *args);
void instr_tfm(struct opcode const *op, struct node const *args);
void instr_reg_mem(struct opcode const *op, struct node const *args);

#endif
