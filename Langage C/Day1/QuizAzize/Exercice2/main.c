#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age;
    printf("enter votre age :");
    scanf("%d",&age);

    if(age <=0 || age >=100)
         printf("ne pas un nombre logique");
    else if(age >=18)
        printf("vous etes eligible pour voter");
    else
        printf("vous n etes pas eligible pour voter");


    return 0;
}
