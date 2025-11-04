//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 90-100: Grade A 80-89: Grade B 70-79: Grade C 60-69: Grade D below 60: Grade F.

#include <stdio.h>
int main() {
    double percentage;
    char grade;

    printf("Enter the percentage (0-100): ");
    scanf("%lf", &percentage);

    // Assigning grade based on percentage
    if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
    } else if (percentage >= 80 && percentage < 90) {
        grade = 'B';
    } else if (percentage >= 70 && percentage < 80) {
        grade = 'C';
    } else if (percentage >= 60 && percentage < 70) {
        grade = 'D';
    } else if (percentage >= 0 && percentage < 60) {
        grade = 'F';
    } else {
        printf("Invalid percentage entered.\n");
        return 1; // Exit with error code
    }

    printf("The grade for %.2lf%% is: %c\n", percentage, grade);

    return 0; 
}