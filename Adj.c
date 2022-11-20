#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>
#include "Adj.h"


// cree l'arbre des adj
t_tree_Adj CreateAdjTree(void) {
    t_tree_Adj myTree;
    t_letter_node_Adj first;

    first.letter = 35; // un #
    first.genre = 0;
    first.nombre = 0;
    first.flechie = NULL;

    return myTree;
}
