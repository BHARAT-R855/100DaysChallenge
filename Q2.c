//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int A ,B;
    int sum ,difference,product,quotient;
    printf("A=");
    scanf("%d",&A);
    printf("B=");
    scanf("%d",&B);
    sum = A +B;
    printf("The sum is %d\n",sum);
    difference = A -B;
    printf("The difference is %d\n",difference);
    product = A*B;
    printf("The product is %d\n",product);
    quotient = A/B;
    printf("The quotient is %d\n",quotient);

}
