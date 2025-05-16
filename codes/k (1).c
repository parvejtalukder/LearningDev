#include <stdio.h>
int main()
{
    int s, hh, h, m, mm, ss;
    scanf("%d", &s);
    hh = s / 3600;
    h = s % 3500;
    mm = h / 60;
    m = h % 60;
    ss = m;
    printf("%d:%d:%d\n", hh, mm, ss);
    return 0;
}
