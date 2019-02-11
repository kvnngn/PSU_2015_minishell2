/*
** my_exec.c for my_exec in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 21:45:19 2016 nguyen kevin
** Last update Wed Apr 13 13:58:29 2016 nguyen kevin
*/

#include "header.h"

void			my_puterror(char *tab)
{
  my_putstr("bash: ");
  my_putstr(tab);
  my_putstr(": this command doesn't exist\n");
}

int			my_exec(char **tab, char **envp)
{
  int			sig;
  pid_t			pid;

  pid = fork();
  if (pid > 0)
    {
      wait(&sig);
      kill(SIGINT, pid);
      if (WIFSIGNALED(sig))
	{
	  if (WTERMSIG(sig) == SIGSEGV)
	    my_putstr("Segmentation fault\n");
	}
    }
  else if (pid == 0)
    {
      if ((execve(tab[0], tab, envp)) == -1)
	return (-1);
    }
  else my_putstr("Error : Fork failed");
  return (0);
}
