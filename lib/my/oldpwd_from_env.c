/*
** oldpwd_from_env.c for oldpwd_from_env in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:56:35 2016 nguyen kevin
** Last update Sat Jan 23 21:57:28 2016 nguyen kevin
*/

#include "header.h"

char			*oldpwd_from_env(char **env, int i)
{
  char			*old_pwd;
  int			k;
  int			j;
  int			size;

  j = 3;
  size = 0;
  while (env[i][j] != 0)
    {
      j++;
      size++;
    }
  j = 3;
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
