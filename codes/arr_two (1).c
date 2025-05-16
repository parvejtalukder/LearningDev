#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, j, temp;

    for (i = 0, j = 9; i < j; i++, j--) {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    for (i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
