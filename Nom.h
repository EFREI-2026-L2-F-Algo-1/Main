#ifndef PROJET_ALGO_NOM_H
#define PROJET_ALGO_NOM_H

#endif //PROJET_ALGO_NOM_H
#define AL_size 26



typedef struct t_letter_node_Nom
{
    char letter ;
    char* flechie;
    char genre;
    char nombre;
    struct t_letter_node_Nom * sons[AL_size];
} t_letter_node_Nom, *p_letter_node_Nom ;

// Arbre des nom
typedef struct s_tree_Nom
{
    p_letter_node_Nom root[26];
} t_tree_Nom, *p_tree_Nom;