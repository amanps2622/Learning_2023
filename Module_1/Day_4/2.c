#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    float real;
    float imag;
};

// Function to read a complex number
void readComplex(struct Complex *c) {
    printf("Enter the real part: ");
    scanf("%f", &(c->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(c->imag));
}

// Function to write a complex number
void writeComplex(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

int main() {
    struct Complex complex1, complex2, sum, product;
    
    // Read the first complex number
    printf("Enter the first complex number:\n");
    readComplex(&complex1);
    
    // Read the second complex number
    printf("Enter the second complex number:\n");
    readComplex(&complex2);
    
    // Write the first complex number
    printf("\nFirst complex number:\n");
    writeComplex(complex1);
    
    // Write the second complex number
    printf("Second complex number:\n");
    writeComplex(complex2);
    
    // Add the complex numbers
    sum = addComplex(complex1, complex2);
    printf("\nSum of the complex numbers:\n");
    writeComplex(sum);
    
    // Multiply the complex numbers
    product = multiplyComplex(complex1, complex2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);
    
    return 0;
}