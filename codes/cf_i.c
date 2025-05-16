#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if ( a >= 0 && b <= 100) {
    if (a >= b) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    }
    return 0;
}
