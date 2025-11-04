//Write a program to calculate library fine based on late days as follows: First 5 days late: ₹2/day Next 5 days late: ₹4/day Next 20 days days late: ₹6/day More than 30 days: Membership Cancelled.

#include <stdio.h>
int main() {
    int late_days;
    int fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &late_days);

    if (late_days <= 0) {
        fine = 0;
    } 
    else if (late_days <= 5) {
        fine = late_days * 2;
    } 
    else if (late_days <= 10) {
        fine = (5 * 2) + ((late_days - 5) * 4);
    } 
    else if (late_days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
    } 
    else {
        printf("Membership Cancelled due to excessive late days.\n");
        return 0; // Exit the program
    }

    printf("The total library fine is: ₹%d\n", fine);

    return 0; 
}