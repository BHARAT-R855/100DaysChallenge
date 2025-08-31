// Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main (){
    int year;
    printf("The year is ");
    scanf("%d",&year);
    if (year%400==0,year%4==0)
        {printf("The year is leap year");}
        else
        {printf("The year is not a leaf year");
        }
         
    
    
    
   return 0 ;
}