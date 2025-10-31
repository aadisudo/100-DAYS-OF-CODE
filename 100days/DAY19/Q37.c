//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, max;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Start with the larger number
    max = (num1 > num2) ? num1 : num2;

    // Keep incrementing max until it's divisible by both numbers
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d = %d\n", num1, num2, max);
            break;
        }
        max++;
    }

    return 0;
}
/*
Enter two numbers: 62 50
LCM of 62 and 50 = 1550
*/