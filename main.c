#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include "tableaux.h"
#include<unistd.h>

int main(){
    int choix, position;
    int matriceA[TAILLE][TAILLE];
    int matriceB[TAILLE][TAILLE];
    int matriceResultat[TAILLE][TAILLE];
    float matrice[TAILLE][TAILLE];
    float resultat[TAILLE];
    float tableau[DIM];
    float valeur,u[3],v[3],result[3];
    char lettre;
    printf("\033[1m");
    //interface permettant de gerer le programme(menu)

    do{
        system("clear");
        printf("\t\t**************************************************************************************\n");
        printf("\t\t**************************************************************************************\n");
        printf("\t\t***                                                                                ***\n");
        printf("\t\t***                    MANIPULATION DES TABLEAUX                                   ***\n");
        printf("\t\t***                                                                                ***\n");
        printf("\t\t**************************************************************************************\n");
        printf("\t\t**************************************************************************************\n");
        printf("\n\n\n");
        printf("\t\t\t\t MENU DES DIFFERENTES OPERATIONS DU PROGRAMME\n");
        printf("\n\n");
        printf("\t\t1 ............................Somme des matrices.............................\n");
        printf("\t\t2 ..........................Produit des matrices.............................\n");
        printf("\t\t3 ..................Recherche sequentielle dans un tabbleau..................\n");
        printf("\t\t4 ..................axb pour a,b>0 utiliser exclusivement +1.................\n");
        printf("\t\t5 .....................Tester si un tableau est trie.........................\n");
        printf("\t\t6 .......................Le median dans un tableau ..........................\n");
        printf("\t\t7 .......................Inverser un tableau ................................\n");
        printf("\t\t8 ..........................Produit factoriel................................\n");
        printf("\t\t9 .......................Produit vectoriel x matrices .......................\n");
        printf("\t\t0 ................................Quitter....................................\n");
        printf("\n");
        printf("\tQue desirez-vous realiser comme operation ? :");
        scanf("%d", &choix);

        switch (choix)
    {
        case 0:
            printf("\t********DESIREZ-VOUS QUITTER LE PROGRAMME ?********(O/N).... :");
            scanf("%s",&lettre);
            printf("\tAu revoir !!!!!!\n");
            break;
        case 1:
        system("clear");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\t***                                                                                ***\n");
        printf("\t***                      ADDITIONS DES MATRICES                                    ***\n");
        printf("\t***                                                                                ***\n");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\n\n");

        //saisie des differentes matrices avant le menu
        
        printf("\t\tEntrez les differentes matrices \n");
        printf("\n");
        printf("\t*****Saisie de la matrice A*********\n");
        printf("\n");
        saisir_matrice(matriceA);
        printf("\n");
        printf("\t*****Saisie de la matrice B*********\n");
        printf("\n");
        saisir_matrice(matriceB);

        // addition des matrices 

        somme_matrice(matriceA, matriceB, matriceResultat);
        printf("\n");
        printf("\t*******le resultat de la somme des matrice est:\n");
        afficher_matrice(matriceResultat);
        printf("\n");
        printf("\tAppuyez sur Entree pour continuer");
        getchar();
        while(getchar()!='\n');
            break;
        case 2:
        system("clear");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\t***                                                                                ***\n");
        printf("\t***                          PRODUIT DES MATRICES                                  ***\n");
        printf("\t***                                                                                ***\n");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\n\n");

        //saisie des differentes matrices avant le menu
        
        printf("\t\tEntrez les differentes matrices \n");
        printf("\n");
        printf("\t*****Saisie de la matrice A*********\n");
        printf("\n");
        saisir_matrice(matriceA);
        printf("\n");
        printf("\t*****Saisie de la matrice B*********\n");
        printf("\n");
        saisir_matrice(matriceB);

        //produit des matrices

        produit_matrice(matriceA,matriceB,matriceResultat);
        printf("\n");
        printf("\t***************le resultat du produit des matrices est:\n");
        afficher_matrice(matriceResultat);
        printf("\n");
        printf("\tAppuyez sur Entree pour continuer");
        getchar();
        while(getchar()!='\n');
            break;
        case 3:
        system("clear");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\t***                                                                                ***\n");
        printf("\t***                RECHERCHE SEQUENTIELLE DANS UN TABLEAU                          ***\n");
        printf("\t***                                                                                ***\n");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\n\n");

        // saisie des elements du tableau
        printf("\t***************Entrez les differents elements du tableau*********************\n");
        printf("\n");
        saisir_tableau(tableau);
        //recherche d'un element dans le tableau
        printf("\tentrer la valeur recherche:");
        scanf("%f",&valeur);
        position = recherche_sequentielle(tableau,valeur);
        if(position!=-1){
            printf("\n");
            printf("\t**valeur %.2f trouve a la position %d**\n",valeur,position);
        }else{
            printf("\t***la valeur%.2f non trouvedans le tableau****\n",valeur);
        }
        printf("\n");
        printf("\tAppuyez sur Entree pour continuer");
        getchar();
        while(getchar()!='\n');
            break;
        case 4:
        system("clear");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\t***                                                                                ***\n");
        printf("\t***                      PRODUIT DE AxB (A,B > 0)                                  ***\n");
        printf("\t***                                                                                ***\n");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\n\n");

        //saisie des differentes matrices avant le menu
        
        printf("\t\tEntrez les differentes matrices \n");
        printf("\n");
        printf("\t*****Saisie de la matrice A*********\n");
        printf("\n");
        saisir_matrice(matriceA);
        printf("\n");
        printf("\t*****Saisie de la matrice B*********\n");
        printf("\n");
        saisir_matrice(matriceB);

        // produit a x b

        axb(matriceA,matriceB,matriceResultat);
        printf("\n");
        printf("\t***************le resultat du produit a x b (a,b > 0) est:\n");
        afficher_matrice(matriceResultat);
        printf("\n");
        printf("\tAppuyez sur Entree pour continuer");
        getchar();
        while(getchar()!='\n');
            break;
        case 5:
        system("clear");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\t***                                                                                ***\n");
        printf("\t***                    VERIFICATION DU TRIE D'UN TABLEAU                           ***\n");
        printf("\t***                                                                                ***\n");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\n\n");

        // saisie des elements du tableau
        printf("\t***************Entrez les differents elements du tableau*********************\n");
        printf("\n");
        saisir_tableau(tableau);
        //tester si le tableau est trie
        if(test_trie(tableau)){
            printf("\t************ Le tableau est trie par ordre croisssant ***************\n");
        }else{
            printf("\t************ Le tableau n'est pas trie par ordre croissant ***************\n");
        }
        printf("\n");
        printf("\tAppuyez sur Entree pour continuer");
        getchar();
        while(getchar()!='\n');
            break;
        case 6:
        system("clear");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\t***                                                                                ***\n");
        printf("\t***                          MEDIANE D'UN TABLEAU                                  ***\n");
        printf("\t***                                                                                ***\n");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\n\n");

        // saisie des elements du tableau
        printf("\t***************Entrez les differents elements du tableau*********************\n");
        printf("\n");
        saisir_tableau(tableau);
        //calcul de la mediane du tableau
        float mediane=median(tableau);
        printf("\t***************** La mediane du tableau est : %.2f\n",mediane);
        printf("\n");
        printf("\tAppuyez sur Entree pour continuer");
        getchar();
        while(getchar()!='\n');
            break;
        case 7:
        system("clear");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\t***                                                                                ***\n");
        printf("\t***                        INVERSION D'UN TABLEAU                                  ***\n");
        printf("\t***                                                                                ***\n");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\n\n");

        // saisie des elements du tableau
        printf("\t\t***************Entrez les differents elements du tableau*********************\n");
        printf("\n");
        saisir_tableau(tableau);
        //inverser le tableau
        inverse(tableau);
        printf("\n");
        printf("\t******** Le tableau inverse est *************\n");
        afficher_tableau(tableau);
        printf("\n");
        printf("\tAppuyez sur Entree pour continuer");
        getchar();
        while(getchar()!='\n');
            break;
        case 8:
        system("clear");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\t***                                                                                ***\n");
        printf("\t***                              PRODUIT VECTORIEL                                 ***\n");
        printf("\t***                                                                                ***\n");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\n\n");

        // saisie des elements des differents vecteurs
        printf("\tEntrer les composantes du vecteur U:\n");
        printf("\n");
        saisir_vecteur(u);
        printf("\tEntrer les composantes du vecteur V:\n");
        printf("\n");
        saisir_vecteur(v);
        produit_vectoriel(u,v,result);
        printf("\n");
        printf("********* Le produit vectoriel U x V est :");
        afficher_vecteur(result);
        printf("\n");
        printf("\tAppuyez sur Entree pour continuer");
        getchar();
        while(getchar()!='\n');
            break;
        case 9:
        system("clear");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\t***                                                                                ***\n");
        printf("\t***                        PRODUIT VECTORIELxMATRICE                               ***\n");
        printf("\t***                                                                                ***\n");
        printf("\t**************************************************************************************\n");
        printf("\t**************************************************************************************\n");
        printf("\n\n");

        // saisie des elements des differents vecteurs
        printf("\t*****Saisie de la matrice *********\n");
        printf("\n");
        saisir_matriceProduit(matrice);
        printf("\n");
        printf("\tEntrer les composantes du vecteur U:\n");
        printf("\n");
        saisir_vecteur(u);
        printf("\tEntrer les composantes du vecteur V:\n");
        printf("\n");
        saisir_vecteur(v);
        produit_vectoriel(u,v,result);
        // calcul du produit du produit vectoriel et la matrice
        produitxMatrice(result,resultat,matrice);
        afficher_matriceProduit(resultat);
        printf("\n");
        printf("\tAppuyez sur Entree pour continuer");
        getchar();
        while(getchar()!='\n');
            break;

    }

    } while(choix!= 0);
 
    return 0;
    
}