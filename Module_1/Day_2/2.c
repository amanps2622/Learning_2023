#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swap: x = %d, y = %d\n", x, y);

    char str1[] = "Hello";
    char str2[] = "World";
    printf("Before swap: str1 = %s, str2 = %s\n", str1, str2);
    swap(str1, str2, sizeof(str1));
    printf("After swap: str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}