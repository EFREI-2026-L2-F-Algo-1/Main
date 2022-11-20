//
// Created by yassi on 19/11/2022.
//

#ifndef PROJET_ALGO_ADV_H
#define PROJET_ALGO_ADV_H

#endif //PROJET_ALGO_ADV_H
#include <stdbool.h>
#define AL_size 26

// Un noeud qui peut avoir 26 enfant, et chacun de ses enfants peut avoir 26 enfant etc
typedef struct t_letter_node_Adv
{
    char letter ;
    int flechie; // 0 si ce ne s'arrete pas à un mot complet 1 sinon
    struct t_letter_node_Adv * sons[AL_size];
} t_letter_node_Adv, *p_letter_node_Adv ;



// Arbre qui contiendra ces noeuds
typedef struct s_tree_Adv
{
    p_letter_node_Adv root;
} t_tree_Adv, *p_tree_Adv;


// fonction relatives aux adverbes
t_tree_Adv CreateAdvTree(void);
p_letter_node_Adv CreateAdvLetterNode(char);
void AddLetter(p_tree_Adv , char base);


void FillAdvTree(char forme_de_base[], t_tree_Adv Tree);