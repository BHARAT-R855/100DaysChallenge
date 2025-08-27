//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
int main (){
    int principle,rate ,time ;
    float simpleinterest ,compoundinterest ;
    printf("The principle is:\n ");
    scanf("%d",&principle);
    printf("The rate is: \n ");
    scanf("%d",&rate);
    printf("The time is: \n ");
    scanf("%d",&time);
    simpleinterest = principle*rate*time/100;
    printf("The simple interest is : %f\n ",simpleinterest);
    compoundinterest = principle*(1+rate/100)^time;
    printf("The compound interest is :%f\n",compoundinterest);
    return 0;




       
}