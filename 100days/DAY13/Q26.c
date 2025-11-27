//Write a program to print numbers from 1 to n.
#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a ");
    scanf("%d",&a); //INPUT TILL WHERE NUMBER IS TO BE PRINTED
    
    for (int i = 1;i <= a; i++){
    
        printf("%d \n",i);
    }
    
    return 0;
}