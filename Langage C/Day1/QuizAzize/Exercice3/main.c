#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a;
    printf("Entree un nombre:");
    scanf("%d",&n);
    /*do{
    printf("!!!!!!!!!!!Entree un nombre:");
    scanf("%d",&n);
    }while(n<2);*/
    a=0;
    for(i=2;i<n-1;i++){
       if (n%i==0)
        a=1;

    }
    if (a==1)
    printf("c est un nombre premier");
    else{
    printf("c ne pas un nombre premier");
    }
    return 0;
}
