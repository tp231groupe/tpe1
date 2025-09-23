#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include "tableaux.h"


void saisir_matrice(int matrice[TAILLE][TAILLE]){
    for(int i=0;i<TAILLE;i++){
        for(int j=0;j<TAILLE;j++){
            printf("\tentrer l'element [%d][%d]:",i,j);
            scanf("%d",&matrice[i][j]);
        }
    }

}

void afficher_matrice(int matrice[TAILLE][TAILLE]){
    for(int i=0;i<TAILLE;i++){
        for(int j=0;j<TAILLE;j++){
            printf("%4d",matrice[i][j]);
        }
        printf("\n");
    }
}

void somme_matrice(int matrice1[TAILLE][TAILLE], int matrice2[TAILLE][TAILLE], int resultat[TAILLE][TAILLE]){
    for(int i=0;i<TAILLE;i++){
        for(int j=0;j<TAILLE;j++){
            resultat[i][j]=matrice1[i][j]+matrice2[i][j];
        }
    }

}

void produit_matrice (int matrice1[TAILLE][TAILLE], int matrice2[TAILLE][TAILLE], int resultat[TAILLE][TAILLE]){
    for(int i=0 ; i<TAILLE; i++){
        for(int j=0;j<TAILLE; j++){
            resultat[i][j]=0;
            for(int k=0;k<TAILLE;k++){
                resultat[i][j]=matrice1[i][k]*matrice2[k][j];
            }
        }
    }

}

void saisir_tableau(float tab[DIM]){
    for(int i=0;i<DIM;i++){
        printf("\tentrer l'element %d :",i);
        scanf("%f",&tab[i]);
    }
}

int recherche_sequentielle(float tab[DIM],float value){
    for(int i=0;i<DIM;i++){
        if(tab[i]==value){
            return i;
        }
    }
    return -1;
}

int incrementer(int x){
    return x+1;
}

int addition_simulee(int x,int y){
    int resultat=x;
    int i=0;
    while(i<y){
        resultat=incrementer(resultat);
        i=incrementer(i);
    }
    return resultat; 
}

int multiplication_simulee(int x,int y){
    int resultat=0;
    int i=0;
    while(i<y){
        resultat=addition_simulee(resultat,x);
        i=incrementer(i);
    }
    return resultat;
}

void axb(int matrice1[TAILLE][TAILLE], int matrice2[TAILLE][TAILLE], int resultat[TAILLE][TAILLE]){
    int i=0;
    while(i<TAILLE){
        int j=0;
        while(j<TAILLE){
            resultat[i][j]=0;
            int k=0;
            while(k<TAILLE){
                int produit=multiplication_simulee(matrice1[i][k],matrice2[k][j]);
                resultat[i][j]=addition_simulee(resultat[i][j],produit);
                k=incrementer(k);
            }
            j=incrementer(j);
        }
        i=incrementer(i);
    }
}

int test_trie(float tab[DIM]){
    int i=0;
    while(i+1<DIM){
        if(tab[i]>tab[i+1]){
            return 0;//le tableau n'est pas trie
        }
        i=i+1;
    }
    return 1; // le tableau est trie
}

void trie(float tab[DIM]){
    for(int i=0;i<DIM-1;i++){
        for(int j=i+1;j<DIM;j++){
            if(tab[i]>tab[j]){
                int tempon=tab[i];
                tab[i]=tab[j];
                tab[j]=tempon;
            }
        }
    }
}

float median(float tab[DIM]){
    trie(tab);
    if(DIM%2 ==1){
        return tab[DIM/2];
    }else{
        int mil1=tab[(DIM/2)-1];
        int mil2=tab[DIM/2];
        return (mil1+mil2)/2.0;
    }
}

void afficher_tableau(float tab[DIM]){
    for(int i=0;i<DIM;i++){
        printf("%6.2f",(double)tab[i]);
    }
    printf("\n");
}

void inverse(float tab[DIM]){
    for(int i=0;i<DIM/2;i++){
        float tempon=tab[i];
        tab[i]=tab[DIM-1-i];
        tab[DIM-1-i]=tempon;
    }
}

void saisir_vecteur(float v[3]){
    for(int i=0;i<3;i++){
        printf("v[%d]= ",i);
        scanf("%f",&v[i]);
    }
}

void afficher_vecteur(float v[3]){
    printf("[%.2f, %.2f, %.2f]\n",v[0],v[1],v[2]);
}

void produit_vectoriel(float u[3],float v[3], float resultat[3]){
    resultat[0]=u[1]*v[2]-u[2]*v[1];
    resultat[1]=u[2]*v[0]-u[0]*v[2];
    resultat[2]=u[0]*v[1]-u[1]*v[0];
}

void produitxMatrice(float vect[TAILLE],float resultat[TAILLE], float mat[TAILLE][TAILLE]){
    for(int i=0;i<TAILLE;i++){
        resultat[i]=0;
        for(int j=0;j<TAILLE;j++){
            resultat[i]+= mat[i][j]*vect[j];

        }
    }
}

void afficher_matriceProduit(float resultat[TAILLE]){
    for(int i=0;i<TAILLE;i++){
        for(int j=0;j<TAILLE;j++){
            printf("%4f",resultat[i]);
        }
        printf("\n");
    }
}

void saisir_matriceProduit(float mat[TAILLE][TAILLE]){
    for(int i=0;i<TAILLE;i++){
        for(int j=0;j<TAILLE;j++){
            printf("\tentrer l'element [%d][%d]:",i,j);
            scanf("%f",&mat[i][j]);
        }
    }

}
