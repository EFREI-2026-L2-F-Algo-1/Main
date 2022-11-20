#include <stdio.h>
#include <stdlib.h>
#include "Nom.h"



// cree l'arbre des noms
t_tree_Nom CreateNomTree(void) {
    t_tree_Nom myTree;
    t_letter_node_Nom first;

    first.letter = 35; // un #
    first.genre = 0;
    first.nombre = 0;
    first.flechie = NULL;

    return myTree;
}
