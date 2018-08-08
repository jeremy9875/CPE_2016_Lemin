/*
** my_strcat_modified.c for my_strcat_modified in /home/VSridhar78/CPE/CPE_2016_Lemin
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Mon Apr 24 15:44:05 2017 Sridhar Vengadesan
** Last update Sun Apr 30 19:06:11 2017 Arnaud DEMANGE
*/
#include "my.h"

char	*my_strcpy_prvt(char *src, char *dest, int tmp)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (src[i] != '\0')
    i++;
  while (dest[j] != '\0')
    {
      src[i] = dest[j];
      j++;
      i++;
    }
  if (tmp == 1)
    {
      src[i] = '\n';
      src[i + 1] = '\0';
    }
  tmp++;
  return (src);
}
