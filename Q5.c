//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float celsius;
    float fahrenheit;
    printf("the tempeature in celcius is =");
    scanf("%f",&celsius);
    fahrenheit = 9/5*celsius +32;
    printf("the temperature in fahrenheit is %f",fahrenheit);
    return 0 ;
}
