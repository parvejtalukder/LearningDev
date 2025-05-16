#include <stdio.h>
int main()
{
    int num[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size_num = sizeof(num)/sizeof(num[0]);
    int i;
    for (i = 10; 10 >= 0; i--) {
        printf("%d\n", num[i]);
        }
    return 0;
}

