/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>

int main() {
    int pattern[5] = {1, 3, 5, 3, 1};  // Number of stars in each block

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < pattern[i]; j++) {
            printf("*\n");
        }
        printf("\n");  // blank line between blocks
    }

    return 0;
}
