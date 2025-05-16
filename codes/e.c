#include <stdio.h>
#include <math.h>

int main()
{
    float a, pi, area;
    pi = 3.141592653;
    scanf("%f", &a);
    float p = pow(a, 2);
    area = pi * p;
    printf("%.9f\n", area);
    return 0;
}
