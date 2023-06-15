#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= (1 << 0);  // Set 1st bit
            break;
        case 2:
            num &= ~(1 << 31);  // Clear 31st bit
            break;
        case 3:
            num ^= (1 << 15);  // Toggle 16th bit
            break;
        default:
            printf("Error: Invalid operation type.\n");
            return num;  // Return the original number unchanged
    }

    return num;
}

int main() {
    int num, oper_type;

    // Read the number and operation type from the user
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    // Perform the bit operations and get the result
    int result = bit_operations(num, oper_type);

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}