/*
** display_functions.c for display_functions.c in /home/VSridhar78/CPE/CPE_2016_Lemin/src
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Mon Apr 24 11:05:51 2017 Sridhar Vengadesan
** Last update Sun Apr 30 19:05:03 2017 Arnaud DEMANGE
*/
#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	display_rooms(int check)
{
  if (check == 0)
    my_putstr(ROOMS);
}
