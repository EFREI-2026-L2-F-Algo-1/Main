#include "Tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void FillTrees(void){
    FILE * fic;
    fic = fopen("C:\\Efrei\\L2\\Cours\\Semestre 1\\info\\C\\Projet\\dico_10_lignes.txt","r"); // changer le chemin
    char line[1080]; // ligne du dico
    char fle[50], base[50], cara[50]; // variables qui vont permettre de recuperer les informations de chaque ligne du dico



    // La c'est la fonction FillAdvTrees enfaite
    t_tree_Adv TheAdvTree = CreateAdvTree(); // Mon arbre des adverbes

    // condition d'erreur
    if (fic == NULL){
        printf("Erreur -> il faut regarder si le fichier est bien dans le repertoire courant !");
        return;
    }

    // recup les lignes une par une, pour traiter les parties qui nous interessent
    while (fscanf(fic, "%s %s %s", fle,base,cara) != EOF) {

        switch(cara[2]){

            default:   // Au ca ou y'a une faute dans le dico
                break;

            case 118 : // 118 est le code ascci pour la lettre v, c'est donc un adverbe
                printf("Adverbe de forme de base : %s\n", base);

                //metre la fonction fill_Adv_Tree

                break;

            case 109 : // 109 est le code ascii pour la lettre m, c'est donc un nom
                printf("Nom de forme de base : %s\n", base);
                //metre la fonction fill_nom_Tree
                break;


            case 114 : // 114 est le code ascci pour la lettre r, c'est donc un verbe
                printf("Verbe de forme de base : %s\n", base);
                //metre la fonction fill_Verbe_Tree
                break;

            case 106 : // 106 est le code ascci pour la lettre j, c'est donc un adjectif
                printf("Adjectif de forme de base : %s\n", base);
                //metre la fonction fill_Adj_Tree

                break;
        }

    }

    fclose(fic);
}

