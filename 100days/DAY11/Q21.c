//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main(){
    int month;
    printf("Enter the month 1-12: ");
    scanf("%d",&month);
    
    switch(month){ //USING SWITCH :- SWITCHES THE MONTH ACCORDING TO THE INPUT FROM USER
        case 1:
        printf("January = 31 days\n",month);
        break;

        case 2:
        printf("February = 28/29 days\n",month);
        break;

        case 3:
        printf("March = 31 days\n",month);
        break;

        case 4:
        printf("April = 30 days\n",month);
        break;
        
        case 5:
        printf("May = 31 days\n",month);
        break;

        case 6:
        printf("June = 30 days\n",month);
        break;

        case 7:
        printf("July = 31 days\n",month);
        break;

        case 8:
        printf("August = 31 days\n",month);
        break;

        case 9:
        printf("September = 30 days\n",month);
        break;

        case 10:
        printf("October = 31 days\n",month);
        break;

        case 11:
        printf("November = 30 days\n",month);
        break;

        case 12:
        printf("December = 31 days\n",month);
        break;

        default: //prints only if user prints a invalid value
        printf("**INVALID INPUT** Please enter the month number from 1-12\n ");
        break;
    }
    return 0;
}
/*
Enter the month 1-12: 5
May = 31 days

Enter the month 1-12: 13
**INVALID INPUT** Please enter the month number from 1-12
*/