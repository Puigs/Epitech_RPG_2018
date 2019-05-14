/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Puigsagur
*/

#ifndef __MY_H__
#define __MY_H__

#include <SFML/System/Vector2.h>
#include <SFML/Graphics/Transform.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Types.h>
#include <SFML/System/Time.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Graphics/PrimitiveType.h>
#include <SFML/Graphics/Vertex.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "menu.h"
#include "hero.h"
#include "map.h"

#define slime "layers/shime1.png"
#define bubble "layers/bulle1.png"

typedef struct screen_s {
    sfRenderWindow *window;
    sfEvent event;
} screen_t;

typedef struct mob_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    int pv;
    float div;
    int a;
    sfVector2f move;
    struct mob_s *next;
}mob_t;

typedef struct boss_s {
    sfSprite *boss;
    sfSprite *spark;
    sfTexture *tboss;
    sfTexture *tspark;
    sfVector2f pos;
    sfVector2f pos2;
    int pv;
    float div;
    sfIntRect rboss;
    sfIntRect rspark;
    int front;
    int side;
    sfClock *clock;
    sfTime timer;
    float seconds;
    sfClock *clock2;
    sfTime timer2;
    float seconds2;
    int att;
    int spk;
    int a;
    int stat;
}boss_t;

typedef struct inv_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfIntRect rect;
    sfClock *clock;
    sfTime timer;
    float seconds;
    int mouse;
    int y;
    int x;
} inv_t;

typedef struct obj_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfIntRect rect;
    sfClock *clock;
    sfTime timer;
    float seconds;
    int mouse;
} obj_t;

typedef struct data_s {
    obj_t **parallax;
    screen_t *screen;
    obj_t *title;
    map_t ***map;
    mob_t ****mob;
    int nb_mob;
    int y;
    int x;
    int l;
    int i;
    int s_i;
    int pnj;
    mob_t *ennemy;
    hero_t *hero;
    int **local;
    int **col;
    button_t *d_pnj;
    button_t *s_pnj;
    int if_save;
    int pause;
    int save;
    boss_t *boss;
    boss_t *sboss;
    int key;
    obj_t **inv;
    obj_t **key_inv;
    inv_t **key1;
    button_t *call_e;
    button_t *call_a;
    button_t *cast;
} data_t;

char *my_malloc(int len);
/*Choose_lvl*/
void choose_lvl(data_t *data, button_t *sprite);
/*Menu*/
void my_events2(sfRenderWindow *window, data_t *data);
void print_s(button_t *menu, sfRenderWindow *window);
button_t *createmenu(void);
button_t *print_sprite2(sfRenderWindow *window, button_t *sprite);
void print_menu(button_t *menu, sfRenderWindow *window);
int menu(button_t *sprite, data_t *data);
void game(sfRenderWindow *window, data_t *data);
void createmenu_text(button_t *menu);
/*Data*/
obj_t *create_obj(const char *path_to_spritesheet, \
sfVector2f pos, sfIntRect rect);
void init_data(data_t *data);
/*Parallax*/
void init_parallax(data_t *data);
void move_parallax(data_t *data);
void draw_para(data_t *data);
/*hero movement && collition*/
void hmovement(data_t *data);
void collide(data_t *data);
void is_collide(data_t *data);
/*Map_creation*/
map_t *create_map(const char *path_to_spritesheet, sfVector2f pos, \
sfIntRect rect, int *nb);
void init_map(data_t *data);
/*Fonction principal du jeu*/
void start_game(data_t *data);
void manage_event_game(data_t *data);
/*Personnage*/
void move(data_t *data);
void my_anime(hero_t *hero);
void attack_left(hero_t *hero);
/*Mob*/
void init_mob(data_t *data);
void create_slime(data_t *data, sfVector2f pos);
mob_t *create_mob(const char *path, sfVector2f pos, sfIntRect rect, int life);
void init_mob2(data_t *data);
/*localisation*/
void check_localisation(data_t *data);
/*PNJ*/
void init_pnj(data_t *data);
void init_pnj_save(data_t *data);
void draw_dial(data_t *data);
void draw_dial2(data_t *data);
void draw_s_dial(data_t *data);
void init_pnj_text(data_t *data);
void init_pnj_more(data_t *data);
char **str_to_word(char **array, char *str, int nb, char z);
/*collision*/
char **str_toword(char *str, char z);
int **can_move(data_t *data);
char **my_str_to_word_array(char *str);
int can_movee(data_t *data);
int my_getnbr(char const *str);
int **can_move_more(data_t *data, int **coll);
int **create_coll(char *mname);
/*pause*/
int bpause(data_t *data, int c);
void launch(data_t *data);
void no_save(data_t *data);
void print_menu2(button_t *menu, sfRenderWindow *window);
button_t *print_sprite3(sfRenderWindow *window, button_t *sprite);
void print_s2(button_t *menu, sfRenderWindow *window);
/*how to play*/
void how_to_play(data_t *data);
void print_show_more(button_t *menu, int a);
/*game_over*/
void game_over(data_t *data);
/*Save*/
void save_write(data_t *data);
void save_read(data_t *data);
void check_save(data_t *data);
void menu_more(button_t *sprite, data_t *data);
void init_pnj_save_more(data_t *data);
void draw_s_dial_more(data_t *data);
/*boss*/
boss_t *boss_creation(void);
void boss_face(boss_t *boss, hero_t *hero);
void print_boss(boss_t *boss, sfRenderWindow *window);
void boss_detection(hero_t *hero, boss_t *boss);
void b_attaque(boss_t *boss, data_t *data);
void print_spark(boss_t *boss, sfRenderWindow *window);
void boss_collide(boss_t *boss, data_t *data);
void col_att(data_t *data);
void collide2(data_t *data);
void victory(data_t *data);
boss_t *sboss_creation(void);
void my_fboss(data_t *data);
void collide3(data_t *data);
void boss_face2(boss_t *boss, hero_t *hero);
void which_boss(data_t *data);
void print_life(data_t *data);
void boss_collidesuite(data_t *data, boss_t *boss);
/*call*/
void init_call_e(data_t *data);
void call_e(data_t *data);
void init_call_a(data_t *data);
void call_a(data_t *data);
void init_call_cast(data_t *data);
void call_cast(data_t *data);
/*inventaire*/
void print_inv(data_t *data);
void print_key(data_t *data);
inv_t *create_key(const char *path_to_spritesheet, sfVector2f pos, \
sfIntRect rect);
void take_key(data_t *data);
void take_down_key(data_t *data);
/*castle*/
void check_castle(data_t *data);
void init_boss_creation(boss_t *boss);
void call_hmovement(data_t *data);
void down_side(data_t *data);
void left_side(data_t *data);
void right_side(data_t *data);
void up_side(data_t *data);

#endif /* __MY_H__ */
