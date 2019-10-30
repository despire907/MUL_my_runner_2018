/*
** EPITECH PROJECT, 2018
** my_runner.c
** File description:
** my_runner
*/

#include "../include/runner.h"

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h")){

    }else if (ac == 1)
        run();
    else
        return 84;
    return 0;
}