/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_rot_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 20:59:05 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/14 11:42:24 by vgrenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		match_s_0(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	s0[4];
	int		i;

	i = 0;
	s0[0].x = 0;
	s0[0].y = 1;
	s0[1].x = 0;
	s0[1].y = 2;
	s0[2].x = 1;
	s0[2].y = 0;
	s0[3].x = 1;
	s0[3].y = 1;
	while (((x + s0[i].x) < 4 && (y + s0[y].y) < 4)
		&& (i < 4 && tab[x + s0[i].x][(y - 1) + s0[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'S', 0);
		return (OK);
	}
	return (0);
}

int		match_s_1(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	s1[4];
	int		i;

	i = 0;
	s1[0].x = 0;
	s1[0].y = 0;
	s1[1].x = 1;
	s1[1].y = 0;
	s1[2].x = 1;
	s1[2].y = 1;
	s1[3].x = 2;
	s1[3].y = 1;
	while (((x + s1[i].x) < 4 && (y + s1[y].y) < 4)
		&& (i < 4 && tab[x + s1[i].x][y + s1[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'S', 1);
		return (OK);
	}
	return (0);
}
