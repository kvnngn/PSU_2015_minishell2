/*
** my_get_path_pwd.c for my_get_path_pwd in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:51:59 2016 nguyen kevin
** Last update Wed Apr  6 15:05:14 2016 nguyen kevin
*/

#include "header.h"

char			*my_get_path_pwd(char **env)
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
	  if (env[i][0] == 'O' && env[i][1] == 'L' && env[i][2] == 'D'
	      && env[i][3] == 'P' && env[i][4] == 'W' && env[i][5] == 'D')
	    {
	      if ((pwd = malloc(sizeof(char) * my_strlen(env[i]) + 1)) == NULL)
		exit(0);
	      pwd = my_strcpy(pwd, path_pwd_from_env(env, i));
	    }
	  i++;
	}
    }
  return (pwd);
}
