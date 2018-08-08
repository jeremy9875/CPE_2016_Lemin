/*
** file_check.c for file_check.c in /home/VSridhar78/CPE/CPE_2016_Lemin/src
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Mon Apr 24 11:07:41 2017 Sridhar Vengadesan
** Last update Sun Apr 30 19:07:19 2017 Arnaud DEMANGE
*/
#include "my.h"

int	check_ant_num(char *s)
{
  int	i;
  int	tmp;

  i = 0;
  tmp = 0;
  if (s == NULL)
    return (1);
  while (s[i] != '\0')
    {
      if (s[i] == '\n')
	tmp = 1;
      ++i;
    }
  i = 0;
  while (s[i] != '\n')
    {
      if (s[i] < '0' || s[i] > '9' || tmp == 0)
	{
	  my_putstr("invalid number in file\n");
	  return (1);
	}
      ++i;
    }
  return (0);
}
