/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_rot_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 20:02:16 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/14 11:40:58 by vgrenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		match_o_0(char **tab, int x, int y, t_tetri **tetrim)
{
	t_coord	o0[4];
	int		i;

	i = 0;
	o0[0].x = 0;
	o0[0].y = 0;
	o0[1].x = 0;
	o0[1].y = 1;
	o0[2].x = 1;
	o0[2].y = 0;
	o0[3].x = 1;
	o0[3].y = 1;
	while (((x + o0[i].x) < 4 && (y + o0[y].y) < 4)
		&& (i < 4 && tab[x + o0[i].x][y + o0[i].y] == '#'))
		i++;
	if (i == 4)
	{
		tetripush(tetrim, tetrinew(), 'O', 0);
		return (OK);
	}
	return (0);
}
