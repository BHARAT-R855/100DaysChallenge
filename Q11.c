//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main (){
    int number1;
    printf("The integer is :");
    scanf("%d",&number1);

    if(number1%2==0){
        printf("The number is even");
    }
else{
    printf("The number is odd");
    
}
return 0;
}