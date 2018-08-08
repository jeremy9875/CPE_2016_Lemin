/*
** test.c for test in /home/jeremy.elkaim/CPE_2016_Lemin/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Apr  4 12:13:57 2017 Kevin DA PONTE
** Last update Sun Apr 30 19:10:52 2017 Arnaud DEMANGE
*/
#include "my.h"
#include "get_next_line.h"

int	main(void)
{
  char	*s;
  char	*origin;

  if ((origin = malloc(sizeof(origin) * 250000)) == NULL)
    return (84);
  while ((s = get_next_line(0)))
    {
      origin = my_strcpy_prvt(origin, s, 1);
      free(s);
    }
  my_putstr(NB_ANTS);
  if ((check_rooms(origin)) == 84)
    {
      free(origin);
      my_putstr(INVALID);
      return (84);
    }
  free(origin);
  return (0);
}
