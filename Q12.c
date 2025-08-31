//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main (){
    int number1;
    printf("The integer is :");
    scanf("%d",&number1);
    if (number1==0){
    printf("The number is zero");
    }
    else if(number1>0){
    printf("The number is positive");
    }
    else {
        printf("The number is negative");
    }
return 0;


    
}