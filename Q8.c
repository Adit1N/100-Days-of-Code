//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h> 
int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100.0;

    // Calculate Compound Interest
    compound_interest = principal * pow((1 + rate / 100.0), time) - principal;

    printf("Simple Interest: %.2lf\n", simple_interest);
    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0; 
}