#include <stdio.h>
#include <string.h>

int main() {
    char first_one[100], first_two[100], sec_one[100], sec_two[100];
    scanf("%s %s", first_one, first_two);
    scanf("%s %s", sec_one, sec_two);

    if (strcmp(first_two, sec_two) == 0) {
        printf("ARE Brothers\n");
    } else {
        printf("NOT\n");
    }

    return 0;
}
