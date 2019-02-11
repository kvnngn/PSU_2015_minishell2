/*
** puterror.c for puterror in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Jan 24 22:02:28 2016 nguyen kevin
** Last update Fri Apr  8 22:47:52 2016 nguyen kevin
*/

#include "header.h"

void			puterror(char *s)
{
  my_putstr(s);
  my_putstr(": Command not found.\n");
}
