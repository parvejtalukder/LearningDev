#include <stdio.h>
int main()
{
    int redu;
    scnaf("%d", &redu);
    if (redu > 0 && redu != 0) {
        printf("Positive\n");
        } else if (redu < 0 && redu != 0) {
        printf("Negative\n");
        } else if (redu == 0){
        printf("Neutral\n");
        }
    return 0;
}
