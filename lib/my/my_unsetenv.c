/*
** my_unsetenv.c for my_unsetenv in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 22:09:40 2016 nguyen kevin
** Last update Sat Apr  9 14:15:52 2016 nguyen kevin
*/

#include "header.h"

int			my_put_error(char **env, char *tab)
{
  if (tab == NULL)
    {
      my_putstr("unsetenv: Too few arguments.\n");
      return (-1);
    }
  if (env == NULL)
    {
      my_putstr("bash: env: the env is empty or doesn't exist\n");
      return (-1);
    }
  return (0);
}

char			**my_unsetenv(char **env, char **tab)
{
  int			i;
  int			j;

  j = 1;
  if (my_put_error(env, tab[j]) != 0)
    return (env);
  while (tab[j] != NULL)
    {
      i = 0;
      while (env[i] != NULL)
	{
	  if (my_compare(env[i], tab[j]) == 0)
	    {
	      while (env[i + 1] != NULL)
		{
		  env[i] = env[i + 1];
		  i++;
		}
	      env[i] = NULL;
	    }
	  i++;
	}
      j++;
    }
  return (env);
}
