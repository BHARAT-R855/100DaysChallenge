#include <stdio.h>

int main() {
    int a, b, c;

    // Input sides of triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // First check if the sides form a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
        // Classify triangle
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }
    } 
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
