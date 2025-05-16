#include <stdio.h>
int main() {
    int t;
    int i;
    scanf("%d", &t);
    int x[t];
    for (i = 0; i < t; i++) {
        scanf("%d", &x[i]);
    }
    for (int j = 0; j < t; j++) {
        if (x[j] % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}
