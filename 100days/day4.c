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


//PART 2
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
