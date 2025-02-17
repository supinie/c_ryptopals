#include <stddef.h>
#pragma once

void hex_to_bytes(char *hex, unsigned int *bytes, size_t size);

void byte_xor(unsigned int *x, unsigned int *y, unsigned int *output, size_t size);
