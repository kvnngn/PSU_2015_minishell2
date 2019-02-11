/*
** make_env.c for make_env in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 22:05:30 2016 nguyen kevin
** Last update Wed Apr  6 15:04:01 2016 nguyen kevin
*/

#include "header.h"

char			*make_env(char *tab1, char *tab2)
{
  char			*to_add;

  if ((to_add = malloc(sizeof(char) * my_strlen(tab1)
		       + my_strlen (tab2) + 2)) == NULL)
    exit(0);
  to_add = my_strcpy(to_add, tab1);
  to_add = my_strcat(to_add, "=");
  to_add = my_strcat(to_add, tab2);
  return (to_add);
}
