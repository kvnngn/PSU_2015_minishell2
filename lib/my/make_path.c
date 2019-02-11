/*
** make_path.c for make_path in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Jan 24 21:24:40 2016 nguyen kevin
** Last update Sun Jan 24 21:25:37 2016 nguyen kevin
*/

#include "header.h"

char			**make_path(char **path, char *binary)
{
  int			k;

  k = 0;
  while (path[k] != NULL)
    {
      my_strcat(path[k], binary);
      k++;
    }
  return (path);
}
