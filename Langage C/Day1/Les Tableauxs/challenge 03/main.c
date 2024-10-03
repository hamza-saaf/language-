#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    printf("donner la taill de tableaux :");
    scanf("%d",&t);
    int T[t],n,i,somme;
    somme=0;
    for(i=0;i<t;i++){
    printf("donner le nombre n%d:",i+1);
    scanf("%d",&n);
    somme=somme+n;
   }
    printf("%d",somme);

    return 0;
}
