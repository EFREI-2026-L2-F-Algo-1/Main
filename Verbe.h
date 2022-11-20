//
// Created by yassi on 19/11/2022.
//

#ifndef PROJET_ALGO_VERBE_H
#define PROJET_ALGO_VERBE_H

#endif //PROJET_ALGO_VERBE_H

#define AL_size 26




typedef struct t_letter_node_verbe
{
    char letter ;
    char* flechie;
    char personne;
    char temps;

    struct t_letter_node_verbe * sons[AL_size];
} t_letter_node_verbe, *p_letter_node_verbe ;