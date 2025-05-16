#include <stdio.h>
int main()
{
    float a[2], b[2], c[2];
    int i;
    for (i = 1; i <= 2; i++) {
        printf(Enter a: );
        scanf("%f", &a[i]);
    }
    printf("%f", a);
    return 0;
}