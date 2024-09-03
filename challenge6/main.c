#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 6 : Multiplication des Éléments.
    int i,n,fact,multipl;
    printf("entre le nembre des element du tableau: ");
    scanf("%d",&n);
    int tab[n];
    for(i=0; i<n; i++)
    {
        printf("sasir les element: ");
        scanf("%d",&tab[i]);
    }
    printf("entre la valeur du facteur de multiplication: ");
    scanf("%d",&fact);
    multipl=1;
    for(i=0; i<n; i++)
    {
        tab[i]=tab[i]*fact;

    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",tab[i]);
    }

    return 0;
}
