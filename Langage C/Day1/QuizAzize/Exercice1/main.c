#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lo,la,L,P;
    printf("donner longuer et largeur:");
    scanf("%f%f",&lo,&la);
    L=lo*la;
    P=2*(lo+la);
    printf("laire est:%.2f\n perimetre est:%.2f",L,P);

    return 0;
}

