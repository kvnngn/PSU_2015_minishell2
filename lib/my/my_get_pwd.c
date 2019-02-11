/*
** my_get_pwd.c for my_get_pwd in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:50:38 2016 nguyen kevin
** Last update Wed Apr  6 11:47:30 2016 nguyen kevin
*/

#include "header.h"

char			*my_get_pwd(char **env)
{
  int			i;
  char			*pwd;

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
	  if (env[i][0] == 'P' && env[i][1] == 'W' && env[i][2] == 'D')
	    {
	      pwd = malloc(sizeof(char) * my_strlen(env[i]) + 1);
	      my_strcpy(pwd, pwd_from_env(env, i));
	    }
	  i++;
	}
    }
  return (pwd);
}
