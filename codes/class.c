#include <stdio.h>
int main()
{
    char sign;
    int counter, limit, update_count;
    printf("Enter the Counter: ");
    scanf("%d", &counter);
    printf("Enter the Limit: ");
    scanf("%d", &limit);
    printf("Enter the Update Count: ");
    scanf("%d", &update_count);
    printf("Enter the Update Sign (+, -, *, /, %): ");
    scanf(" %c", &sign);

    if ((sign == '/' || sign == '%') && update_count == 0) {
        printf("Error: Division or modulo by zero is not allowed.\n");
        return 1;
    }
    while ((sign == '+' || sign == '*') ? counter <= limit : counter >= limit) {
        printf("This is %d\n", counter);

        if (sign == '+') {
            counter = counter + update_count;
        } else if (sign == '-') {
            counter = counter - update_count;
        } else if (sign == '*') {
            counter = counter * update_count;
        } else if (sign == '/') {
            counter = counter / update_count;
        } else if (sign == '%') {
            counter = counter % update_count;
        } else {
            printf("Invalid sign!\n");
            break;
     }
    }
    return 0;
}
