/*
** my_putstr.c for my_putstr in /home/nguye_z/rendu/PSU_2015_my_printf
** 
** Made by nguyen kevin
** Login   <nguye_z@epitech.net>
** 
** Started on  Mon Nov 16 22:55:37 2015 nguyen kevin
** Last update Wed Dec 16 15:01:23 2015 nguyen kevin
*/

#include "header.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
