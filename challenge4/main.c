#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,Maxtab;
    printf("entre le nembre des element du tableau: ");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("sasir les element: ");
        scanf("%d",&tab[i]);
    }
    Maxtab=tab[0];
    for(i=0;i<n;i++){
        if(Maxtab<tab[i])
            Maxtab = tab[i];
    }
    printf("la max est %d",Maxtab);

    return 0;
}
