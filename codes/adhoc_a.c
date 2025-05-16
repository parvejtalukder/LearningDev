#include <stdio.h>

int main() {
    int a, b, x, ans;
    scanf("%d%d%d", &a, &b, &x);

    if (a == 0)
        ans = b / x + 1;
    else
        ans = b / x - (a - 1) / x;

    printf("%d\n", ans);
    return 0;
}

