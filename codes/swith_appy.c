#include <stdio.h>
int main() {
    char sign;
    int a, b;
    scanf("%d", &a);
    getchar();
    scanf("%c", &sign);
    scanf("%d", &b);
    switch (sign) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d / %d = %d\n", a, b, a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    return 0;
}
