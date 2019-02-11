/*
** my_setenv.c for my_setenv in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 22:07:43 2016 nguyen kevin
** Last update Wed Apr  6 15:02:37 2016 nguyen kevin
*/

#include "header.h"

char			**replace_env(char **env, char *to_add, char *tab1)
{
  int			i;
  int			j;
  int			size;

  size = my_strlen(tab1);
  i = 0;
  while (env[i] != NULL)
    {
      j = 0;
      while ((j < size) && (env[i][j] == tab1[j])
	     && (env[i][j] != '\0') && (tab1[j] != '\0'))
	j++;
      if (j == size)
	{
	  if ((env[i] = malloc(sizeof(char) * my_strlen(to_add) + 1)) == NULL)
	    exit(0);
	  env[i] = my_strcpy(env[i], to_add);
	  return (env);
	}
      i++;
    }
  return (env);
}

char			**my_setenv2(char **env, char *tab1, char *tab2)
{
  char			*to_add;

  to_add = make_env(tab1, tab2);
  if (is_or_not(env, tab1) == 1)
    replace_env(env, to_add, tab1);
  return (env);
}
