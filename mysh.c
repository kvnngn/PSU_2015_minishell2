/*
** my_exec.c for my_exec in /home/nguye_z/rendu/PSU_2015_my_exec
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Tue Jan  5 11:30:24 2016 nguyen kevin
** Last update Tue Apr 12 18:44:59 2016 nguyen kevin
*/

#include "header.h"

static const t_struct	tab1[5]=
  {
    {"cd", &is_cd},
    {"unsetenv", &is_unsetenv},
    {"setenv", &is_setenv},
    {"env", &is_env},
    {"exit", &is_exit}
  };

int			case_2(char **tab, char **env, char **path, int k)
{
  static int		i;
  static char		*tmp;

  if (i < 1)
    {
      i = 0;
      if ((tmp = malloc(sizeof(char) * my_strlen(tab[0]) + 1)) == NULL)
	exit(0);
      tmp = my_strcpy(tmp, tab[0]);
      i++;
    }
  if (valid_or_not(tab[0]) == 0)
    {
      tab[0] = my_strcat(path[k], tmp);
      if (my_exec(tab, env) == 0)
	{
	  i = 0;
	  free(tmp);
	  return (0);
	}
    }
  if (path[k + 1] == NULL)
    i = 0;
  return (1);
}

int			call_my_execve(char **tab, char **env, char **path)
{
  int			k;
  char			*tmp;

  if ((tmp = malloc(sizeof(char) * my_strlen(tab[0]) + 1)) == NULL)
    exit(0);
  tmp = my_strcpy(tmp, tab[0]);
  k = 0;
  while (path[k] != NULL)
    {
      if (my_exec(tab, env) == 0)
	return (0);
      else
	{
	  if (case_2(tab, env, path, k) == 0)
	    return (0);
	}
      k++;
      path = remake_path(path);
    }
  puterror(tmp);
  return (0);
}

int			call_builtins(char **tab, char **env,
				      char **path, int esperluette)
{
  int			i;

  while (i < 5)
    {
      if (my_strcmp(tab[0], tab1[i].str) == 0)
	{
	  tab1[i].ptr(tab[0], tab, env);
	  i = 6;
	}
      i = i + 1;
    }
  if (i == 5)
    call_my_execve(tab, env, path);
  return (1);
}
void			env_not_empty(char *s, char *path, char **env)
{
  int			esperluette;
  char			**tab;
  char			**tab2;

  tab2 = my_path_to_wordtab(path);
  tab = my_str_to_wordtab(my_strcpy(s, epur_str(s)));
  esperluette = check_esperluette(tab);
  call_builtins(tab, env, tab2, esperluette);
  free(s);
}

int			main(int ac, char **av, char **env)
{
  char			*s;
  char			*path;

  if (env[0] != NULL)
    {
      if (is_or_not(env, "OLDPWD") == 1)
	unsetenv("OLDPWD");
      path = malloc(sizeof(char) * my_strlen(my_get_path(env)) + 1);
      my_strcpy(path, my_get_path(env));
      while ((s = get_next_line(0, env)) != NULL)
	{
	  if (s[0] != 0)
	    env_not_empty(s, path, env);
	}
    }
  else
    while ((s = get_next_line(0, env)) != NULL);
  return (0);
}
