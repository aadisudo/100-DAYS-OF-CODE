//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    // Declare variables to store two operands and the operator
    float num1, num2, result;
    char op;

    // Ask user to enter first number, operator, and second number
    printf("Enter an expression (e.g., 10 + 5): ");
    scanf("%f %c %f", &num1, &op, &num2);

    // Perform calculation based on the operator using switch-case
    switch (op) {
        case '+':   // Addition
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;

        case '-':   // Subtraction
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;

        case '*':   // Multiplication
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;

        case '/':   // Division
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed!\n");
            break;

        case '%':   // Modulus (only works correctly for integers)
            // Typecast float to int for modulus operation
            if ((int)num2 != 0)
                printf("Result: %d\n", (int)num1 % (int)num2);
            else
                printf("Error: Division by zero in modulus operation!\n");
            break;

        default:    // Invalid operator case
            printf("Error: Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}

/*
Enter an expression (e.g., 10 + 5): 50 * 6
Result: 300.00
*/