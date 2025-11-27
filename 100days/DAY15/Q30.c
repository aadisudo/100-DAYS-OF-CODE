//Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int num,reversenum = 0;//initialize reversenum from 0 
    scanf("%d",&num);// input of number to be reversed
    
    while(num > 0 ){ //LOGIC
        int rem = num%10;
        reversenum= reversenum*10 + rem;
        num=num/10;

    }
    printf("Reverse of number is:%d",reversenum); //output

    return 0;
}
