/*
** my_exec.c for my_exec in /home/nguye_z/rendu/PSU_2015_my_exec
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Tue Jan  5 11:30:24 2016 nguyen kevin
** Last update Sat Apr  9 14:44:06 2016 nguyen kevin
*/

#include "header.h"

char			esperluette_or_comma(char **tab)
{
  int			i;
  int			j;

  i = 0;
  while (tab[i] != NULL)
    {
      j = 0;
      while (tab[i][j] != '\0')
	{
	  if (tab[i][j] == '&' && tab[i][j + 1] == '&')
	    return (tab[i][j]);
	  else if (tab[i][j] == ';')
	    return (tab[i][j]);
	  j++;
	}
      i++;
    }
  return (0);
}

int			check_esperluette(char **tab)
{
  int			i;
  int			j;
  int			count;
  char			c;

  count = 0;
  i = 0;
  c = esperluette_or_comma(tab);
  while (tab[i] != NULL)
    {
      j = 0;
      while (tab[i][j] != '\0')
	{
	  if (c == '&')
	    if (tab[i][j] == c && tab[i][j + 1] == c)
	      count++;
	  if (c == ';')
	    if (tab[i][j] == c)
	      count++;
	  j++;
	}
      i++;
    }
  return (count);
}
