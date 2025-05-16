#include <stdio.h>
int main()
{
    char latter;
    printf("Enter The Latter (ex: A, a, P, p etc.): ");
    scanf("%c", &latter);

    if (latter == 'a' || latter == 'e' || latter == 'i' || latter == 'o' || latter == 'u' ||
        latter == 'A' || latter == 'E' || latter == 'I' || latter == 'O' || latter == 'U') {
        printf("This is a vowel.\n");
    } else {
        printf("This is not a vowel.\n");
    }
    return 0;
}
