//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main() {
    double side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    // Classify the triangle based on side lengths
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }

    return 0; 
}