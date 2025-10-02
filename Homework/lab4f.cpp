#include <stdio.h>

int main() {
    int day, seconds;

    printf("Enter day(s) that you want to convert to seconds: ");
    scanf("%d", &day);

    seconds = day * 24 * 60 * 60;

    printf("Day(s): %d Seconds: %d", day, seconds);
} // end function
