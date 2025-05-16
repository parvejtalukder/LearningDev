#include <stdio.h>
int main()
{
    int num[5];
    int i;
    int ans = 0;
    for (i  = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < 5; j++) {
        if (num[j] % 2 == 0) {
            ans = ans + 1;
            }
    }
    printf("%d valores pares\n", ans);
    return 0;
}
