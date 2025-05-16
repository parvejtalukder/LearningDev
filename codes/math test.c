#include <stdio.h>

int main() {
    float x, y;
    float x_plus_y, x_minus_y;

    printf("Enter the value of X+Y first then X-Y: ");
    scanf("%f %f", &x_plus_y, &x_minus_y); 

    x = (x_plus_y + x_minus_y) / 2.0;     
    y = (x_plus_y - x_minus_y) / 2.0;

    printf("The Value of X and Y:\n X = %.0f\n Y = %.0f\n", x, y);

    return 0;
}