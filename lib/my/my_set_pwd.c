/*
** my_set_pwd.c for my_set_pwd in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 22:04:10 2016 nguyen kevin
** Last update Wed Apr  6 12:29:33 2016 nguyen kevin
*/

#include "header.h"

char			**my_set_pwd(char **env)
{
  int			i;

  i = 0;
  while (env[i] != NULL)
    {
      if (env[i][0] == 'P' && env[i][1] == 'W' && env[i][2] == 'D')
	{
	  env[i] = malloc(sizeof(char) * my_strlen(my_get_oldpwd(env)) + 1);
	  env[i] = my_strcpy(env[i], my_get_oldpwd(env));
	}
      i++;
    }
  return (env);
}
