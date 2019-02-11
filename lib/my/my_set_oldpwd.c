/*
** my_set_oldpwd.c for my_set_oldpwd in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:53:12 2016 nguyen kevin
** Last update Wed Apr  6 12:28:59 2016 nguyen kevin
*/

#include "header.h"

char			**my_set_oldpwd(char **env)
{
  int			i;

  i = 0;
  while (env[i] != NULL)
    {
      if (env[i][0] == 'P' && env[i][1] == 'W' && env[i][2] == 'D')
	{
	  env[i] = malloc(sizeof(char) * my_strlen(my_get_pwd(env)) + 1);
	  env[i] = my_strcpy(env[i], my_get_pwd(env));
	}
      i++;
    }
  return (env);
}
