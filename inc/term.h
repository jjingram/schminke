#pragma once

#include <stddef.h>
#include <stdint.h>
#include "vga.h"

extern const size_t TERM_WIDTH;
extern const size_t TERM_HEIGHT;

void term_init(struct vga *vgas, size_t nvga);
void term_clear(void);
void term_putc(uint32_t c);
