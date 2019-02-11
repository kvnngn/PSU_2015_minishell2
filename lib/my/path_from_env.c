/*
** pwd_from_env.c for pwd_from_env in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:46:44 2016 nguyen kevin
** Last update Sun Jan 24 12:41:55 2016 nguyen kevin
*/

#include "header.h"

char			*path_from_env(char **env, int i)
{
  char			*path;
  int			k;
  int			j;
  int			size;

  j = 0;
  size = 0;
  while (env[i][j] != 0)
    {
      j++;
      size++;
    }
  j = 0;
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
