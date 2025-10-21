//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask the user for how many odd numbers to sum
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop through the first n odd numbers
    // Odd numbers are: 1, 3, 5, 7, 9, ...
    for (i = 1; i <= n; i++) {
        int odd = 2 * i - 1;  // Formula for the ith odd number
        sum += odd;            // Add it to the sum
    }

    // result
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
/*
Enter the value of n: 9
Sum of first 9 odd numbers = 81
*/