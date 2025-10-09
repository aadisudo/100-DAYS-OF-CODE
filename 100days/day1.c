//QUES 1. Write a program to input two numbers and display their sum.
#include <stdio.h>
 int main(){
    
   int a , b; //Taken two variable a and b 
    
    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    int sum = a + b; // described a new variable (sum), which does addition of two numbers
    
    printf("sum=%d",sum);
    
    return 0;
 }

 /*
 OUTPUT:-
 Enter the value of a:56
 Enter the value of b:45
 sum=101
 */


 //QUES 2. Write a program to input two numbers and display their sum, difference, product, and quotient.
 #include<stdio.h>
int main(){
    int a=10;
    int b=5;
    int sum = a+b;
    int difference = a-b;
    int product = a*b;
    int quotient = a/b;
    printf("sum=%d\n",sum);
    
    printf("difference=%d\n",difference);
    
    printf("product=%d\n",product);
    
    printf("quotient=%d\n",quotient);
    return 0;
}   
/*
OUTPUT:-
sum=15
difference=5
product=50
quotient=2
*/
