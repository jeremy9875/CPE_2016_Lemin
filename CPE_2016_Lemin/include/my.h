/*
** my.h for my in /home/jeremy.elkaim/CPE_2016_Lemin/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Apr  4 12:17:49 2017 Kevin DA PONTE
** Last update Mon May 15 11:23:20 2017 jeremy elkaim
*/

#ifndef MY_H_
# define MY_H_

# define START		"##start"
# define END		"##end"
# define NB_ANTS	"#number_of_ants\n"
# define ROOMS		"#rooms\n"
# define TUNNELS	"#tunnels\n"
# define MOVES		"#moves\n"
# define INVALID	"file is invalid\n"

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct	s_check
{
  int		tunnel;
  int		start;
  int		end;
  int		room;
  int		count;
  int		tmp;
  int		i;
}		t_check;

void	my_putchar(char);
void	my_putstr(char *str);
void	display_rooms(int check);
int	my_strline(char *str, int tmp, int nb);
char	*my_strcat(char *dest, char *src);
int	my_strlen(char *str);
int	my_getnbr(char *str);
int	check_rooms(char *str);
int	check_file(char *s);
int	check_ant_num(char *s);
char	**cpy_in_2d(char *str, char **tab);
char	**malloc_2dtab(char *str);
char	*my_strcpy_prvt(char *src, char *dest, int tmp);
int	my_strcmp(char *cmp, char *str, int pos_str, int tmp);

#endif /* !MY_H_ */
