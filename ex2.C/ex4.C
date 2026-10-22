#include <stdio.h>

int main() {

    float f = 3.14159;
    double d = 2.718281828;
    char c = 'A';

    printf("Float: %f\n", f);
    printf("Float (2 decimal): %.2f\n", f);
    printf("Double: %lf\n", d);
    printf("Char: %c\n", c);
    printf("Char as int: %d\n", c);

    return 0;
}