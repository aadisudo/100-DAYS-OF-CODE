//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main() {
    
    char alpha; //defined char for character
    
    printf("Enter your desired character\n",alpha);
    scanf("%c",&alpha); // INPUT OF ALPHABET FROM USER

    if ( alpha >= 'a' || alpha <= 'z' ) { //CHECK FOR ALPHABET
        
        if(alpha == 'a' || alpha == 'e' || alpha ==  'i' ||alpha == 'o' || alpha == 'u') { //VOWEL CHECK
    
        printf("The character is vowel",alpha);
    
        }else{ // CONSONANT CHECK 
        
        printf("The character is consonant",alpha);
        }
    }else{
        printf("Please enter an alphabet",alpha); // USER ENTERED A NON ALPHABET INPUT
     }   
    
    return 0;

}
/*
OUTPUT:-
Enter your desired character
a
The character is vowel

Enter your desired character
b
The character is consonant
*/