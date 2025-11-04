//Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main() {
    double num1, num2;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Swapping without using a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping:\n");
    printf("First number: %.2lf\n", num1);
    printf("Second number: %.2lf\n", num2);

    return 0; 
}