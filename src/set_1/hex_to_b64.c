#include "hex_to_b64.h"
#include "../common.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

/**
 * @brief Converts a hexadecimal array to a base64 array
 *
 * Base64 encoding converts binary data into an ASCII string format using a set
 of 64 different characters (A-Z, a-z, 0-9, +, ).
 * Padding with '=' is used to make the output length a multiple of 4.
 * https://en.wikipedia.org/wiki/Base64

 * Prepare the Base64 Character Set: Create a string containing all the Base64
 characters: "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+".

 * Process Input Bytes: Loop through the input byte array in chunks of three
 bytes. For each chunk:
 *     Combine these bytes into a 24-bit number.
 *     Divide this 24-bit number into four 6-bit groups.
 *     Use these 6-bit values as indexes to the Base64 character set to get the
 corresponding Base64 characters.

 * Handle Padding: If the number of bytes is not a multiple of three, add
 padding characters ('=') to the output to ensure the Base64 string length is a
 multiple of 4.

 * Concatenate the Results: Collect all the Base64 characters into a resulting
 string.
 *
 * @param hex hexadecimal array
 * @param size the size of hex
 * @param b64 array that will be filled with base64 output
*/
void hex_to_b64(char *hex, size_t size, char *b64) { /* TODO */ }
