/*
** getenv.c for getenv in /home/nguye_z/rendu/PSU/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Tue Apr  5 12:20:59 2016 nguyen kevin
** Last update Thu Apr  7 10:33:44 2016 nguyen kevin
*/

#include "header.h"

char			*get_str(char **env, int i, int j)
{
  int			k;
  char			*str;

  j++;
  k = 0;
  if ((str = malloc(sizeof(char) * my_strlen(env[i]) + 1)) == NULL)
    return (NULL);
  while (env[i][j] != '\0')
    {
      str[k] = env[i][j];
      j++;
      k++;
    }
  str[k] = '\0';
  return (str);
}

char			*my_getenv(char **env, char *search)
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
	return (get_str(env, i, j));
      i++;
    }
  return (NULL);
}
