/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_rot_z.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 21:04:46 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/14 11:44:06 by vgrenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		match_z_0(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	z0[4];
	int		i;

	i = 0;
	z0[0].x = 0;
	z0[0].y = 0;
	z0[1].x = 0;
	z0[1].y = 1;
	z0[2].x = 1;
	z0[2].y = 1;
	z0[3].x = 1;
	z0[3].y = 2;
	while (((x + z0[i].x) < 4 && (y + z0[y].y) < 4)
		&& (i < 4 && tab[x + z0[i].x][y + z0[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'Z', 0);
		return (OK);
	}
	return (0);
}

int		match_z_1(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	z1[4];
	int		i;

	i = 0;
	z1[0].x = 0;
	z1[0].y = 1;
	z1[1].x = 1;
	z1[1].y = 1;
	z1[2].x = 1;
	z1[2].y = 0;
	z1[3].x = 2;
	z1[3].y = 0;
	while (((x + z1[i].x) < 4 && (y + z1[y].y) < 4)
		&& (i < 4 && tab[x + z1[i].x][(y - 1) + z1[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'Z', 1);
		return (OK);
	}
	return (0);
}
