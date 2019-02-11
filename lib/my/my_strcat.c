/*
** my_strcat.c for my_strcat in /home/nguye_z/rendu/Piscine_C_J07
** 
** Made by kevin nguyen
** Login   <nguye_z@epitech.net>
** 
** Started on  Wed Oct  7 09:53:19 2015 kevin nguyen
** Last update Wed Jan 20 15:32:51 2016 nguyen kevin
*/

#include "header.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  j = 0;
  i = my_strlen(dest);
  while (src[j])
    dest[i++] = src[j++];
  dest[i] = '\0';
  return (dest);
}
