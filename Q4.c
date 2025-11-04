//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

#define PI 3.14159
int main() {
    double radius;
    double area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    circumference = 2 * PI * radius;

    printf("Area: %.2lf\n", area);
    printf("Circumference: %.2lf\n", circumference);

    return 0; 
}