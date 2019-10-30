/*
** EPITECH PROJECT, 2018
** my_runner.c
** File description:
** my_runner
*/

#include "../include/runner.h"

int main(void)
{
    sfRenderWindow *window;
    int t = 0;
    int jump = 0;
    int score = 0;
    sfFont *font;
    sfText *text;
    sfText *textt2;
    sfTexture *texture;
    sfSprite *sprite;
    sfEvent event;
    sfTexture *text2;
    sfSprite *sprite2;
    sfTexture *text3;
    sfSprite *sprite3;
    sfTexture *text4;
    sfSprite *sprite4;
    sfTexture *text5;
    sfSprite *sprite5;
    sfTexture *text6;
    sfSprite *sprite6;
    sfTexture *text7;
    sfSprite *sprite7;
    sfTexture *text8;
    sfSprite *sprite8;
    sfTexture *textperso;
    sfSprite *spriteperso;
    sfTexture *textcrate;
    sfSprite *spritecrate;
    sfMusic *music;
    sfTime time;
    float second;
    sfClock *clock = sfClock_create();
    sfIntRect rect;
    sfIntRect rect2;
    sfIntRect rect3;
    sfIntRect rect4;
    sfIntRect rect5;
    sfIntRect rect6;
    sfIntRect rect7;
    sfIntRect rectperso;
    sfVector2f scale = {0.5, 0.5};
    sfVector2f position = {250, 700};
    sfVector2f pos2 = {0, 925};
    sfVector2f game2 = {150, 50};
    sfVector2f game = {50, 50};
    sfVector2f dep = {0, 0};
    float pos_x = 1920;
    float pos_y = 875;
    sfVector2f vector = {pos_x, pos_y};

    rectperso.top = 0;
    rectperso.left = 0;
    rectperso.width = 434;
    rectperso.height = 506;

    rect7.top = 0;
    rect7.left = 0;
    rect7.width = 1920;
    rect7.height = 1080;

    rect6.top = 0;
    rect6.left = 0;
    rect6.width = 1920;
    rect6.height = 1080;

    rect5.top = 0;
    rect5.left = 0;
    rect5.width = 1920;
    rect5.height = 1080;

    rect4.top = 0;
    rect4.left = 0;
    rect4.width = 1920;
    rect4.height = 1080;

    rect3.top = 0;
    rect3.left = 0;
    rect3.width = 1920;
    rect3.height = 1080;

    rect2.top = 0;
    rect2.left = 0;
    rect2.width = 1920;
    rect2.height = 1080;

    rect.top = 0;
    rect.left = 0;
    rect.width = 1920;
    rect.height = 1080;

    window = createMyWindow(1920, 1080);
    sfRenderWindow_setFramerateLimit(window, 30);
    music = sfMusic_createFromFile("musique/music.ogg");
    sfMusic_setLoop(music, sfTrue);
    texture = sfTexture_createFromFile("image/sky.png", NULL);
    sprite = sfSprite_create();
    text2 = sfTexture_createFromFile("image/rocks.png", NULL);
    sprite2 = sfSprite_create();
    text3 = sfTexture_createFromFile("image/clouds_1.png", NULL);
    sprite3 = sfSprite_create();
    text4 = sfTexture_createFromFile("image/ground_3.png", NULL);
    sprite4 = sfSprite_create();
    text5 = sfTexture_createFromFile("image/clouds_2.png", NULL);
    sprite5 = sfSprite_create();
    text6 = sfTexture_createFromFile("image/ground_2.png", NULL);
    sprite6 = sfSprite_create();
    text7 = sfTexture_createFromFile("image/ground_1.png", NULL);
    sprite7 = sfSprite_create();
    text8 = sfTexture_createFromFile("image/sky.png", NULL);
    sprite8 = sfSprite_create();
    textperso = sfTexture_createFromFile("image/Run__000-1.png", NULL);
    spriteperso = sfSprite_create();
    textcrate = sfTexture_createFromFile("image/Crate.png", NULL);
    spritecrate = sfSprite_create();
    font = sfFont_createFromFile("image/BebasNeue.otf");
    sfMusic_play(music);

    while (sfRenderWindow_isOpen(window)) {

        sfSprite_setTexture(sprite, texture, sfTrue);
        sfSprite_setTexture(sprite2, text2, sfTrue);
        sfSprite_setTexture(sprite3, text3, sfTrue);
        sfSprite_setTexture(sprite4, text4, sfTrue);
        sfSprite_setTexture(sprite5, text5, sfTrue);
        sfSprite_setTexture(sprite6, text6, sfTrue);
        sfSprite_setTexture(sprite7, text7, sfTrue);
        sfSprite_setTexture(sprite8, text8, sfTrue);
        sfSprite_setTexture(spriteperso, textperso, sfTrue);
        sfSprite_setTexture(spritecrate, textcrate, sfTrue);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfSprite_setPosition(spritecrate, vector);

        if (jump > 0) {
            rectperso.left = 1176;
            position.y -= 15;
            jump++;
            if (jump >= 17){
                position.y += 30;
                if (position.y == 700)
                    jump = 0;
            }
        }

        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        t++;
        time = sfClock_getElapsedTime(clock);
        second = time.microseconds / 10000.0;
        if (second > 1) {

            sfSprite_setTextureRect(sprite3, rect2);
            rect2.left = rect2.left + 1;
            sfTexture_setRepeated(text3, sfTrue);
            sfRenderWindow_drawSprite(window, sprite3, NULL);

            sfSprite_setTextureRect(sprite2, rect);
            rect.left = rect.left + 2;
            sfTexture_setRepeated(text2, sfTrue);
            sfRenderWindow_drawSprite(window, sprite2, NULL);

            sfSprite_setTextureRect(sprite5, rect4);
            rect4.left = rect4.left + 3;
            sfTexture_setRepeated(text5, sfTrue);
            sfRenderWindow_drawSprite(window, sprite5, NULL);

            sfSprite_setTextureRect(sprite7, rect6);
            rect6.left = rect6.left + 4;
            sfTexture_setRepeated(text7, sfTrue);
            sfRenderWindow_drawSprite(window, sprite7, NULL);

            sfSprite_setTextureRect(sprite6, rect5);
            rect5.left = rect5.left + 5;
            sfTexture_setRepeated(text6, sfTrue);
            sfRenderWindow_drawSprite(window, sprite6, NULL);

            sfSprite_setTextureRect(sprite4, rect3);
            rect3.left = rect3.left + 6;
            sfTexture_setRepeated(text4, sfTrue);
            sfRenderWindow_drawSprite(window, sprite4, NULL);

            sfSprite_setTextureRect(sprite8, rect7);
            rect7.left = rect7.left + 20;
            sfTexture_setRepeated(text8, sfTrue);
            sfSprite_setPosition(sprite8, pos2);
            sfRenderWindow_drawSprite(window, sprite8, NULL);

            sfSprite_move(spritecrate, dep);
            dep.x = dep.x - 20;
            if ((dep.x <= -1520 && dep.x >= -1640 && jump == 0))
                dep.x = 0;
            if (dep.x == -1940)
                dep.x = 0;
            sfRenderWindow_drawSprite(window, spritecrate, NULL);

            score++;

            textt2 = sfText_create();
            sfText_setPosition(textt2, game);
            sfText_setString(textt2, "Score : ");
            sfText_setFont(textt2, font);
            sfText_setCharacterSize(textt2, 40);
            sfRenderWindow_drawText(window, textt2, NULL);

            text = sfText_create();
            sfText_setPosition(text, game2);
            sfText_setString(text, int_to_string(score));
            sfText_setFont(text, font);
            sfText_setCharacterSize(text, 40);
                sfRenderWindow_drawText(window, text, NULL);

            if (sfKeyboard_isKeyPressed(sfKeySpace) && jump == 0) {
                jump = 1;
            }else if (t % 2 == 0)
                rec_mouvement_run(&rectperso, 588, 3528, 600);

            sfSprite_setScale(spriteperso, scale);
            sfSprite_setPosition(spriteperso, position);
            sfSprite_setTextureRect(spriteperso, rectperso);
            sfRenderWindow_drawSprite(window, spriteperso, NULL);
        }
        sfRenderWindow_display(window);
    }
    sfMusic_destroy(music);
    sfRenderWindow_destroy(window);
    return (0);
}