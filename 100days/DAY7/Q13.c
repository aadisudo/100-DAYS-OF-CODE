//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year); //INPUT YEAR FROM USER

    if(year % 4 == 0) {
        printf("YEAR IS LEAP YEAR\n", year); // LEAP YEAR CHECK
    }
       else if(year % 100){
        printf("YEAR IS NOT A LEAP YEAR\n", year); // NOT A LEAP YEAR CHECK
    }
      else if(year % 400 == 0){
        printf("YEAR IS LEAP YEAR\n",year);
    }
      else{
        printf("YEAR IS NOT A LEAP YEAR"); // NON LEAP YEAR
      }

    return 0;
}
/*
OUTPUT:-
Enter the year: 2020
YEAR IS LEAP YEAR

Enter the year: 1900
YEAR IS LEAP YEAR
*/