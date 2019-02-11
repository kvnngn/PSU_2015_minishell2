/*
** path_pwd_from_env.c for path_pwd_from_env in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:48:14 2016 nguyen kevin
** Last update Sun Jan 24 13:15:00 2016 nguyen kevin
*/

#include "header.h"

char			*path_pwd_from_env(char **env, int i)
{
  char			*pwd;
  int			k;
  int			j;
  int			size;

  j = 4;
  size = 0;
  while (env[i][j] != 0)
    {
      j++;
      size++;
    }
  j = 5;
  k = 0;
  pwd = malloc(sizeof(char) * size + 1);
  while (env[i][j] != 0)
    {
      pwd[k] = env[i][j];
      j++;
      k++;
    }
  pwd[k] = 0;
  return (pwd);
}
