#include <stdio.h>

void print_exponent(double x) {
    unsigned long long int* p = (unsigned long long int*)&x;
    unsigned long long int bits = *p;
    
    // Extract the exponent bits (bits 52-62) from the double value
    unsigned long long int exponent_bits = (bits >> 52) & 0x7FF;

    // Print the exponent in hexadecimal format
    printf("Exponent in Hex: 0x%llX\n", exponent_bits);

    // Print the exponent in binary format
    printf("Exponent in Binary: ");
    for (int i = 10; i >= 0; i--) {
        unsigned long long int mask = (1ULL << i);
        unsigned long long int bit = (exponent_bits & mask) >> i;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;

    print_exponent(x);

    return 0;
}







