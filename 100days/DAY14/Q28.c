//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    int product = 1;   //intialize product from 1

    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) { //i=2 to multiply with even number
        product *= i;
    }

    printf("%d", product);

    return 0;
}
