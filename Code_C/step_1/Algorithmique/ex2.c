#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int ac, char av)
{
    int pht = 0;
    int nb = 0;
    int ttva = 0;
    int tttc = 0;

    printf("entre le Prix Hors Taxe.\n");
    scanf("%d", &pht);
    printf("entrer le nombre d'article.\n");
    scanf("%d", &nb);
    printf("entre le taux de TVA.\n");
    scanf("%d", &ttva);
    tttc = nb * pht;
    ttva = 1 + ttva;
    tttc = tttc * ttva;
    printf("le prix total TTC correspond %d .\n", tttc);
}