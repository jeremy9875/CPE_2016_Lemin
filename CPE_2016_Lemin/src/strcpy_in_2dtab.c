/*
** strcpy_in_2dtab.c for strcpy_in_2dtab in /home/VSridhar78/CPE/CPE_2016_Lemin
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Fri Apr 28 11:54:49 2017 Sridhar Vengadesan
** Last update Sun Apr 30 19:10:27 2017 Arnaud DEMANGE
*/
#include "my.h"

char	**cpy_in_2d(char *str, char **tab)
{
  int	i;
  int	j;
  int	tmp;

  i = 0;
  j = 0;
  tmp = 0;
  while (tmp != (my_strline(str, 1, 0)))
    {
      while (str[i] != '\n')
	{
	  if (str[i] != '`')
	    {
	      tab[tmp][j] = str[i];
	      ++j;
	    }
	  ++i;
	}
      if (str[i] == '\n' && j != 0)
	tab[tmp][j] = str[i];
      ++tmp;
      j = 0;
      ++i;
    }
  return (tab);
}

char	*delete_comment(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '#' && str[i + 1] != '#' && str[i - 1] != '#')
	while (str[i] != '\n')
	  {
	    str[i] = '`';
	    ++i;
	  }
      ++i;
    }
  return (str);
}

char	**malloc_2dtab(char *str)
{
  char	**tab;
  int	i;
  int	tmp;

  i = 0;
  tmp = 0;
  if ((tab = malloc(sizeof(char *) * my_strline(str, 1, 0))) == NULL)
    return (NULL);
  while (tmp != (my_strline(str, 1, 0)))
    {
      if ((tab[tmp] = malloc(sizeof(char) * (my_strline(str, 0, i) + 1)))
	  == NULL)
	return (NULL);
      ++tmp;
      ++i;
    }
  str = delete_comment(str);
  tab = cpy_in_2d(str, tab);
  return (tab);
}
