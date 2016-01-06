/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_rot_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 20:42:22 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/17 16:42:06 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		match_l_0(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	l0[4];
	int		i;

	i = 0;
	l0[0].x = 0;
	l0[0].y = 0;
	l0[1].x = 0;
	l0[1].y = 1;
	l0[2].x = 0;
	l0[2].y = 2;
	l0[3].x = 1;
	l0[3].y = 2;
	while (((x + l0[i].x) < 4 && (y + l0[y].y) < 4)
		&& (i < 4 && tab[x + l0[i].x][(y - 2) + l0[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'L', 0);
		return (OK);
	}
	return (0);
}

int		match_l_1(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	l1[4];
	int		i;

	i = 0;
	l1[0].x = 0;
	l1[0].y = 0;
	l1[1].x = 0;
	l1[1].y = 1;
	l1[2].x = 1;
	l1[2].y = 1;
	l1[3].x = 2;
	l1[3].y = 1;
	while (((x + l1[i].x) < 4 && (y + l1[y].y) < 4)
		&& (i < 4 && tab[x + l1[i].x][y + l1[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'L', 1);
		return (OK);
	}
	return (0);
}

int		match_l_2(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	l2[4];
	int		i;

	i = 0;
	l2[0].x = 0;
	l2[0].y = 0;
	l2[1].x = 1;
	l2[1].y = -2;
	l2[2].x = 1;
	l2[2].y = -1;
	l2[3].x = 1;
	l2[3].y = 0;
	while (((x + l2[i].x) < 4 && (y + l2[y].y) < 4)
		&& (i < 4 && tab[x + l2[i].x][y + l2[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'L', 2);
		return (OK);
	}
	return (0);
}

int		match_l_3(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	l3[4];
	int		i;

	i = 0;
	l3[0].x = 0;
	l3[0].y = 0;
	l3[1].x = 1;
	l3[1].y = 0;
	l3[2].x = 2;
	l3[2].y = 0;
	l3[3].x = 2;
	l3[3].y = 1;
	while (((x + l3[i].x) < 4 && (y + l3[y].y) < 4)
		&& (i < 4 && tab[x + l3[i].x][y + l3[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'L', 3);
		return (OK);
	}
	return (0);
}
