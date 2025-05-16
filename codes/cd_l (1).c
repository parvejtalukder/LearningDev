#include <stdio.h>
int main()
{
    char first_one[100], last_one[100];
    char first_two[100], last_two[100];
    scanf("%s %s", &first_one, &last_one);
    scanf("%s %s", &first_two, &last_two);

    if ('last_one' == 'last_two') {
        printf("ARE Brothers\n");
    } else {
        printf("NOT\n");
    }
    return 0;
}
