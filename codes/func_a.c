#include <stdio.h>
int main()
{
    int ara[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ara2[10];
    int i, j;
    for (i = 0, j = 9; i < 10; i++, j--) {
        int temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }
    for (i = 0; i < 10; i++) {
        printf("%d\n", ara[i]);
    }
    return 0;
}
