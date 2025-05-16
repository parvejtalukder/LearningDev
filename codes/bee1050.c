#include <stdio.h>
int main()
{
    int city_code;
    scanf("%d", &city_code);

    if (city_code == 61) {
        printf("Brasilia\n");
        } else if (city_code == 71) {
        printf("Salvador\n");
        } else if (city_code == 11) {
        printf("Sao Paulo\n");
        } else if (city_code == 21) {
        printf("Rio de Janeiro\n");
        } else if (city_code == 32) {
        printf("Juiz de Fora\n");
        } else if (city_code == 19) {
        printf("Campinas\n");
        } else if (city_code == 27) {
        printf("Vitoria\n");
        } else if (city_code == 31) {
        printf("Belo Horizonte\n");
        } else {
        printf("DDD nao cadastrado\n");
        }

    return 0;
}
