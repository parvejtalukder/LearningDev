#include <stdio.h>
#include <math.h>

int main()
{
    double a1, a2, b1, b2, c1, c2;
    double d, x, y;

    printf("a1 and a2: ");
    scanf("%lf %lf", &a1, &a2);
    printf("b1 and b2: ");
    scanf("%lf %lf", &b1, &b2);
    printf("c1 and c2: ");
    scanf("%lf %lf", &c1, &c2);

    d = a1 * b2 - a2 * b1;
    if (fabs(d) < 1e-6) {
        printf("The value of X and Y cannot be determined.\n");
    } else {
        x = (c1 * b2 - c2 * b1) / d;
        y = (a1 * c2 - a2 * c1) / d;

        printf("x = %.2lf\n", x);
        printf("y = %.2lf\n", y);
    }
    return 0;
}
