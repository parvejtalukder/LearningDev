#include <stdio.h>
int main()
{
    int x, y, ans, i;
    ans = 0;
    scanf("%d %d", &x, &y);
    for (i = 1; i <= x;i++) {
        ans = y * x;
        }
    printf("%d", ans);
    return 0;
}

