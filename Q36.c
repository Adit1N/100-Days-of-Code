//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, hcf, i;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find the smaller of the two numbers
    int min = (num1 < num2) ? num1 : num2;

    // Calculate HCF
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0; 
}