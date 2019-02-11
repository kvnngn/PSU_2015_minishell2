/*
** my_get_path.c for my_get_path.c in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@epitech.net>
** 
** Started on  Sun Jan 24 12:39:39 2016 nguyen kevin
** Last update Wed Apr  6 11:59:02 2016 nguyen kevin
*/

#include "header.h"

char			*path_path(char *path)
{
  int			i;
  int			j;
  char			*path_real;

  i = 0;
  j = 0;
  path_real = malloc(sizeof(char) * my_strlen(path) + 2);
  while (path[i] != '=')
    i++;
  i++;
  while (path[i] != 0)
    {
      path_real[j] = path[i];
      i++;
      j++;
    }
  path_real[j] = '/';
  path_real[j + 1] = '\0';
  return (path_real);
}

char			*my_get_path(char **env)
{
  int			i;
  char			*path;

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
	  if (env[i][0] == 'P' && env[i][1] == 'A' && env[i][2] == 'T'
	      && env[i][3] == 'H')
	    {
	      path = malloc(sizeof(char) * my_strlen(env[i]) + 2);
	      path = my_strcpy(path, path_from_env(env, i));
	      path = my_strcpy(path, path_path(path));
	    }
	  i++;
	}
    }
  return (path);
}
