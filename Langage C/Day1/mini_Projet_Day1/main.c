#include <stdio.h>
#include <stdlib.h>

int main(){
    int t,i,x,choix;
    float moyenne;
    printf("Combien d etudiants y a-t-il? ");
    scanf("%d",&t);
    float ToutNote[t];
    for(i=0;i<t;i++){
        printf("Entrez la note de letudiant %d: ",i+1);
        scanf("%f",&ToutNote[i]);
    }

   do{
    printf("\nQue souhaitez-vous faire ?\n");
    printf("1. Calculer la moyenne des notes\n");
    printf("2. Trouve la note la plus elevee et la plus basse\n");
    printf("3. Afficher les notes superieres a la moyenne\n");
    printf("4. Compter le nombre d etudiants ayant valide (note >= 12)\n");
    printf("5. Compter le nombre d etudiants en rattrapage (note < 12)\n");
    printf("6. Quitter\n");
    printf("Entrez votre choix:");
    scanf("%d",&choix);
    switch(choix){
        case 1 :
            printf("\n");
            for(i=0;i<t;i++)
            moyenne=moyenne+ToutNote[i];
            printf("la moyenne des notes:%.2f",moyenne/t);
            printf("\n");
        break;
        case 2 :
            printf("\n");
            float max,min;
            for(i=0;i<t;i++)

            printf("2. la note la plus elevee est:%f\n la note la plus basse est:%f",);
            printf("\n");
        break;
        case 3 :printf("3. Afficher les notes superieres a la moyenne");
        break;
        case 4 :printf("4. Compter le nombre d etudiants ayant valide (note >= 12)");
        break;
        case 5 :printf("5. Compter le nombre d etudiants en rattrapage (note < 12)");
        break;
        case 6 :printf("6. Quitter");
        break;
        default :printf("Entrez votre choix:");
        break;
    }}while(choix>=1 || choix<=6);


/*
    char C1[]="hamza saaf";
    char C2[11];
    printf("le Tableax C1 est:%s\n",C1);

    for (int i=0;i<11;i++){
        C2[i]=C1[i];
    }
        printf("le Tableax C2 est:%s",C2);

*/

    return 0;
}
