#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,some;
    int Tabl[20];
    printf("entre le nembre des elements du tableaux:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("saisir ....");
        scanf("%d",&Tabl[i]);
    }

    some=0;
    for(i=0; i<n; i++)
    {
        some=some+Tabl[i];
    }
    printf("some egale de %d",some);


    return 0;
}
