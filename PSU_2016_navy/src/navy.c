/*
** navy.c for navy in /home/jeremy.elkaim/PSU_2016_navy/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jan 30 09:04:45 2017 jeremy elkaim
** Last update Fri Feb  3 15:59:27 2017 jeremy elkaim
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <signal.h>
#include <time.h>

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

int     my_put_nbr(int  nb)
{
  if (nb < 0)
    {
      my_putchar(45);
      nb = nb * (-1);
    }
  if (nb <= 9 && nb >= 0)
    {
      my_putchar(nb + '0');
    }
  else
    {
      my_put_nbr (nb / 10);
      my_put_nbr (nb % 10);
    }
}

void	help()
{
  my_putstr("USAGE\n\t");
  my_putstr("./navy [fisrt_player_pid] navy_positions");
  my_putstr("\n\nDESCRIPTION");
  my_putstr("\n\t first_player_pid\t only for the 2");
  my_putstr("nd player. pid of the first player,");
  my_putstr("\n\t navy_positions\t");
  my_putstr("\t file representing the positions of the ships.\n");
}

int	other_term()
{
  int	connect;

  //connect = connectsuccess();
  my_putstr("\nwaiting for ennemy connexion...\n");
  if (connect > 0)
    {
      my_putstr("ennemy connected\n\n");
    }
  return (0);
}

/*int	openmap()
{
  int	fd;
  char	buffer[1001];

  fd = open('mapah', O_RDONLY);
  read(fd, buffer, 1000);
  my_putstr(buffer);
  close (fd);
  return (0);
  }*/

int	main(int ac,char **av)
{
  int	getpid_t;
  int	i;
  int	fd;
  char buffer[1001];

  i = 1;
  while (av[i] != '\0')
    {
      fd = open (av[1], O_RDONLY);
      read(fd, buffer, 1000);
      if (fd == -1)
	{
	  my_putstr("Error openning position of ships, ./navy -h for help\n");
	  //	  openmap();
	}
      if (av[1][0] == '-')
	{
	  if (av[1][1] == 'h')
	    {
	      help();
	    }
	}
      else
	getpid_t = getpid();
      my_putstr("my_pid:\t");
      my_put_nbr(getpid_t);
      //	printf("%d" ,getpid_t); printf non prioritaire
      other_term(getpid_t);
      /*	if (getpid_t == av[1])
		{
		my_putstr("test");
		}*/
      /*char	*s;
	while (s = get_next_line(0))
	{
	}*/
      i = i + 1;
    }
  close (fd);
  return (0);
}
