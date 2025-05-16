#include <stdio.h>
int main()
{
    int num[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int arr[10];
    int i, j;

    for (i = 0, j = 9; i < 10; i ++, j--)
    {
        arr[j] = num[i];
    }
    for (i = 0; i < 10; i++)
    {
        num[i] = arr[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}
