#include <stdio.h>

int main() {

    int hours, minutes, seconds;

    printf("Enter time (HH MM SS): ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}