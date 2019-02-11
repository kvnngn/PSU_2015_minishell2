/*
** my_getnbr.c for my_getnbr in /home/nguye_z
** 
** Made by kevin nguyen
** Login   <nguye_z@epitech.net>
** 
** Started on  Mon Oct 12 16:00:38 2015 kevin nguyen
** Last update Wed Apr  6 12:40:18 2016 nguyen kevin
*/

#include "header.h"

int	isnum(char a)
{
  if (a >= '0' && a <= '9')
    return (1);
  else
    return (0);
}

int	countsign(char *str)
{
  int	i;
  int	m;

  i = 0;
  m = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '-')
	{
	  m = m + 1;
	  i = i + 1;
	}
      if (m % 2 == 1)
	return (1);
      else
	return (0);
    }
  return (0);
}

int	my_getnbr(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      i = i + 1;
    }
  while (str[i] != '\0' && isnum(str[i]) != 0)
    {
      nb = nb * 10 + (str[i] - 48);
      i = i + 1;
    }

  if (countsign(str) == 1)
    nb = nb * (-1);
  return (nb);
}
