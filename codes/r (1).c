#include <stdio.h>
int main()
{
    int G, S, B, A, X, C;
    scanf("%d %d %d", &G, &S, &B);
    A = 5 - G;
    X = 5 - S;
    C = 5 - B;
    printf("%d\n", A + X + C);
    return 0;
}
