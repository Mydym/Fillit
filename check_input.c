/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 11:19:14 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/16 21:44:26 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>
#include <unistd.h>

static int	check_grid(char *grid)
{
	int i;
	int point;
	int htag;
	int endl;

	i = -1;
	point = 0;
	htag = 0;
	endl = 0;
	while (grid[++i] != 0)
		if (grid[i] == '.')
			point++;
		else if (grid[i] == '#')
			htag++;
		else if ((grid[i] == '\n' && (grid[i + 1] == 0 || !((i + 1) % 5))))
			endl++;
		else
			return (BAD_FORM);
	if (((endl == 4 && grid[i] == 0)
				|| endl == 5) && htag == 4 && point == 12)
		return (OK);
	return (BAD_FORM);
}

static int	ft_close_fd_err(int fd)
{
	close(fd);
	return (BAD_FORM);
}

int			check_input(char *filename)
{
	int		fd;
	int		nb_grids;
	int		size_read;
	int		size_read_cp;
	char	buf[21];

	nb_grids = -1;
	size_read = 0;
	size_read_cp = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (fd);
	while ((size_read = read(fd, buf, 21)) && size_read != 0 && ++nb_grids < 26)
	{
		size_read_cp = size_read;
		buf[size_read] = '\0';
		if (check_grid(buf) == -1)
			return (ft_close_fd_err(fd));
	}
	if ((nb_grids == 26 || size_read_cp == 0)
		|| (buf[size_read_cp - 1] == '\n' && buf[size_read_cp - 2] == '\n'))
		return (ft_close_fd_err(fd));
	close(fd);
	return (nb_grids);
}
