#include "xor.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Converts char[] to unsigned int[]
 * We do this because `strtol` can take a string of maximum length 16.
 * We want to be able convert a string of aribitrary length (and the given
 * strings for cryptopals are longer than 16). It is assumed that hex is of even
 * length.
 *
 * @params hex char array
 * @params y int array to be filled with output
 * @params size length of hex
 */
void hex_to_bytes(char *hex, unsigned int *bytes, size_t size) {
    for (size_t i = 0; i < size; i += 2) {
        char byte_str[3] = {hex[i], hex[i + 1], '\0'};
        bytes[i / 2] = (unsigned int)strtol(byte_str, NULL, 16);
    }
}

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
void byte_xor(unsigned int *x, unsigned int *y, unsigned int *output,
              size_t size) {
    for (size_t i = 0; i < size / 2; i++) {
        output[i] = x[i] ^ y[i];
    }
}
