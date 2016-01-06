/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 11:20:14 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/16 17:43:44 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

static int	find_pattern(char **grid, t_tetri **all, t_coord coord)
{
	int		(*match[7])(char **, int x, int y, t_tetri **);
	int		i;

	match[0] = &match_t;
	match[1] = &match_o;
	match[2] = &match_i;
	match[3] = &match_j;
	match[4] = &match_l;
	match[5] = &match_s;
	match[6] = &match_z;
	i = 0;
	while (i < 7)
	{
		if (match[i](grid, coord.x, coord.y, all) != -1)
			return (OK);
		i++;
	}
	free(grid);
	return (-1);
}

static int	get_pattern(char *grid, t_tetri **all)
{
	t_coord	coord;
	char	**spl;

	coord.x = 0;
	coord.y = 0;
	spl = ft_strsplit(grid, '\n');
	if (!spl)
		return (-1);
	while (spl[coord.x] != 0 && spl[coord.x][coord.y] != '#')
	{
		coord.y = 0;
		while (spl[coord.x][coord.y] != 0 && spl[coord.x][coord.y] != '#')
			coord.y++;
		if (spl[coord.x][coord.y] == '#')
			break ;
		coord.x++;
	}
	return (find_pattern(spl, all, coord));
}

int			get_input(char *filename, t_tetri **all)
{
	char	buf[21];
	int		nb_grids;
	int		size_read;
	int		fd;

	nb_grids = 0;
	fd = 0;
	size_read = 0;
	if ((nb_grids = check_input(filename)) && nb_grids == BAD_FORM)
		return (BAD_FORM);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (fd);
	while ((size_read = read(fd, buf, 21)) && size_read != 0)
	{
		buf[size_read] = '\0';
		if (get_pattern(buf, all) == -1)
		{
			close(fd);
			return (BAD_FORM);
		}
	}
	close(fd);
	return (OK);
}
