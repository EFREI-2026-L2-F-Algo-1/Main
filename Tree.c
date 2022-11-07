#include "Tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Pour creer un arbre vide
t_tree CreateAdvTree(void){
    t_tree myTree;
    t_letter_node first;

    first.letter = 35;

    myTree.root = &first;
    return  myTree;
}
/* ----------------------- */



// Creer ne noeud avec un caractère (Non vérifié) IL FAUT UTILISER MALLOC
p_letter_node CreateAdvLetterNode(char c){
    p_letter_node p_NewNode ;
    p_NewNode = malloc(sizeof (t_letter_node));
    p_NewNode->letter = c;
    return p_NewNode;
}



// Pour ajouter une lettre
void AddLetter(p_tree t,char base){

    p_letter_node p_new;
    p_letter_node curs;

    p_new = CreateAdvLetterNode(base); // Pour trouver le caractère ca sera p_new -> letter
    curs = t->root;

    if (curs->sons[0] == NULL){
        curs -> sons[0] = p_new;
    }






}