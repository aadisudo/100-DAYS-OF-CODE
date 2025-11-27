//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

void Binary(int n) {
    if (n > 1)
        Binary(n / 2);

    printf("%d", n % 2);
}

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
        return 0;
    }

    Binary(num);

    return 0;
}
