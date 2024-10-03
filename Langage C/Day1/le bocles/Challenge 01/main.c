#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,r,i;
    printf("entre un nombre n:");
    scanf("%d",&n);
    r=1;
    for(i=1;i<=10;i++){
     r=i*n;
     printf("%d * %d = %d\n",n,i,r);

    return 0;
}
