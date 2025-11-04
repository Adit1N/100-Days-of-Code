//Write a program to check if a number is prime.

#include <stdio.h>
int main() {
    int number, i, is_prime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Handle edge cases
    if (number <= 1) {
        is_prime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        // Check for factors from 2 to the square root of the number
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                is_prime = 0; // Found a factor, not prime
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0; 
}