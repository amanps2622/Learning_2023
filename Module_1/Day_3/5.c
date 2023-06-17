#include <stdio.h>
#include <limits.h>

void findSmallestAndLargestDigits(int n, ...);

int main() {
    int n = 3;
    int n1 = 8;
    int n2 = 156;
    int n3 = 123450;

    findSmallestAndLargestDigits(n, n1, n2, n3);

    return 0;
}

void findSmallestAndLargestDigits(int n, ...) {
    va_list args;
    va_start(args, n);

    int smallestDigit = INT_MAX;
    int largestDigit = INT_MIN;

    for (int i = 0; i < n; i++) {
        int number = va_arg(args, int);
        int tempNumber = number;

        while (tempNumber > 0) {
            int digit = tempNumber % 10;
            smallestDigit = (digit < smallestDigit) ? digit : smallestDigit;
            largestDigit = (digit > largestDigit) ? digit : largestDigit;
            tempNumber /= 10;
        }
    }

    va_end(args);

    if (smallestDigit == INT_MAX || largestDigit == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}



