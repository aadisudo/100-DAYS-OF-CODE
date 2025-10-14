//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main() {
    char ch; //USED CHAR TO INTRODUCE A CHARACTER

    printf("Enter a character: ");
    scanf("%c", &ch); //INPUT FROM USER

    if (ch >= 'A' && ch <= 'Z')
        printf("'%c' is an Uppercase Alphabet.\n", ch);

        else if (ch >= 'a' && ch <= 'z')
            printf("'%c' is a Lowercase Alphabet.\n", ch);
        else if (ch >= '0' && ch <= '9') 
            printf("'%c' is a Digit.\n", ch);
        else                          //USED ELSE AS SPECIAL CHARACTER MAYBE MANY
            printf("'%c' is a Special Character.\n", ch);

    return 0;
}
/*
OUTPUT:-
Enter a character: a
'a' is a Lowercase Alphabet.

Enter a character: A
'A' is an Uppercase Alphabet.

Enter a character: #
'#' is a Special Character.
*/