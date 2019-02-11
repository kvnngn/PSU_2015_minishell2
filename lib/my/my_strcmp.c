/*
** my_strcmp.c for my_strcmp in /home/nguye_z/rendu/PSU/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Tue Apr  5 12:25:00 2016 nguyen kevin
** Last update Tue Apr  5 12:27:13 2016 nguyen kevin
*/

#include "header.h"

int			my_strcmp(char *s1, char *s2)
{
  int			i;

  i = 0;
  while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
    i++;
  return (s1[i] - s2[i]);
}
