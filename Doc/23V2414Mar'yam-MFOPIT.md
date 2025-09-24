# projet : Algorithme de manipulation de tableau et matrices

pour réaliser ce projet j'ai souhaite le réaliser en modulaire en créant les différents ( main.c , tableau.h, tableau.c) afin de faciliter la lisibilité du code 
## main.c

dans mon fichier main qui est le corps du programme , j'ai décidé d'y insérer un menu interactif afin de rendre le programme plus dynamique
j'ai réalisé celui-ci a l'aide d'une boucle do...while  va afficher les différentes options et qui vont prendre en compte le choix de l'utilisateur.
des **Switch & case** pour pourvoir realiser le choix de l'utilisateur tout en accédant aux différentes fonctions qui se trouvent dans le tableau.c

## tableau.h
encore appelé fichier d'ebn tête celui-ci va contenir le nom de toutes les fonctions avec leurs différents paramètres qui seront utilisées dans le programme.

## tableau.c
le squelette du programme c'est ici que tout se passe la partie **coding** du programme 

## opérations réalisées

les opérations que j'ai réalisé pour ce projet sont :
-le produit vectoriel
-le produit vectoriel x matrice

## produit vectoriel
au départ j'ai créé un fonction **saisir_vecteur** qui va permettre a l'utilisateur d'entrer le vecteur. celui-ci est un tableau linéaire qui va stocker 3 valeurs  et la saisie se fera dans une **boucle for**.
puis nous avons créé une fonction **afficher_vecteur** pour que celle-ci affiche le résultat de l'opération 
enfin nous avons créé la fonction **produit vectoriel** pour réaliser le calcul.ayant défini un tableau résultat qui va stoker le résultat de l'opération.
