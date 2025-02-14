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

/* main function for tests, in practice we will import and directly use the
 * `hex_to_b64` func */
int main() {
    char test_hex[] = "49276d206b696c6c696e6720796f757220627261696e206c696b6520"
                      "6120706f69736f6e6f7573206d757368726f6f6d";
    size_t hex_size = sizeof(test_hex);
    char test_b64[] =
        "SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t";
    size_t b64_size = sizeof(test_b64);
    char out_b64[b64_size];

    hex_to_b64(test_hex, hex_size, out_b64);

    printf("%s\n", test_b64);
    printf("%s\n", out_b64);
    assert(!memcmp(test_b64, out_b64, b64_size));

    return 0;
}
