/*
** getenv.c for getenv in /home/nguye_z/rendu/PSU/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Tue Apr  5 12:20:59 2016 nguyen kevin
** Last update Tue Apr  5 17:32:03 2016 nguyen kevin
*/

#include "header.h"

int			is_or_not(char **env, char *search)
{
  int			i;
  int			j;
  int			size;

  size = my_strlen(search);
  i = 0;
  while (env[i] != NULL)
    {
      j = 0;
      while ((j < size) && (env[i][j] == search[j])
	     && (env[i][j] != '\0') && (search[j] != '\0'))
	j++;
      if (j == size)
	return (1);
      i++;
    }
  return (0);
}
