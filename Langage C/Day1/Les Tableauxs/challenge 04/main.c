#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    printf("donner la taill de tableaux :");
    scanf("%d",&t);
    int T[t];
    int n,i,Max,Min;
    for(i=0;i<t;i++){
    printf("donner le nombre n%d:",i+1);
    scanf("%d", &T[i]);
    }
    Max=T[0];
    Min=T[0];
    for(i=0;i<t;i++){
    if (Max<T[i])
        Max=T[i];
    else if(Min>T[i])
        Min=T[i];
    }
    printf("le Max:%d\nle Min:%d",Max,Min);
    return 0;
}
