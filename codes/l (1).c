#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, x2, y2, di;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double p1 = pow((x2 - x1), 2);
    double p2 = pow((y2 - y1), 2);
    di = sqrt(p1 + p2);
    printf("%.8lf\n", di);
    return 0;
}
