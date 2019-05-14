##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Puigsagur
##

CC		=	gcc

CFLAGS	=	-Werror -Wall -Wextra -W -g3

SRC		=	menu.c					\
			print_menu.c			\
			ennemi_aggro.c			\
			main.c					\
			menu_parallax.c			\
			create_obj.c			\
			hero.c					\
			hero_movement.c			\
			collide.c				\
			choose_lvl.c			\
			game.c					\
			init_data.c				\
			event.c					\
			localisation.c			\
			animation.c				\
			call_collide.c			\
			pnj.c					\
			str_toword.c			\
			parsing_and_collide.c	\
			menu_pause.c			\
			print_pause.c			\
			if_nosave.c				\
			how_to_play.c			\
			save_pnj.c				\
			save_write.c			\
			save_read.c				\
			init_mob.c				\
			how_to_more.c			\
			menu_more.c				\
			parsing_coll_more.c		\
			pnj_more.c				\
			str_to_word.c			\
			save_pnj_more.c			\
			create_boss.c			\
			boss_action.c			\
			fboss.c					\
			life.c					\
			call_e.c				\
			call_a.c				\
			print_inv.c				\
			call_cast.c				\
			castle.c				\
			boss_collidesuite.c		\
			create_boss_more.c		\

OBJ		=	$(SRC:.c=.o)

NAME	=	my_rpg

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my all
	$(CC) -o $(NAME) $(OBJ) -L./lib/my -lmy -lm -lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio
	rm *.o

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm lib/my/libmy.a

re: fclean all
