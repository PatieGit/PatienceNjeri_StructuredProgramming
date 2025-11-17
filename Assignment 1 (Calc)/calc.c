#include <stdio.h>

int main() {
    double num1, num2;   // using double to allow decimals
    int int1, int2;      // for modulus operation

    // Input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Display results
    printf("\n--- Results ---\n");

    // Addition
    printf("Addition: %.2lf\n", num1 + num2);

    // Subtraction
    printf("Subtraction: %.2lf\n", num1 - num2);

    // Multiplication
    printf("Multiplication: %.2lf\n", num1 * num2);

    // Division
    if (num2 == 0) {
        printf("Division: null\n");
    } else {
        printf("Division: %.2lf\n", num1 / num2);
    }

    // Modulus (works only with integers)
    int1 = (int)num1;
    int2 = (int)num2;

    if (int2 == 0) {
        printf("Modulus: null\n");
    } else {
        printf("Modulus: %d\n", int1 % int2);
    }

    return 0;
}
