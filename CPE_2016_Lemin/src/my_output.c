/*
** my_output.c for my_output in /home/arnaud.d/CPE_2016_Lemin/src
** 
** Made by Arnaud DEMANGE
** Login   <arnaud.d@epitech.net>
** 
** Started on  Wed Apr 19 13:54:49 2017 Arnaud DEMANGE
** Last update Sun Apr 30 19:09:52 2017 Arnaud DEMANGE
*/
#include "my.h"

t_check		take_value(t_check check)
{
  check.count = 0;
  check.tmp = 0;
  check.start = 0;
  check.end = 0;
  check.tunnel = 0;
  return (check);
}

int	parse_file(char *tab, t_check check)
{
  check.count = 0;
  while (tab[check.count] != '\n')
    {
      if ((tab[check.count] >= '0' && tab[check.count] <= '9') &&
	  tab[check.count + 1] == '-' &&
	  (tab[check.count + 2] >= '0' && tab[check.count + 2] <= '9')&&
	  check.tunnel == 0)
	{
	  my_putstr(TUNNELS);
	  return (1);
	}
      ++check.count;
    }
  if (check.tunnel == 1)
    return (1);
  return (0);
}

int	check_coordinate(char **tab, t_check check)
{
  int	i;
  int	tmp;

  i = 0;
  tmp = 0;
  if (tab[check.tmp + 1] == NULL)
    return (84);
  while (tab[check.tmp + 1][i] != '\0')
    {
      if (tmp == 1 && tab[check.tmp + 1][i] != ' ' &&
	  tab[check.tmp + 1][i] != '\t' && tab[check.tmp + 1][i] != '\n' &&
	  tab[check.tmp + 1][i] != '-')
	if (tab[check.tmp + 1][i] < 48 || tab[check.tmp + 1][i] > 57)
	  return (84);
      if (tab[check.tmp + 1][i] != ' ' && tab[check.tmp + 1][i] != '\t' &&
	  tmp == 0)
	++tmp;
      ++i;
    }
  return (0);
}

t_check		my_file_cmp(t_check check, char **tab)
{
  if (my_strcmp(START, tab[check.tmp], 0, 1) == 1)
    {
      check.start += 1;
      if (check_coordinate(tab, check) == 84)
	{
	  check.i = 84;
	  return (check);
	}
    }
  else if (my_strcmp(END, tab[check.tmp], 0, 1) == 1)
    {
      check.end += 1;
      if (check_coordinate(tab, check) == 84)
	{
	  check.i = 84;
	  return (check);
	}
    }
  return (check);
}

int		check_rooms(char *str)
{
  t_check	check;
  char		**tab;

  check = take_value(check);
  tab = malloc_2dtab(str);
  if (check_ant_num(tab[check.count]))
    return (84);
  while (check.tmp != (my_strline(str, 1, 0)))
    {
      if ((check.tunnel = parse_file(tab[check.tmp], check)) == 84)
	return (84);
      check = my_file_cmp(check, tab);
      if (check.start > 1 || check.end > 1)
	return (84);
      my_putstr(tab[check.tmp]);
      display_rooms(check.tmp);
      if (check.i == 84)
	return (84);
      ++check.tmp;
    }
  if (check.start != 1 || check.end != 1)
    return (84);
  my_putstr(MOVES);
  free(tab);
  return (0);
}
