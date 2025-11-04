//Write a program to check if a number is a perfect number.

#include <stdio.h>
int main() {
    int number, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Calculate the sum of proper divisors
    for (i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the number
    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0; 
}