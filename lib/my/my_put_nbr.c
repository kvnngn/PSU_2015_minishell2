/*
** my_put_nbr.c for my_put_nbr in /home/nguye_z/rendu/Piscine_C_J03
** 
** Made by nguyen kevin
** Login   <nguye_z@epitech.net>
** 
** Started on  Thu Oct  1 11:30:49 2015 nguyen kevin
** Last update Tue Dec 15 23:04:26 2015 nguyen kevin
*/

#include "header.h"

void	my_put_nbr(int nb)
{
  int	div;

  div = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
    }
  while ((nb / div) >= 10)
    {
      div *= 10;
    }
  while (div > 0)
    {
      my_putchar((nb / div) % 10 + '0');
      div /= 10;
    }
}
