/*
** my_strlen.c for my_strlen in /home/marrie_h/rendu/Piscine_C_J04
** 
** Made by hugo marrien
** Login   <marrie_h@epitech.net>
** 
** Started on  Fri Oct  2 11:48:52 2015 hugo marrien
** Last update Wed Apr  6 12:39:54 2016 nguyen kevin
*/

#include "header.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
