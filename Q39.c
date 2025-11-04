//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int number, digit;
    long long product = 1;
    int has_odd_digit = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Process each digit
    while (number != 0) {
        digit = number % 10; // Get the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply to product
            has_odd_digit = 1; // Mark that we found an odd digit
        }
        number /= 10; // Remove the last digit
    }

    if (has_odd_digit) {
        printf("The product of odd digits is: %lld\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0; 
}