#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 2 : Saisie et Affichage des Éléments

    int i,n, Tab[10];
    printf("entre la taille du Tableau: ");//n: nembre de colone
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("saisir les element du tableaux:");
        scanf("%d",&Tab[i]);
    }
    for(i=0;i<n;i++){
        printf(" tab [ %d ]%d\n",i,Tab[i]);
    }
    return 0;
}
