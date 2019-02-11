/*
** epur_str.c for epur_str in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Jan 24 21:32:38 2016 nguyen kevin
** Last update Wed Apr  6 11:46:38 2016 nguyen kevin
*/

#include "header.h"

char			*epur_str(char *str)
{
  char			*src;
  int			i;
  int			j;

  i = 0;
  j = 0;
  if ((src = malloc(sizeof(char *) * my_strlen(str) + 1)) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      if (str[i] == ' ' || str[i] == '\t')
	{
	  while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
	    i = i + 1;
	  if (j > 0 && str[i] != '\0')
	    src[j++] = ' ';
	}
      src[j] = str[i];
      j = j + 1;
      i = i + 1;
    }
  src[j] = '\0';
  return (src);
}
