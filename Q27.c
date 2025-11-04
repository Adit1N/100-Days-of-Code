//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main() {    
    int n, i, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n odd numbers
    for (i = 0; i < n; i++) {
        sum += (2 * i + 1);
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0; 
}