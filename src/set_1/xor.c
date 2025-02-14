#include <assert.h>
#include <stdio.h>
#include <string.h>

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
void byte_xor(char *x, char *y, char *output, size_t size) { /* TODO */ }

int main() {
    char test_x[] = "1c0111001f010100061a024b53535009181c";
    char test_y[] = "686974207468652062756c6c277320657965";
    char test_output[] = "746865206b696420646f6e277420706c6179";
    char output[sizeof(test_x)];

    byte_xor(test_x, test_y, output, sizeof(test_x));

    printf("%s\n", output);
    printf("%s\n", test_output);
    assert(!memcmp(test_output, output, sizeof(test_x)));

    return 0;
}
