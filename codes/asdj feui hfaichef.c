#include <stdio.h>
int main()
{
    int counter, sum = 0;
    for (counter = 20; counter <= 50; counter++) {
    sum += counter;
    }
    printf("The Sum = %d", sum);
    return 0;
}
