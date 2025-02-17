#include "hex_to_b64.h"
#include "xor.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

void challenge_1() {
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
}

void challenge_2() {
    char test_x[] = "1c0111001f010100061a024b53535009181c";
    char test_y[] = "686974207468652062756c6c277320657965";
    size_t size = sizeof(test_x);
    unsigned int x_bytes[size / 2];
    unsigned int y_bytes[size / 2];
    hex_to_bytes(test_x, x_bytes, size);
    hex_to_bytes(test_y, y_bytes, size);

    char test_hex[] = "746865206b696420646f6e277420706c6179";
    unsigned int output[size / 2];
    unsigned int test_bytes[size / 2];
    hex_to_bytes(test_hex, test_bytes, size);

    byte_xor(x_bytes, y_bytes, output, size);

    assert(!memcmp(test_bytes, output, size));
}

int main() {
    challenge_1();
    challenge_2();

    return 0;
}
