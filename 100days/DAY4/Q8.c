 //Write a program to find and display the sum of the first n natural numbers.
 #include <stdio.h>

 int main() {
    int n, i, sum = 0;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate sum using a loop
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Display result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
 }
 /*
 OUTPUT:-
 Enter a positive integer n: 10
 The sum of the first 10 natural numbers is: 55
 */