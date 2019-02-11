/*
** my_exec.c for my_exec in /home/nguye_z/rendu/PSU_2015_my_exec
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Tue Jan  5 11:30:24 2016 nguyen kevin
** Last update Sat Apr  9 13:29:45 2016 nguyen kevin
*/

#include "header.h"

int			valid_or_not(char *tab)
{
  int			i;

  i = 0;
  while (tab[i] != '\0')
    {
      if (tab[i] == '/' && tab[i + 1] == '/')
	return (1);
      else if (tab[i] == '.' && tab[i + 1] == '/')
	return (1);
      i++;
    }
  return (0);
}
