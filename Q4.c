//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
    int r;
    float area,circumference;
    printf("radius of a circle is =");
    scanf("%d",&r);
    area = 3.14*r*r;
    printf("the area of a circle is %f\n",area);
    circumference = 2*3.14*r;
    printf("the circumference of a circle is %f",circumference);
    return 0 ;
}