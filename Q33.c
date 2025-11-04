//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>
int main() {
    int number, original_number, remainder, n = 0;
    double sum = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original_number = number;

    // Calculate the number of digits
    while (original_number != 0) {
        original_number /= 10;
        ++n;
    }

    original_number = number;

    // Calculate the sum of the nth powers of its digits
    while (original_number != 0) {
        remainder = original_number % 10;
        sum += pow(remainder, n);
        original_number /= 10;
    }

    // Check if the number is an Armstrong number
    if ((int)sum == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0; 
}