/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/
#include<stdio.h>
int main(){
int marks;
    printf("Enter marks obtained:");
    scanf("%d",&marks);

if (marks >= 90)
{
printf(" Congratulations you got Grade A");
}
else if ( marks < 89 && marks >= 80)
{
printf(" Grade B");
}
else if (marks < 79 && marks >= 70)
{
printf("Grade C");
}
else if ( marks < 69 && marks >= 60)
{
    printf(" Grade D");
}
else if ( marks < 60)
{
    printf(" Grade F");
}
else 
{
    printf ("Better to study again");
}
return 0;
}
/*
Enter marks obtained:72
Grade C
*/