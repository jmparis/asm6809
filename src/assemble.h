/*

Perform an assembly pass on the program

Copyright 2013-2015 Ciaran Anscomb

This file is part of asm6809.

asm6809 is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option)
any later version.

See COPYING.GPL for redistribution conditions.

*/

#ifndef ASM6809_ASSEMBLE_H_
#define ASM6809_ASSEMBLE_H_

struct prog;

/*
 * Required initialisation.
 */

void assemble_init(void);

/*
 * Tidy up.
 */

void assemble_free_all(void);

/*
 * Assemble a file or macro.
 */

void assemble_prog(struct prog *file, unsigned pass);

#endif
