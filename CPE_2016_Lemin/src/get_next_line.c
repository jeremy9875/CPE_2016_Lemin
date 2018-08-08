/*
** get_next_line.c for get_next_line in /home/jeremy.elkaim/CPE_2016_Lemin/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Apr 13 14:27:34 2017 jeremy elkaim
** Last update Sat Apr 29 00:05:58 2017 jeremy elkaim
*/

#include "my.h"
#include "get_next_line.h"

int		my_strlen(char *str)
{
  int		a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
    }
  return (a);
}

char		*my_strcat(char *dest, char *str)
{
  int		i;
  int		source;

  i = 0;
  source = 0;
  while (dest[i] != '\0')
    i = i + 1;
  while (str[source] != '\0')
    {
      dest[i] = str[source];
      i = i + 1;
      source = source + 1;
    }
  *str = '\0';
  dest[i] = '\0';
  return (dest);
}

char		*my_line_realloc(char *str, int lenght, char *buff)
{
  char		*newdest;

  buff[lenght] = '\0';
  newdest = malloc((my_strlen(str) + lenght + 1 * sizeof(*str)));
  if (newdest == 0)
    return (NULL);
  *newdest = '\0';
  my_strcat(newdest, str);
  *str = '\0';
  free(str);
  return (newdest);
}

int		my_backslash(char *line, char *buff)
{
  int		i;

  i = 0;
  while (line[i] != '\0')
    {
      if (line[i] == '\n')
        {
          line[i] = '\0';
          *buff = '\0';
	  my_strcat(buff, &line[i + 1]);
          return (FALSE);
        }
      i = i + 1;
    }
  return (TRUE);
}

char		*get_next_line(const int fd)
{
  char		*line;
  static char	buff[SIZE_BUFF];
  int		lenght;

  lenght = READ_SIZE;
  if (fd == -1)
    return (NULL);
  line = malloc(SIZE_BUFF * sizeof(*line));
  if (line == 0)
    return (NULL);
  *line = '\0';
  my_strcat(line, buff);
  *buff = '\0';
  while (my_backslash(line, buff) != FALSE && lenght == READ_SIZE)
    {
      lenght = read(fd, buff, READ_SIZE);
      line = my_line_realloc(line, lenght, buff);
      my_strcat(line, buff);
    }
  if (READ_SIZE != lenght && *line == '\0')
    return (TRUE);
  else
    return (line);
}
