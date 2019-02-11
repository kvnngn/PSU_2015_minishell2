/*
** path_oldpwd_from_env.c for path_oldpwd_from_env in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:57:44 2016 nguyen kevin
** Last update Sat Jan 23 21:58:34 2016 nguyen kevin
*/

#include "header.h"

char			*path_oldpwd_from_env(char **env, int i)
{
  char			*old_pwd;
  int			k;
  int			j;
  int			size;

  j = 7;
  size = 0;
  while (env[i][j] != 0)
    {
      j++;
      size++;
    }
  j = 7;
  k = 0;
  old_pwd = malloc(sizeof(char) * size + 1);
  while (env[i][j] != 0)
    {
      old_pwd[k] = env[i][j];
      j++;
      k++;
    }
  old_pwd[k] = 0;
  return (old_pwd);
}
