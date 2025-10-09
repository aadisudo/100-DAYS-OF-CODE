 //Write a program to swap two numbers using a third variable.
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
 /*
 OUTPUT:-
 Enter first number: 5
 Enter second number: 4

 Before swapping: a = 5, b = 4
 After swapping: a = 4, b = 5
 */