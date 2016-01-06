/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_rot_j.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 20:29:27 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/15 13:43:26 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		match_j_0(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	j0[4];
	int		i;

	i = 0;
	j0[0].x = 0;
	j0[0].y = 0;
	j0[1].x = 0;
	j0[1].y = 1;
	j0[2].x = 0;
	j0[2].y = 2;
	j0[3].x = 1;
	j0[3].y = 2;
	while (((x + j0[i].x) < 4 && (y + j0[y].y) < 4)
		&& (i < 4 && tab[x + j0[i].x][y + j0[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'J', 0);
		return (OK);
	}
	return (0);
}

int		match_j_1(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	j1[4];
	int		i;

	i = 0;
	j1[0].x = 0;
	j1[0].y = 1;
	j1[1].x = 1;
	j1[1].y = 1;
	j1[2].x = 2;
	j1[2].y = 1;
	j1[3].x = 2;
	j1[3].y = 0;
	while (((x + j1[i].x) < 4 && (y + j1[y].y) < 4)
		&& (i < 4 && tab[x + j1[i].x][(y - 1) + j1[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'J', 1);
		return (OK);
	}
	return (0);
}

int		match_j_2(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	j2[4];
	int		i;

	i = 0;
	j2[0].x = 0;
	j2[0].y = 0;
	j2[1].x = 1;
	j2[1].y = 0;
	j2[2].x = 1;
	j2[2].y = 1;
	j2[3].x = 1;
	j2[3].y = 2;
	while (((x + j2[i].x) < 4 && (y + j2[y].y) < 4)
		&& (i < 4 && tab[x + j2[i].x][y + j2[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'J', 2);
		return (OK);
	}
	return (0);
}

int		match_j_3(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	j3[4];
	int		i;

	i = 0;
	j3[0].x = 0;
	j3[0].y = 0;
	j3[1].x = 0;
	j3[1].y = 1;
	j3[2].x = 1;
	j3[2].y = 0;
	j3[3].x = 2;
	j3[3].y = 0;
	while (((x + j3[i].x) < 4 && (y + j3[y].y) < 4)
		&& (i < 4 && tab[x + j3[i].x][y + j3[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'J', 3);
		return (OK);
	}
	return (0);
}
