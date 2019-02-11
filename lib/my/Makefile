##
## Makefile for Makefile in /home/nguye_z/rendu/PSU_2015_my_ls_bootstrap/lib/my
## 
## Made by nguyen kevin
## Login   <nguye_z@epitech.net>
## 
## Started on  Tue Nov 17 14:30:36 2015 nguyen kevin
## Last update Sat Apr  9 13:31:07 2016 nguyen kevin
##

SRC	=	my_put_nbr.c \
		my_getnbr.c \
		my_putchar.c \
		my_putstr.c \
		my_str_to_wordtab.c \
		my_strlen.c \
		my_strcpy.c \
		get_next_line.c \
		my_strcat.c \
		nbr_args.c \
		nbr_word.c \
		my_exec.c \
		pwd_from_env.c \
		path_pwd_from_env.c \
		my_get_pwd.c \
		my_get_path_pwd.c \
		my_set_oldpwd.c \
		old_pwd_to_tmp.c \
		my_show_env.c \
		oldpwd_from_env.c \
		path_oldpwd_from_env.c \
		my_get_oldpwd.c \
		my_get_path_oldpwd.c \
		my_set_pwd.c \
		my_cd.c \
		make_env.c \
		my_setenv.c \
		my_setenv2.c \
		my_compare.c \
		my_unsetenv.c \
		path_from_env.c \
		my_get_path.c \
		path_path_from_env.c \
		cpy_tab.c \
		my_path_to_wordtab.c \
		nb_path.c \
		make_path.c \
		remake_path.c \
		epur_str.c \
		puterror.c \
		my_strcmp.c \
		my_getenv.c \
		is_or_not.c \
		exit_error.c \
		check_esperluette.c \
		valid_or_not.c \
		delete_command_done.c \

NAME	=	libmy.a

CFLAGS	= 	-W -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

HEAD	=	header.h \

all: $(NAME)

$(NAME):
	gcc -c $(SRC) $(CFLAGS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ..
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
