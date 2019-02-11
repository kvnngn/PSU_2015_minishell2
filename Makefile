##
## Makefile for Makefile in /home/nguye_z/rendu/PSU_2015_my_printf
## 
## Made by nguyen kevin
## Login   <nguye_z@epitech.net>
## 
## Started on  Sat Nov 14 03:29:45 2015 nguyen kevin
## Last update Fri Apr  8 23:27:22 2016 nguyen kevin
##


NAME	= mysh

PC	= mysh.c \
	  builtins/builtins.c \

CFLAGS  = -W -Wextra

PO	= $(PC:.c=.o)

all:	$(NAME)

$(NAME) : $(PO)
	make -C lib/my/ re
	make -C lib/my/ clean
	make -C lib/my/
	cc -o $(NAME) $(PO) -lmy $(CFLAGS) -L./lib

clean:
	rm -f $(PO)

fclean:	clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re 
