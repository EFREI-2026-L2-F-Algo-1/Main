//
// Created by yassi on 19/11/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Adv.h"

// Pour creer un arbre vide
t_tree_Adv CreateAdvTree(void){
    t_tree_Adv myTree;
    t_letter_node_Adv first;
    first.letter = 35; // 35 = # donc un l'arbre a comme premier node un #
    first.flechie = 0;
    myTree.root = &first;
    return  myTree;
}
/* ----------------------- */


// Creer un noeud avec un caractère
p_letter_node_Adv CreateAdvLetterNode(char c){
    p_letter_node_Adv p_NewNode ;
    p_NewNode = malloc(sizeof (t_letter_node_Adv));
    p_NewNode->letter = c;
    return p_NewNode;
}

/* ----------------------- */


// Pour ajouter une lettre (Non fonctionnelle)
void AddLetter(p_tree_Adv t,char base){

    p_letter_node_Adv p_new;
    p_letter_node_Adv curs;

    p_new = CreateAdvLetterNode(base); // Pour trouver le caractère ca sera p_new -> letter
    curs = t->root;

    if (curs->sons[0] == NULL){
        curs -> sons[0] = p_new;
    }
}


// still in progress
void FillAdvTree(char forme_de_base[], t_tree_Adv Tree){

    int i = 0, pos_string = 0;
    p_letter_node_Adv curs = Tree.root;



    if (forme_de_base[pos_string] != '\0' ){   // Pour gerer flechie

        p_letter_node_Adv New = CreateAdvLetterNode(forme_de_base[pos_string]); // on crée un node avec une lettre




    }
    else {
        // Mettre flechie qui pointe vers 1 par exemple
    }


}