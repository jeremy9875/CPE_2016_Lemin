/*
** get_next_line.h for get_next_line in /home/jeremy.elkaim/CPE_2016_Lemin/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Apr 13 14:28:32 2017 jeremy elkaim
** Last update Thu Apr 13 14:28:32 2017 jeremy elkaim
*/
#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#ifndef READ_SIZE
# define READ_SIZE 1
#endif /* !READ_SIZE */

# define SIZE_BUFF READ_SIZE + 1
# define TRUE 0
# define FALSE 1

char	*get_next_line(const int fd);

#endif /* !GET_NEXT_LINE_H_ */
