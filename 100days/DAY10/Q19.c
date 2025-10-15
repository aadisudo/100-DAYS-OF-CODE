//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c); //Let Three sides be a,b,c

    // Check for non-positive values
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid input! sides must be positive\n");
    }

    else if (a + b > c && a + c > b && b + c > a) {  // Check triangle inequality
        printf("Triangle is valid.\n");

        // Check type
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        } 
        else {
            printf("It is a Scalene triangle.\n");
        }

        // Check right-angled
        if ((a * a + b * b == c * c) ||
            (a * a + c * c == b * b) ||
            (b * b + c * c == a * a)) {
            printf("It is also a Right-angled triangle.\n");
        }
    } 
    else {
        printf("Triangle is NOT valid.\n");
    }

    return 0;
}
/*
Enter three sides of the triangle: 6 5 2
Triangle is valid.
It is a Scalene triangle.
*/