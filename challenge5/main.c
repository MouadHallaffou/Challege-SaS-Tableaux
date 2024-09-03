#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,Mintab;
    printf("entre le nembre des element du tableau: ");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("sasir les element: ");
        scanf("%d",&tab[i]);
    }
    Mintab=tab[0];
    for(i=0;i<n;i++){
        if(Mintab>tab[i])
            Mintab = tab[i];
    }
    printf("la min est %d",Mintab);

    return 0;
}
