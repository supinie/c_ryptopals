#include <stddef.h>
#include "../common.h"
#pragma once

void hex_to_bytes(char *hex, uint_t *bytes, size_t size);

void byte_xor(uint_t *x, uint_t *y, uint_t *output, size_t size);
