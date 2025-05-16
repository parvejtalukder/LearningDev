#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int p = 0;
    for (int i = 1; i <= x; i++) {
        if (i % 2 != 0) {
            p = p + 1;
        }
    }
    printf("%d\n", p);
    return 0;
}
