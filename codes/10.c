#include <stdio.h>
int main()
{
    float wealth, son_get, daughter_get, wife_get;
    printf("Enter the total wealth: ");
    scanf("%f", &wealth);

    son_get = wealth * 58.33 / 100;
    daughter_get = wealth * 29.17 / 100;
    wife_get = wealth * 12.5 / 100;

    printf("Son Get = %.2f of %.2f\n", son_get, wealth);
    printf("Daughter Get = %.2f of %.2f\n", daughter_get, wealth);
    printf("Wife Get = %.2f of %.2f\n", wife_get, wealth);
    return 0;
}
