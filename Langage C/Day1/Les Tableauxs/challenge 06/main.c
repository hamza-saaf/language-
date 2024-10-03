#include <stdio.h>
#include <stdlib.h>

int main(){
    int t,f,i,r;
    printf("donner la taill de tableaux:");
    scanf("%d",&t);
    printf("donner la facteur:");
    scanf("%d",&f);
    int T[t];
    for(i=0;i<t;i++){
        printf("donner le nombre %d: ",i+1);
        scanf("%d",&T[i]);
    }
    printf("le tableaux de multiplicatin est:\n\n");
    for(i=0;i<t;i++){
        r=T[i]*f;
        printf("le nombre:%d  %d * %d =  %d\n",i+1,f,T[i],r);
    }
    return 0;
}



