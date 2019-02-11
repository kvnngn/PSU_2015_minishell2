/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/nguye_z/rendu/Piscine_C_bistromatique/eval_expr
** 
** Made by Kevin Nguyen
** Login   <nguye_z@epitech.net>
** 
** Started on  Fri Oct 30 01:31:16 2015 Kevin Nguyen
** Last update Thu Apr  7 10:39:26 2016 nguyen kevin
*/

#include <malloc.h>
#include <stdio.h>
#include <unistd.h>
#include "header.h"

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	a;
  int	nb_word;
  char	**tab;

  i = 0;
  a = 0;
  j = 0;

  nb_word = nbr_word(str);
  if ((tab = malloc((nb_word + 1) * sizeof(*tab) + 1)) == NULL)
    exit(0);
  while (i < nb_word)
    {
      tab[i] = malloc(my_strlen(str) + 1 * sizeof(char));
      while (str[a] != ' ' && str[a] != '\0')
	tab[i][j++] = str[a++];
      tab[i][j] = '\0';
      j = 0;
      a++;
      i++;
    }
  tab[i] = 0;
  return (tab);
}
