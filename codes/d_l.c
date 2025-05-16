#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        if (n > 0)
            printf("10\n");
        else
            printf("0\n");
    }

    return 0;
}
