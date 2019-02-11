/*
** my_compare.c for my_compare in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 22:08:47 2016 nguyen kevin
** Last update Sat Jan 23 22:09:33 2016 nguyen kevin
*/

#include "header.h"

int			my_compare(char *tab1, char *tab2)
{
  int			i;
  int			size;

  i = 0;
  size = my_strlen(tab2);
  while (tab2[i] == tab1[i] && tab2[i] != '\0'
	 && tab1[i] != '\0' && i <= size)
    i++;
  if (i != size)
    return (-1);
  else
    return (0);
}
