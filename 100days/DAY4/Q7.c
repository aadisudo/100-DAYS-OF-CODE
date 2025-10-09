 //Write a program to swap two numbers without using a third variable.
 #include <stdio.h>

 int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without third variable (using arithmetic)
    a = a + b;  // sum stored in a
    b = a - b;  // original a stored in b
    a = a - b;  // original b stored in a

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
 }
 /*
 OUTPUT:-
 Enter first number: 10
 Enter second number: 20

 Before swapping: a = 10, b = 20
 After swapping: a = 20, b = 10
 */