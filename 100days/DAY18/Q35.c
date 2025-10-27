//Write a program to print all factors of a given number.
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);//INPUT FROM USER

    printf("Factors of %d are: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {   // if i divides num completely
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
/*
Enter a number: 4
Factors of 4 are: 1 2 4
*/
