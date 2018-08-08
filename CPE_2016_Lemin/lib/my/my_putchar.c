/*
** my_putchar.c for my_putchar in /home/jeremy.elkaim/CPE_2016_Lemin/lib/my
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Apr 13 14:28:09 2017 jeremy elkaim
** Last update Thu Apr 13 14:28:12 2017 jeremy elkaim
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
