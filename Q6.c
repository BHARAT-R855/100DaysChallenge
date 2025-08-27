#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using third variable
    temp = b;
    b = a;
    a = temp;

    printf("After swapping: a = %d, b = %d\n", b , a);

    return 0;
}

