#include <stdio.h>
#include <stdlib.h>

int main()
{

    int T[5],n,i;

    for(i=0;i<5;i++){
    printf("donner le nombre n:");
    scanf("%d",&n);
    T[i]=n;

   }

   for(i=0;i<5;i++)
   printf("%d",T[i]);

    return 0;
}
