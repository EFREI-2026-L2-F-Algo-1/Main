#ifndef PROJET_ALGO_TREE_H
#define PROJET_ALGO_TREE_H

#define AL_size 26

#endif //PROJET_ALGO_TREE_H

// Un noeud qui peut avoir 26 enfant, et chacun de ses enfants peut avoir 26 enfant etc
typedef struct t_letter_node
{
    char letter ;
    struct t_letter_node * sons[AL_size];
} t_letter_node, *p_letter_node ;





// Arbre qui contiendra ces noeuds
typedef struct s_tree
{
    p_letter_node root;
} t_tree, *p_tree;





t_tree CreateAdvTree(void);
p_letter_node CreateAdvLetterNode(char);
void AddLetter(p_tree, char base);