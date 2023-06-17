#include <stdio.h>

void printBits(int number);

int main() {
    int number;

    // Read input value
    scanf("%d", &number);

    // Print bits
    printBits(number);

    return 0;
}

// Function to print bits of a 32-bit integer
void printBits(int number) {
    int i;
    for (i = 31; i >= 0; i--) {
        int bit = (number >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}