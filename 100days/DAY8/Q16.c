//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main(){

    int n1 , n2 , n3;
    printf("ENTER THE NUMBERS: ");
    scanf("%d %d %d",&n1, &n2 , &n3); //INPUT OF NUMBERS FROM USER

    if( n1 >= n2 && n1 >= n3){
        printf("The largest number is:%d ",n1);
    }
    else if( n2 >= n1 && n2 >= n3 ){
        printf("The largest number is:%d", n2);
    }
    else {
        printf("The largest number is :%d",n3);
    }

    return 0;
}
/*
OUTPUT:-
ENTER THE NUMBERS: 3  7 5
The largest number is:7
*/