//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.14159   // Defining the value of Pi

    int main(){
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output results
    printf("Area of the circle = %.2f\n", area); // PRINTS AREA
    printf("Circumference of the circle = %.2f\n", circumference); // PRINTS CIRCUMFERENCE

    return 0;
}