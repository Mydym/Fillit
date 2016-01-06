/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_rot_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 20:01:24 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/17 16:57:24 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		match_t_0(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	t0[4];
	int		i;

	i = 0;
	t0[0].x = 0;
	t0[0].y = 0;
	t0[1].x = 0;
	t0[1].y = 1;
	t0[2].x = 0;
	t0[2].y = 2;
	t0[3].x = 1;
	t0[3].y = 1;
	while (((x + t0[i].x) < 4 && (y + t0[y].y) < 4)
		&& (i < 4 && tab[x + t0[i].x][y + t0[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'T', 0);
		return (OK);
	}
	return (0);
}

int		match_t_1(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	t1[4];
	int		i;

	i = 0;
	t1[0].x = 0;
	t1[0].y = 1;
	t1[1].x = 1;
	t1[1].y = 0;
	t1[2].x = 1;
	t1[2].y = 1;
	t1[3].x = 2;
	t1[3].y = 1;
	while (((x + t1[i].x) < 4 && (y + t1[y].y) < 4)
		&& (i < 4 && tab[x + t1[i].x][(y - 1) + t1[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'T', 1);
		return (OK);
	}
	return (0);
}

int		match_t_2(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	t2[4];
	int		i;

	i = 0;
	t2[0].x = 0;
	t2[0].y = 1;
	t2[1].x = 1;
	t2[1].y = 0;
	t2[2].x = 1;
	t2[2].y = 1;
	t2[3].x = 1;
	t2[3].y = 2;
	while (((x + t2[i].x) < 4 && (y + t2[y].y) < 4)
		&& (i < 4 && tab[x + t2[i].x][(y - 1) + t2[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'T', 2);
		return (OK);
	}
	return (0);
}

int		match_t_3(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	t3[4];
	int		i;

	i = 0;
	t3[0].x = 0;
	t3[0].y = 0;
	t3[1].x = 1;
	t3[1].y = 0;
	t3[2].x = 1;
	t3[2].y = 1;
	t3[3].x = 2;
	t3[3].y = 0;
	while (((x + t3[i].x) < 4 && (y + t3[y].y) < 4)
		&& (i < 4 && tab[x + t3[i].x][y + t3[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'T', 3);
		return (OK);
	}
	return (0);
}
