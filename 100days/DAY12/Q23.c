/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include<stdio.h>
int main(){

    int days;
    int fine = 0;

    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Book returned on time or early!\n");//If book recieved on time
    }
    else if (days <= 5) {
        fine = days * 2; 
        printf("Fine = %drs\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;//LOGIC - FINE OF LAST 5 DAYS + (Next days late - last days gone) * 4 (as fine after 5 days is 4rs/day)
        printf("Fine = %drs\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;//LOGIC - FINE OF LAST 5 DAYS + LAST OF OTHER 5 DAYS + THE DAYS MORE ( *6 RS/PER DAY)
        printf("Fine = %drs\n", fine);
    }
    else {
        printf("Membership Cancelled.\n");// IF MORE THAN 30 DAYS
    }

    return 0;
}
/*
Enter the number of days the book is returned late: 7
Fine = 18rs

Enter the number of days the book is returned late: 31
Membership Cancelled.
*/
