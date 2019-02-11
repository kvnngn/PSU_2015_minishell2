/*
** my_exec.c for my_exec in /home/nguye_z/rendu/PSU_2015_my_exec
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Tue Jan  5 11:30:24 2016 nguyen kevin
** Last update Sat Apr  9 14:40:49 2016 nguyen kevin
*/

#include "header.h"

char			**delete_command_done(char **tab)
{
  int			i;
  int			count;

  count = 0;
  while (count == 0)
    {
      i = 0;
      if (my_strcmp(tab[0], "&&") == 0 || my_strcmp(tab[0], ";") == 0)
	count++;
      while (tab[i + 1] != NULL)
	{
	  tab[i] = my_strcpy(tab[i], tab[i + 1]);
	  i++;
	}
      tab[i] = NULL;
    }
  return (tab);
}
