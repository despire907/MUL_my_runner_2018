/*
** EPITECH PROJECT, 2018
** runner.h
** File description:
** runner
*/

#ifndef EPITECH_PROJECT_RUNNER_H
#define EPITECH_PROJECT_RUNNER_H

#include <stddef.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <SFML/Audio/Music.h>

struct sprite {
    sfSprite *sprite;
    sfSprite *sprite2;
    sfSprite *sprite3;
    sfSprite *sprite4;
    sfSprite *sprite5;
    sfSprite *sprite6;
    sfSprite *sprite7;
    sfSprite *sprite8;
    sfSprite *spriteperso;
    sfSprite *spritecrate;
};

struct texture {
    sfTexture *texture;
    sfTexture *text2;
    sfTexture *text3;
    sfTexture *text4;
    sfTexture *text5;
    sfTexture *text6;
    sfTexture *text7;
    sfTexture *text8;
    sfTexture *textperso;
    sfTexture *textcrate;
};


int power10(int n);
char *int_to_string(int score);
void rec_mouvement_run(sfIntRect *rec, int taille_sprite, int fin_sprite, int hauteur_sprite);
int abs(int n);
int dcnt(int n);
int my_putstr(char const *str);
void my_putchar(char c);
sfRenderWindow *createMyWindow(unsigned int width, unsigned int height);

#endif //EPITECH_PROJECT_RUNNER_H
