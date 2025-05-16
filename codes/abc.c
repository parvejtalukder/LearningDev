#include <stdio.h>
int main() {
    int num, digit, sum = 0;
    printf("Enter the inputs: ");
    scanf("%d", &num);
    printf("The sum: ");
    while (num!= 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("%d\n", sum);
    return 0;
}
