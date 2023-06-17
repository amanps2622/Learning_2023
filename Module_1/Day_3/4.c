#include <stdio.h>

int findLargestNumber(int num);

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);
    printf("Largest number after deleting a digit: %d\n", largestNumber);

    return 0;
}

int findLargestNumber(int num) {
    int largestNum = -1;

    char numStr[5];
    sprintf(numStr, "%d", num);

    for (int i = 0; i < 4; i++) {
        char newNumStr[4];
        int index = 0;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                newNumStr[index++] = numStr[j];
            }
        }
        newNumStr[3] = '\0';

        int newNum = atoi(newNumStr);
        if (newNum > largestNum) {
            largestNum = newNum;
        }
    }

    return largestNum;
}