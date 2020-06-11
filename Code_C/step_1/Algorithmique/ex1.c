#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int ac, char *av)
{
    int nombre1 = 0;
    int resulta = 0;
    printf("entre un nombre. \n");
    scanf("%d", &nombre1);
    resulta = nombre1 * nombre1;
    printf("la carre est : %d\n", resulta);
    return 0;
}