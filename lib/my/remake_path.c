/*
** remake_path.c for remake_path in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Jan 24 21:25:42 2016 nguyen kevin
** Last update Tue Apr  5 12:11:24 2016 nguyen kevin
*/

#include "header.h"

char			**remake_path(char **path)
{
  int			i;
  int			size;

  i = 0;
  while (path[i] != NULL)
    {
      size = my_strlen(path[i]);
      while (size > 0)
	{
	  if (path[i][size - 1] == '/')
	    {
	      path[i][size] = 0;
	      size = 0;
	    }
	  size--;
	}
      i++;
    }
  return (path);
}
