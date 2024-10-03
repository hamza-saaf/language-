#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Saisi Un Caractere:");
    scanf("%c",&x);
    switch(x){
        case 'a' :printf("Le Caractère Saisi est Voyelle");
        break;
         case 'e' : printf("Le Caractère Saisi est Voyelle");
        break;
         case 'i' : printf("Le Caractère Saisi est Voyelle");
        break;
         case 'o' : printf("Le Caractère Saisi est Voyelle");
        break;
         case 'u' : printf("Le Caractère Saisi est Voyelle");
        break;
         case 'y' : printf("Le Caractère Saisi est Voyelle");
         break;
        default: printf("Le Caractère Saisi non Voyelle");
    }
    return 0;
}
