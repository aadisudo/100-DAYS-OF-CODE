//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <string.h>

int main() {
    char num[20];   // array to store number as a string
    int len, temp;

    printf("Enter a number: ");
    scanf("%s", num);   // input as string so we can easily swap digits

    len = strlen(num);

    // swap first and last character
    temp = num[0];
    num[0] = num[len - 1];
    num[len - 1] = temp;

    printf("Number after swapping first and last digit: %s\n", num);

    return 0;
}
/*
Enter a number: 45
Number after swapping first and last digit: 54
*/