//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>
int main() {
    int number, first_digit, last_digit, num_digits, middle_part, swapped_number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Find the last digit
    last_digit = number % 10;

    // Find the number of digits
    num_digits = (int)log10(number);

    // Find the first digit
    first_digit = (int)(number / pow(10, num_digits));

    // Find the middle part of the number
    middle_part = (number % (int)pow(10, num_digits)) / 10;

    // Construct the new number with swapped digits
    swapped_number = last_digit * (int)pow(10, num_digits) + middle_part * 10 + first_digit;

    printf("Number after swapping first and last digit: %d\n", swapped_number);

    return 0; 
}