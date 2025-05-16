#include <stdio.h>
int main() {
    int a, b, c, d, ans;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (-100000 <= a && -100000 <= b && -100000 <= c && -100000 <= d && 100000 >= a && 100000 >= b && 100000 >= c && 100000 >= d) {
        ans = (a * b) - (c *d);
        printf("Difference = %d", ans);
        }
    return 0;
}
