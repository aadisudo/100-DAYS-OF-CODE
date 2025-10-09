 //Write a program to input two numbers and display their sum, difference, product, and quotient.
 #include<stdio.h>
 int main(){
    int a=10;
    int b=5;

    int sum = a+b;
    int difference = a-b;
    int product = a*b;
    int quotient = a/b;
    
    printf("sum=%d\n",sum); // PRINTS SUM
    
    printf("difference=%d\n",difference); // PRINTS DIFFERENCE
    
    printf("product=%d\n",product); // PRINTS PRODUCT
    
    printf("quotient=%d\n",quotient); // PRINTS QUOTIENT
    return 0;
 
 }   
/*
OUTPUT:-
sum=15
difference=5
product=50
quotient=2
*/