#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Saisi Un Caractere:");
    scanf("%c",&x);
    switch(x){
        case 'a' :printf("Le Caract�re Saisi est Voyelle");
        break;
         case 'e' : printf("Le Caract�re Saisi est Voyelle");
        break;
         case 'i' : printf("Le Caract�re Saisi est Voyelle");
        break;
         case 'o' : printf("Le Caract�re Saisi est Voyelle");
        break;
         case 'u' : printf("Le Caract�re Saisi est Voyelle");
        break;
         case 'y' : printf("Le Caract�re Saisi est Voyelle");
         break;
        default: printf("Le Caract�re Saisi non Voyelle");
    }
    return 0;
}
