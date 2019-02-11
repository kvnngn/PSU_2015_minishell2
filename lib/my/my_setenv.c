/*
** my_setenv.c for my_setenv in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 22:07:43 2016 nguyen kevin
** Last update Wed Apr  6 15:02:48 2016 nguyen kevin
*/

#include "header.h"

int			my_put_error2(char *tab1, char *tab2)
{
  if (tab1 == NULL || tab2 == NULL)
    {
      my_putstr("bash: setenv: need two arguments\n");
      return (-1);
    }
  return (0);
}

int			my_strlen_tab(char **env)
{
  int			i;

  i = 0;
  while (env[i] != NULL)
    i++;
  return (i);
}

char			**add_to_env(char **new_env, char *to_add)
{
  int			i;

  i = 0;
  while (new_env[i] != NULL)
    i++;
  if ((new_env[i] = malloc(sizeof(char) * my_strlen(to_add) + 1)) == NULL)
    exit(0);
  new_env[i] = my_strcpy(new_env[i], to_add);
  new_env[i + 1] = NULL;
  return (new_env);
}

char			**my_setenv(char **env, char *tab1, char *tab2)
{
  char			**new_env;
  char			*to_add;

  to_add = make_env(tab1, tab2);
  if ((new_env = malloc(sizeof(char *) * my_strlen_tab(env) + 2)) == NULL)
    exit(0);
  if ((new_env = cpy_tab(new_env, env)) == NULL)
    exit(0);
  new_env = add_to_env(new_env, to_add);
  return (new_env);
}
