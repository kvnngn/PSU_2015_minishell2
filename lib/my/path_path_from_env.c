/*
** path_path_from_env.c for path_path_from_env in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@epitech.net>
** 
** Started on  Sun Jan 24 12:52:36 2016 nguyen kevin
** Last update Sun Jan 24 16:09:25 2016 nguyen kevin
*/

#include "header.h"

char			where_is_path(char **env)
{
  int			i;

  i = 0;
  while (env[i][0] != 'P' && env[i][1] != 'A' && env[i][2] != 'T'
	 && env[i][3] != 'H' && env[i][4] != '=')
    i++;
  return (i);
}

char			*path_path_from_env(char **env)
{
  char			*path;
  int			k;
  int			j;
  int			size;
  int			i;

  i = where_is_path(env);
  j = 5;
  size = 0;
  while (env[i][j] != 0)
    {
      j++;
      size++;
    }
  j = 5;
  k = 0;
  path = malloc(sizeof(char) * size + 1);
  while (env[i][j] != 0)
    {
      path[k] = env[i][j];
      j++;
      k++;
    }
  path[k] = 0;
  return (path);
}
