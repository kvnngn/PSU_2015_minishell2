/*
** header.h for header in /home/nguye_z/rendu/PSU_2015_minishell1
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Fri Jan 15 11:28:37 2016 nguyen kevin
** Last update Sat Apr  9 14:08:04 2016 nguyen kevin
*/

#ifndef HEADER_H_
# define HEADER_H_
# ifndef READ_SIZE
# define READ_SIZE (1)
# endif /* !READ_SIZE */
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

typedef struct		s_struct
{
  char			*str;
  void			(*ptr)(char *binary, char **tab, char **env);
}			t_struct;

void	my_putchar(char c);
void	my_putstr(char *str);
char	*get_next_line(const int fd, char **env);
void	my_put_nbr(int nb);
int	my_getnbr(char *str);
char	*my_strcat(char *dest, char *src);
void	my_putchar(char c);
void	my_putstr(char *str);
char	**my_str_to_wordtab(char *str);
int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);
int	save_and_get_line(char *line, char *buffer, char *save);
int	nbr_word(char *str);
int	nbr_args(char *str);
int	my_exec(char **tab, char **envp);
char	*pwd_from_env(char **env, int i);
char	*path_pwd_from_env(char **env, int i);
char	*my_get_pwd(char **env);
char	*my_get_path_pwd(char **env);
char	**my_set_oldpwd(char **env);
char	**oldpwd_to_tmp(char **env, char *tmp);
int	my_show_env(char **env);
char	*oldpwd_from_env(char **env, int i);
char	*path_oldpwd_from_env(char **env, int i);
char	*my_get_oldpwd(char **env);
char	*my_get_path_oldpwd(char **env);
char	**my_set_pwd(char **env);
char	**my_cd(char *directory, char **env);
char	*make_env(char *tab1, char *tab2);
char	**my_setenv(char **env, char *tab1, char *tab2);
int	 my_compare(char *tab1, char *tab2);
char	**my_unsetenv(char **env, char **tab);
char	*my_get_path(char **env);
char	*path_from_env(char **env, int i);
char	*path_path_from_env(char **env);
char	**cpy_tab(char **tab, char **new_tab);
int	nb_path(char *str);
char	**my_path_to_wordtab(char *str);
char	**make_path(char **path, char *binary);
char	**remake_path(char **path);
char	*epur_str(char *str);
void	puterror(char *s);
int	my_strcmp(char *s1, char *s2);
char	*my_getenv(char **env, char *search);
int	is_or_not(char **env, char *search);
char	**my_setenv2(char **env, char *tab1, char *tab2);
void	is_cd(char *binary, char **tab, char **env);
void	is_setenv(char *binary, char **tab, char **env);
void	is_unsetenv(char *binary, char **tab, char **env);
void	is_exit(char *binary, char **tab, char **env);
void	is_env(char *binary, char **tab, char **env);
int	exit_error(int max);
int	valid_or_not(char *tab);
char	**delete_command_done(char **tab);
int	check_esperluette(char **tab);

#endif /* !HEADER_H_ */
