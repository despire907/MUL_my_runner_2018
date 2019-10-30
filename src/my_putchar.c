/*
** EPITECH PROJECT, 2018
** put_char
** File description:
** put_char
*/

#include "../include/runner.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void rec_mouvement_run(sfIntRect *rec, int taille_sprite, int fin_sprite, int hauteur_sprite)
{
    rec->left = rec->left + taille_sprite;
    if (rec->left >= fin_sprite) {
        rec->left = 0;
        rec->top = rec->top + hauteur_sprite;
        if (rec->top >= hauteur_sprite * 7)
            rec->top = 0;
    }
}

int abs(int n)
{
    if (n < 0)
        return (-n);
    else
        return (n);
}

int dcnt(int n)
{
    int result = 0;
    int begin = 1;

    while (begin == 1 || n != 0) {
        begin = 0;
        n = n / 10;
        result = result + 1;
    }

    return (result);
}
