/*
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {

        // Print leading spaces
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }

        // Print the numbers
        for (int num = 6 - i; num <= 5; num++) {
            printf("%d", num);
        }

        printf("\n");
    }

    return 0;
}
/*
    5
   45
  345
 2345
12345
*/