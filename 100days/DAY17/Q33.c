//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int n, original, remainder, result = 0;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  // Keep a copy of the number

    // Calculate sum of cubes of digits
    while (n != 0) {
        remainder = n % 10;             // Get last digit
        result += remainder * remainder * remainder;  // Cube it and add to result
        n = n / 10;                     // Remove last digit
    }

    // Compare result with original number
    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
/*
Enter a number: 153
153 is an Armstrong number.

Enter a number: 122
122 is not an Armstrong number.
*/