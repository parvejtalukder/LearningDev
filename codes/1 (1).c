#include <stdio.h>
int main()
{
    int syl_dha_km;
    float syl_dha_miles, syl_dha_meters, syl_dha_cms;
    syl_dha_km = 245;

    syl_dha_miles = syl_dha_km * 0.621371;
    syl_dha_meters = syl_dha_km * 1000;
    syl_dha_cms = syl_dha_meters * 100;

    printf("Sylhet To Dhaka (in KMs): %.3f\n", syl_dha_km);
    printf("Sylhet To Dhaka (in Miles): %.3f\n", syl_dha_miles);
    printf("Sylhet To Dhaka (in Meters): %.3f\n", syl_dha_meters);
    printf("Sylhet To Dhaka (in Centimeters): %.3f\n", syl_dha_cms);

    return 0;
}
