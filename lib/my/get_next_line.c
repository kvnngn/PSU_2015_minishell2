/*
** get_next_line.c for get_next_line in /home/nguye_z/rendu/CPE_2015_getnextline
** 
** Made by nguyen kevin
** Login   <nguye_z@epitech.net>
** 
** Started on  Fri Jan 15 10:22:15 2016 nguyen kevin
** Last update Sun Apr 10 15:44:44 2016 nguyen kevin
*/
#include <stdio.h>
#include "header.h"

void			show_prompt(char **env)
{
  char			pwd[1024];

  my_putstr(my_getenv(env, "USER"));
  if (getcwd(pwd, sizeof(pwd)) != NULL)
    {
      my_putstr(pwd);
      my_putchar(' ');
    }
}

int			save_and_get_line(char *line, char *buffer, char *save)
{
  int			i;
  int			j;

  j = 0;
  i = my_strlen(line);
  while (buffer[j] != '\0')
    {
      if (buffer[j] == '\n')
	{
	  line[i] = '\0';
	  if (buffer[j] == '\n')
	    j = j + 1;
	  save = my_strcpy(save, buffer + j);
	  return (1);
	}
      line[i] = buffer[j];
      i = i + 1;
      j = j + 1;
    }
  save[0] = '\0';
  line[i] = '\0';
  return (0);
}

char			*get_next_line(const int fd, char **env)
{
  static char		save[READ_SIZE];
  char			*line;
  int			nb_of_bytes_read;
  char			buffer[READ_SIZE + 1];

  if (env[0] != NULL)
    show_prompt(env);
  else
    my_putstr("$> ");
  if ((line = malloc(sizeof(char) * 1024)) == NULL)
    exit(0);
  line[0] = '\0';
  if (save_and_get_line(line, save, save) == 1)
    return (line);
  while ((nb_of_bytes_read = read(fd, buffer, READ_SIZE)) > 0)
    {
      buffer[nb_of_bytes_read] = '\0';
      if (save_and_get_line(line, buffer, save) == 1)
	return (line);
    }
  if (line && line[0] != '\0')
    return (line);
  my_putstr("exit\n");
  exit(0);
  return (NULL);
}
