#ifndef TABLEAUX_H
#define TABLEAUX_H
#define TAILLE 3 //taille de la matrice
#define DIM 10// taille du tableau


/*declaratiob des fonctions*/

void saisir_matrice(int matrice[TAILLE][TAILLE]);
void afficher_matrice(int matrice[TAILLE][TAILLE]);
void somme_matrice(int matrice1[TAILLE][TAILLE], int matrice2[TAILLE][TAILLE], int resultat[TAILLE][TAILLE]);
void produit_matrice (int matrice1[TAILLE][TAILLE], int matrice2[TAILLE][TAILLE], int resultat[TAILLE][TAILLE]);
void saisir_tableau(float tab[DIM]);
int recherche_sequentielle(float tab[DIM],float value);
void axb(int matrice1[TAILLE][TAILLE], int matrice2[TAILLE][TAILLE], int resultat[TAILLE][TAILLE]);
int test_trie(float tab[DIM]);
void trie(float tab[DIM]);
float median(float tab[DIM]);
void afficher_tableau(float tab[DIM]);
void inverse(float tab[DIM]);
void saisir_vecteur(float v[3]);
void afficher_vecteur(float v[3]);
void produit_vectoriel(float u[3],float v[3], float resultat[3]);
void produitxMatrice(float vect[TAILLE],float resultat[TAILLE], float mat[TAILLE][TAILLE]);
void afficher_matriceProduit(float resultat[TAILLE]);
void saisir_matriceProduit(float mat[TAILLE][TAILLE]);

#endif