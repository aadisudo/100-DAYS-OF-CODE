//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  // Store the original number for comparison

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;             // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        n = n / 10;                     // Remove the last digit
    }

    // Compare reversed with original
    if (original == reversed)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}

/*
Enter a number: 121
121 is a palindrome number.

Enter a number: 153
153 is not a palindrome number.
*/
