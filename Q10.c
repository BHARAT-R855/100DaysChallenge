//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;


    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);


    hours = totalSeconds / 3600;         // 1 hour = 3600 seconds
    totalSeconds = totalSeconds % 3600;  // Remaining seconds

    minutes = totalSeconds / 60;         // 1 minute = 60 seconds
    seconds = totalSeconds % 60;         // Remaining seconds

    
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
