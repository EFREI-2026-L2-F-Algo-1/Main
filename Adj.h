//
// Created by yassi on 19/11/2022.
//

#ifndef PROJET_ALGO_ADJ_H
#define PROJET_ALGO_ADJ_H

#endif //PROJET_ALGO_ADJ_H


#define AL_size 26


typedef struct t_letter_node_Adj
{
    char letter ;
    char* flechie;
    char genre;
    char nombre;
    struct t_letter_node_Adj * sons[AL_size];
} t_letter_node_Adj, *p_letter_node_Adj ;

// Arbre des adj
typedef struct s_tree_Adj
{
    p_letter_node_Adj root[26];
} t_tree_Adj, *p_tree_Adj;