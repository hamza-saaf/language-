#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    printf("donner la taill de tableaux :");
    scanf("%d",&t);
    int T[t],n,i;
    for(i=0;i<t;i++){
    printf("donner le nombre n%d:",i+1);
    scanf("%d",&n);
    T[i]=n;
    }
    for(i=0;i<5;i++)
    printf("%d",T[i]);



    return 0;
}
