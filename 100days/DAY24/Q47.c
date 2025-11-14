/*Write a program to print the following pattern:
*
**
***
****
***** 
*/
#include <stdio.h>

int main() {
    // Define the number of rows for the pattern
    const int num = 5;
    
    // Variables for the loop counters
    int i, j;
    
    printf("Generating a right-angled star pattern with %d rows:\n", num);

    // Outer loop: Controls the number of rows 
    for (i = 1; i <= num; i++) {
        
        // Inner loop: Controls the number of stars in the current row.
        // It prints 'i' number of stars.
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Print a newline character to move to the next row
        printf("\n");
    }

    return 0;
}
/*
*
**
***
****
*****
*/