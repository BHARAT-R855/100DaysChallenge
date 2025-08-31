// Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main(){
    int num;
    printf("please enter a number between 1-12 :- ");
    scanf("%d",&num);
switch(num){
    case 1:
    printf("January,31\n");
    break;
    case 2:
    printf("February,28\n");
    break;
    case 3:
    printf("March,30\n");
    break;
    case 4:
    printf("April,31\n");
    break;
    case 5:
    printf("May,30\n");
    break;
    case 6:
    printf("June,31\n");
    break;
    case 7:
    printf("July,30\n");
    break;
    case 8:
    printf("August,31\n");
    break;
    case 9:
    printf("September,30\n");
    break;
    case 10:
    printf("October,31\n");
    break;
    case 11:
    printf("November,30\n");
    break;
    case 12:
    printf("December,31\n");
    break;
    default:
    printf("The month is not exixt");
}
}