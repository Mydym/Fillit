/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_rot_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 20:15:24 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/15 13:29:30 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		match_i_0(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	i0[4];
	int		i;

	i = 0;
	i0[0].x = 0;
	i0[0].y = 0;
	i0[1].x = 0;
	i0[1].y = 1;
	i0[2].x = 0;
	i0[2].y = 2;
	i0[3].x = 0;
	i0[3].y = 3;
	while (((x + i0[i].x) < 4 && (y + i0[y].y) < 4)
		&& (i < 4 && tab[x + i0[i].x][y + i0[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'I', 0);
		return (OK);
	}
	return (0);
}

int		match_i_1(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	i1[4];
	int		i;

	i = 0;
	i1[0].x = 0;
	i1[0].y = 0;
	i1[1].x = 1;
	i1[1].y = 0;
	i1[2].x = 2;
	i1[2].y = 0;
	i1[3].x = 3;
	i1[3].y = 0;
	while (((x + i1[i].x) < 4 && (y + i1[y].y) < 4)
		&& (i < 4 && tab[x + i1[i].x][y + i1[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'I', 1);
		return (OK);
	}
	return (0);
}
