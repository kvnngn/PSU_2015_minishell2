/*
** cpy_tab.c for cpy_tab in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Jan 24 14:57:57 2016 nguyen kevin
** Last update Wed Apr  6 15:03:45 2016 nguyen kevin
*/

#include "header.h"

char			**cpy_tab(char **new_tab, char **tab)
{
  int			i;

  i = 0;
  while (tab[i] != NULL)
    {
      if ((new_tab[i] = malloc(sizeof(char) * my_strlen(tab[i]) + 1)) == NULL)
	exit(0);
      new_tab[i] = my_strcpy(new_tab[i], tab[i]);
      i++;
    }
  new_tab[i] = NULL;
  return (new_tab);
}
