#include "xor.h"
#include "../common.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

void hex_to_bytes(char *hex, uint_t *bytes, size_t size) { /* TODO */ }

/**
 * @brief Returns XOR value of two byte arrays
 * NOTE: assumes x and y are of equal length
 *
 * XOR (Exclusive OR):
 * Returns 1 if x != y, 0 otherwise
 * https://en.wikipedia.org/wiki/XOR_gate
 *
 * @params x byte array
 * @params y byte array
 * @params output byte array to be filled with output
 * @params size length of x and y
 */
void byte_xor(uint_t *x, uint_t *y, uint_t *output, size_t size) { /* TODO */ }
