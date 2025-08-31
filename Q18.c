#include <stdio.h>

int main() {
    float percentage;

    // Input percentage
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    // Assign grades using if-else ladder
    if (percentage >= 90) {
        printf("Grade: A+\n");
    }
    else if (percentage >= 80) {
        printf("Grade: A\n");
    }
    else if (percentage >= 70) {
        printf("Grade: B\n");
    }
    else if (percentage >= 60) {
        printf("Grade: C\n");
    }
    else if (percentage >= 50) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}

