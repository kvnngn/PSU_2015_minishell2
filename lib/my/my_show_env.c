/*
** my_show_env.c for my_show_env in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:54:38 2016 nguyen kevin
** Last update Tue Mar 29 11:07:08 2016 nguyen kevin
*/

#include "header.h"

int			my_show_env(char **env)
{
  int			i;

  i = 0;
  if (env == NULL)
    {
      my_putstr("bash: env: the env is empty or doesn't exist");
      return (-1);
    }
  else
    {
      while (env[i] != NULL)
	{
	  my_putstr(env[i]);
	  my_putstr("\n");
	  i++;
	}
      return (0);
    }
}
