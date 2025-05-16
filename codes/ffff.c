#include <stdio.h>
int main()
{
    char greeting[] = "Good Morning";
    char name[100];
    printf("What is your Name: ");
    scanf("%s", &name);
    printf("%s, %s!", greeting, name);
    return 0;
}
