/*
** EPITECH PROJECT, 2018
** task02
** File description:
** task02
*/

#include "../include/runner.h"

int my_putstr(char const *str)
{
    int bobo;

    bobo = 0;
    while (str[bobo] != '\0'){
        my_putchar(str[bobo]);
        bobo = bobo + 1;
    }
    return (0);
}

int power10(int n)
{
    int power = 1;

    while (n > 1) {
        power = power * 10;
        n = n - 1;
    }

    return (power);
}

char *int_to_string(int score)
{
    int is_neg = 0, mod, tmp, offset = 0;
    int digit_count = dcnt(abs(score + ((score < -2147483647) ? 1 : 0)));
    char *res = malloc(sizeof(*res) * (digit_count + 1));

    while (digit_count > 0) {
        tmp = score / power10(digit_count);
        mod = tmp % 10;
        mod *= ((is_neg) ? -1 : 1);
        res[(offset++)] = '0' + mod;
        digit_count -= 1;
    }
    res[(offset++)] = 0;
    return (res);
}