/*
** nbr_word.c for nbr_word in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:41:48 2016 nguyen kevin
** Last update Sun Jan 24 17:42:19 2016 nguyen kevin
*/

#include "header.h"

int			nb_path(char *str)
{
  int			i;
  int			nb_word;

  i = 0;
  nb_word = 0;
  while (str[i] != '\0')
    {
      if (str[i] != ' ')
	{
	  nb_word++;
	  while (str[i + 1] != ':' && str[i + 1] != '\0')
	    i++;
	}
      i++;
    }
  return (nb_word);
}
