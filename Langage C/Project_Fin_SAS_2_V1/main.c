#include <stdio.h>
#include <stdlib.h>
int choix;
char info_char;
int info_int;
void List(){ // la liste de choix
    printf("*****Les Choix de la liste*****\n\n");
    printf("[1] Ajouter une Reservation:\n");
    printf("[2] Modifier ou suprimer une Reseravation:\n");
    printf("[3] Afficher les details d une Reservation\n");
    printf("[4] Tri des Reservations:\n");
    printf("[5] Recherche des Reservations:\n");
    printf("[6] Stastistiques:\n\n");

}
void RecupirationChar(){
    scanf("%s",&info_char);
}
void RecupirationInt(){
    scanf("%d",&info_int);
}
int main(){

    char Nom[100][20];
    char Prenom[100][20];
    int Telephone[100][14];
    int Age[100];
    char Statut[100][20];
    int Reference_U[100];
    int Date_reserv[100];

     List();//l appel la liste de choix
    do{

    printf("Saisir Un Choix:");
    RecupirationInt(info_int);
    printf("\n");

    switch(info_int){
        case 1:
            printf("Donner le Nom:");
            RecupirationChar(info_char);
            printf("Donner le Prenom:");
            RecupirationChar(info_char);
            printf("Donner le Telephone:");
            RecupirationInt(info_int);
            printf("Donner ton Age:");
            RecupirationInt(info_int);
            printf("Donner le statut:");
            RecupirationChar(info_char);
            printf("\n");
        break;
        case 2:

        break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;

    }
    }while(choix >=1 || choix<=6);
return;

}

