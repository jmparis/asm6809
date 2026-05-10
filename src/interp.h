/*

Interpolated positional variables within macros

Copyright 2013 Ciaran Anscomb

This file is part of asm6809.

asm6809 is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option)
any later version.

See COPYING.GPL for redistribution conditions.

*/

#ifndef ASM6809_INTERP_H_
#define ASM6809_INTERP_H_

struct node;

/* Push an array of nodes on the positional variable stack. */
void interp_push(struct node *);

/* Remove the current array from the stack. */
void interp_pop(void);

/* Fetch positional variable from the current array. */
struct node *interp_get(int index);

#endif
