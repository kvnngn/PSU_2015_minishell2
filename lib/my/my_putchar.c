/*
** my_putchar.c for my_putchar in /home/nguye_z/rendu/PSU_2015_my_printf
** 
** Made by nguyen kevin
** Login   <nguye_z@epitech.net>
** 
** Started on  Mon Nov 16 22:55:23 2015 nguyen kevin
** Last update Tue Dec 15 23:13:47 2015 nguyen kevin
*/

#include <unistd.h>
#include "header.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
