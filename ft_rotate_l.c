/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-rotate_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrenier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 09:37:39 by vgrenier          #+#    #+#             */
/*   Updated: 2015/12/17 16:44:44 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		rot_l_2(char **tab, t_coord dot, t_tetri *tetrim, int size)
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
	while ((dot.x + l2[i].x) < size &&
			(dot.y + l2[i].y) < size &&
			i < 4 && tab[dot.x + l2[i].x][dot.y + l2[i].y] == '.')
	{
		tab[dot.x + l2[i].x][dot.y + l2[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_l_3(char **tab, t_coord dot, t_tetri *tetrim, int size)
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
	while ((dot.x + l3[i].x) < size &&
			(dot.y + l3[i].y) < size &&
			i < 4 && tab[dot.x + l3[i].x][dot.y + l3[i].y] == '.')
	{
		tab[dot.x + l3[i].x][dot.y + l3[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}
