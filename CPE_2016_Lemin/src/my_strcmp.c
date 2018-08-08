/*
** my_strcmp.c for my_strcmp in /home/VSridhar78/CPE/CPE_2016_Lemin
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Mon Apr 24 11:35:52 2017 Sridhar Vengadesan
** Last update Mon May 15 10:56:30 2017 jeremy elkaim
*/

#include "my.h"

int	my_strcmp(char *cmp, char *str)
{
  int	i;

  i = 0;
  while (cmp[i] != '\0')
    {
      if (cmp[i] != str[i])
	return (0);
      i++;
    }
  return (1);
}
