#include <stdio.h>
int main() {
 
    float celsius, fahrenheit; // We chose float to enter values in decimal
 
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius); // Taken value of temp. from user

    fahrenheit = (celsius * 9/5) + 32; // Conversion of temp. from farenheit to celcius

    printf("Temperature in Fahrenheit = %.2f`F\n", fahrenheit);

    return 0;
}
 
/*
OUTPUT:-
Enter temperature in Celsius: 45
Temperature in Fahrenheit = 113.00`F
*/

//PART 2
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
