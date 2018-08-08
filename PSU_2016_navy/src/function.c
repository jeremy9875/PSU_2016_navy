/*
** function.c for function in /home/jeremy.elkaim/PSU_2016_navy/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jan 30 09:15:01 2017 jeremy elkaim
** Last update Mon Jan 30 09:54:42 2017 jeremy elkaim
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

void	help()
{
  my_putstr("USAGE");
}
