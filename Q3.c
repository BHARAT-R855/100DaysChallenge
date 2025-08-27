//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main() {
    int length,breadth;
    int area,perimeter;
    printf("length=");
    scanf("%d",&length);
    printf("breadth=");
    scanf("%d",&breadth);
    area = length * breadth;
    printf("The area of rectangle is %d\n",area);
    perimeter = 2*(length + breadth);
    printf("The perimeter of a rectangle is %d\n",perimeter);
    return 0 ;
}
