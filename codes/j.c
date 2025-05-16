#include <stdio.h>
int main()
{
    int a, b, p, area;
    scanf("%d %d", &a, &b);
    area = a * b;
    p = 2 * ( a + b);
    printf("%d %d\n", area, p);
    return 0;
}
