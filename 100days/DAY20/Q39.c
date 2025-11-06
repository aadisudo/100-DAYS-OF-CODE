//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int Odd = 0;  // To check if there are odd digits

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {  // Check if digit is odd
            product *= digit;
            Odd = 1;
        }
        num /= 10;
    }

    if (Odd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
/*
Enter a number: 18767
Product of odd digits = 49
*/