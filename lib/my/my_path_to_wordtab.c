/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/nguye_z/rendu/Piscine_C_bistromatique/eval_expr
** 
** Made by Kevin Nguyen
** Login   <nguye_z@epitech.net>
** 
** Started on  Fri Oct 30 01:31:16 2015 Kevin Nguyen
** Last update Wed Apr  6 11:59:58 2016 nguyen kevin
*/

#include <malloc.h>
#include <stdio.h>
#include <unistd.h>
#include "header.h"

char	**my_path_to_wordtab2(char *str, int a, char **tab, int nb_word)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i < nb_word)
    {
      if ((tab[i] = malloc(sizeof(char) * my_strlen(str) + 2)) == NULL)
	return (NULL);
      while (str[a] != ':' && str[a] != '\0')
	tab[i][j++] = str[a++];
      if (i < nb_word - 1)
	tab[i][j] = '/';
      tab[i][j + 1] = '\0';
      j = 0;
      a++;
      i++;
    }
  tab[i] = NULL;
  return (tab);
}

char	**my_path_to_wordtab(char *str)
{
  int	a;
  char	**tab;
  int	nb_word;

  nb_word = nb_path(str);
  a = 0;
  if (str == NULL)
    return (0);
  if ((tab = malloc((nb_word + 1) * sizeof(char*) + 1)) == NULL)
    return (NULL);
  tab = my_path_to_wordtab2(str, a, tab, nb_word);
  return (tab);
}
