#include <stdio.h>

int main() {
    int num;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}

//PART 2
#include <stdio.h>

int main() {
    int num;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Nested if–else
    if (num >= 0) {
        if (num == 0) {
            printf("The number is Zero\n");
        } else {
            printf("The number is Positive\n");
        }
    } else {
        printf("The number is Negative\n");
    }

    return 0;
}
