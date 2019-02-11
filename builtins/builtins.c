/*
** my_exec.c for my_exec in /home/nguye_z/rendu/PSU_2015_my_exec
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Tue Jan  5 11:30:24 2016 nguyen kevin
** Last update Tue Apr 12 21:18:31 2016 nguyen kevin
*/

#include "../header.h"

void 			is_cd(char *binary, char **tab, char **env)
{
  static int		i;

  i = 0;
  if (binary[0] == 'c' && binary[1] == 'd')
    {
      if (tab[1] == NULL)
	my_cd(my_getenv(env, "HOME"), env);
      else if (tab[1][0] == '-')
	{
	  if ((is_or_not(env, "OLDPWD") == 1) && (is_or_not(env, "PWD") == 1))
	    {
	      if (i % 2 == 0)
		my_cd(my_getenv(env, "OLDPWD"), env);
	      else
		my_cd(my_getenv(env, "PWD"), env);
	      i++;
	    }
	  else
	    my_putstr(": Aucun fichier ou dossier de ce type.\n");
	}
      else
	my_cd(tab[1], env);
    }
}

void			is_setenv(char *binary, char **tab, char **env)
{
  if (tab[1] != NULL && tab[2] !=  NULL)
    env = cpy_tab(env, my_setenv(env, tab[1], tab[2]));
  else if (tab[1] == NULL)
    my_show_env(env);
  else if (tab[2] ==  NULL && is_or_not(env, tab[1]) == 1)
    env = my_setenv2(env, tab[1], "");
  else if (tab[2] ==  NULL && is_or_not(env, tab[1]) == 0)
    env = cpy_tab(env, my_setenv(env, tab[1], ""));
}

void			is_unsetenv(char *binary, char **tab, char **env)
{
  my_unsetenv(env, tab);
}

void			is_exit(char *binary, char **tab, char **env)
{
  int			i;

  i = 0;
  if (tab[1] != NULL)
    {
      while (i < my_strlen(tab[1]))
	{
	  if ((tab[1][i] >= '0' && tab[1][i] <= '9') || tab[1][i] == '-')
	    i++;
	  else
	    i = exit_error(my_strlen(tab[1]));
	}
      if (i == my_strlen(tab[1]))
	{
	  my_putstr("exit\n");
	  exit(my_getnbr(tab[1]));
	}
    }
  else
    {
      my_putstr("exit\n");
      exit(0);
    }
}

void			is_env(char *binary, char **tab, char **env)
{
  my_show_env(env);
}
