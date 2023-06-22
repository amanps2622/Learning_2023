#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};
int main() {
    struct Box myBox = { 5.0, 4.0, 3.0 };
    struct Box *ptrBox = &myBox;
    
    // Volume calculation
    double volume = ptrBox->length * ptrBox->width * ptrBox->height;
    printf("Volume: %.2f\n", volume);
    
    // Total surface area calculation
    double surfaceArea = 2 * (ptrBox->length * ptrBox->width + ptrBox->length * ptrBox->height + ptrBox->width * ptrBox->height);
    printf("Surface Area: %.2f\n", surfaceArea);
    
    return 0;
}