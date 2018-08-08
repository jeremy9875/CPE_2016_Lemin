/*
** utils.c for utils in /home/arnaud.d/CPE_2016_Lemin/src
** 
** Made by Arnaud DEMANGE
** Login   <arnaud.d@epitech.net>
** 
** Started on  Thu Apr 13 15:25:11 2017 Arnaud DEMANGE
** Last update Sun Apr 30 14:33:37 2017 Sridhar Vengadesan
*/
#include "my.h"

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

int	my_getnbr(char *str)
{
  int	nb;
  int	neg;
  int	i;

  i = 0;
  neg = 0;
  nb = 0;
  if (str[0] == '-')
    neg = 1;
  while (str[i])
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  nb *= 10;
	  nb += (str[i] - '0');
	}
      i++;
    }
  if (neg == 1)
    nb = -nb;
  return (nb);
}

int	my_strline(char *str, int tmp, int nb)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  if (tmp == 1)
      while (str[i] != '\0')
	{
	  if (str[i] == '\n')
	    ++count;
	  ++i;
	}
  else if (tmp == 0)
    {
      while (str[nb] != '\n')
	{
	  ++nb;
	  ++count;
	}
    }
  return (count);
}
