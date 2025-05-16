#include <stdio.h>
int main()
{
    int num, i;
    scanf("%d", &num);
    if (num <= 1000 && 1 <= num) {
        i = 1;
        while (i <= num) {
            printf("%d\n", i);
            i = i + 2;
        }
    }
    return 0;
}
