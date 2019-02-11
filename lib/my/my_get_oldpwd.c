/*
** my_get_oldpwd.c for my_get_oldpwd in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:58:41 2016 nguyen kevin
** Last update Wed Apr  6 12:29:11 2016 nguyen kevin
*/

#include "header.h"

char			*my_get_oldpwd(char **env)
{
  int			i;
  char			*old_pwd;

  i = 0;
  if (env == NULL)
    {
      my_putstr("bash: env: the env is empty or doesn't exist");
      return (NULL);
    }
  else
    {
      while (env[i] != NULL)
	{
	  if (env[i][0] == 'O' && env[i][1] == 'L' && env[i][2] == 'D'
	      && env[i][3] == 'P' && env[i][4] == 'W' && env[i][5] == 'D')
	    {
	      old_pwd = malloc(sizeof(char) * my_strlen(env[i]) + 1);
	      old_pwd = my_strcpy(old_pwd, oldpwd_from_env(env, i));
	    }
	  i++;
	}
    }
  return (old_pwd);
}
