#include <stdio.h>
int main()
{
    char group[40], subgroup[40], member[40];
    printf("Enter the group: ");
    scanf("%s", &group);
    printf("Enter the subgroup: ");
    scanf("%s", &subgroup);
    printf("Enter the member: ");
    scanf("%s", &member);

    if (strcmp(group, "vertebrado") == 0) {
        if (strcmp(subgroup, "ave") == 0) {
           if (strcmp(member, "carnivoro") == 0) {
                printf("aguia\n");
                }
             else if (strcmp(member, "onivoro") == 0) {
             printf("pomba\n");
             }
           }
        else if (strcmp(subgroup, "mamifero") == 0) {
              if (strcmp(member, "onivoro") == 0) {
                printf("homem\n");
                }
                else if (strcmp(member, "herbivoro") == 0) {
                    printf("vaca\n");
                    }
              }
       }
       else if (strcmp(group, "invertebrado") == 0) {
                if (strcmp(subgroup, "inseto") == 0) {
                    if (strcmp(member, "hematofago") == 0) {
                        printf("pulga\n");
                        }
                     else if (strcmp(member, "herbivoro") == 0) {
                     printf("lagarta\n");
                }
            }
        else if (strcmp(subgroup, "anelideo") == 0) {
            if (strcmp(member, "hematofago") == 0) {
            printf("sanguessuga\n");
            }
           else if (strcmp(member, "onivoro") == 0) {
           printf("minhoca\n");
           }
        }
     }
    return 0;
}
