/*
** exit_error.c for exit_error in /home/nguye_z/rendu/PSU/PSU_2015_minishell2/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Fri Apr  8 22:36:07 2016 nguyen kevin
** Last update Fri Apr  8 22:40:20 2016 nguyen kevin
*/

#include "header.h"

int	exit_error(int max)
{
  my_putstr("exit: Expression Syntax.\n");
  return (max + 2);
}
