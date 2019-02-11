/*
** old_pwd_to_tmp.c for old_pwd_to_tmp in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:53:52 2016 nguyen kevin
** Last update Sat Jan 23 21:54:31 2016 nguyen kevin
*/

#include "header.h"

char			**oldpwd_to_tmp(char **env, char *tmp)
{
  int			i;

  i = 0;
  while (env[i] != NULL)
    {
      if (env[i][0] == 'O' && env[i][1] == 'L' && env[i][2] == 'D'
	  && env[i][3] == 'P' && env[i][4] == 'W' && env[i][5] == 'D')
	{
	  env[i] = malloc(sizeof(char) * my_strlen(tmp) + 1);
	  my_strcpy(env[i], tmp);
	}
      i++;
    }
  return (env);
}
