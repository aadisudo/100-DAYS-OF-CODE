//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1; // long long to handle large results

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative numbers
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;  // multiply factorial by each i
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
/*
Enter a number: 7
Factorial of 7 = 5040
*/