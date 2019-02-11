/*
** my_cd.c for my_cd in /home/nguye_z/rendu/PSU_2015_minishell1/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sat Jan 23 22:04:48 2016 nguyen kevin
** Last update Sun Apr 10 15:37:04 2016 nguyen kevin
*/

#include "header.h"

void			cd_error(char *directory)
{
  my_putstr(directory);
  my_putstr(": Aucun fichier ou dossier de ce type.\n");
}

void			case_cd_2(char **env)
{
  char			pwd[1024];

  env = cpy_tab(env, my_setenv(env, "OLDPWD", my_getenv(env, "PWD")));
  if (getcwd(pwd, sizeof(pwd)) != NULL)
    env = my_setenv2(env, "PWD", pwd);
}

char			**my_cd(char *directory, char **env)
{
  int			ret;
  char			pwd[1024];
  char			*old_pwd;

  if (directory == NULL)
    return (env);
  if ((ret = chdir(directory)) == 0)
    {
      if ((old_pwd = malloc(sizeof(char)
			    * my_strlen(my_getenv(env, "PWD")) + 1)) == NULL)
	exit(0);
      if (is_or_not(env, "PWD") == 1 && is_or_not(env, "OLDPWD") == 1)
	{
	  old_pwd = my_strcpy(old_pwd, my_getenv(env, "PWD"));
	  env = my_setenv2(env, "OLDPWD", old_pwd);
	  if (getcwd(pwd, sizeof(pwd)) != NULL)
	    env = my_setenv2(env, "PWD", pwd);
	}
      else
	case_cd_2(env);
    }
  else
    cd_error(directory);
  free(old_pwd);
  return (env);
}
