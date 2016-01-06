/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrenier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 01:57:50 by vgrenier          #+#    #+#             */
/*   Updated: 2015/12/16 17:33:45 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		rot_i_0(char **tab, t_coord dot, t_tetri *tetrim, int size)
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
	while ((dot.x + i0[i].x) < size &&
			(dot.y + i0[i].y) < size &&
			i < 4 && tab[dot.x + i0[i].x][dot.y + i0[i].y] == '.')
	{
		tab[dot.x + i0[i].x][dot.y + i0[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_i_1(char **tab, t_coord dot, t_tetri *tetrim, int size)
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
	while ((dot.x + i1[i].x) < size &&
			(dot.y + i1[i].y) < size &&
			i < 4 && tab[dot.x + i1[i].x][dot.y + i1[i].y] == '.')
	{
		tab[dot.x + i1[i].x][dot.y + i1[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_o(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	t_coord	o[4];
	int		i;

	i = 0;
	o[0].x = 0;
	o[0].y = 0;
	o[1].x = 0;
	o[1].y = 1;
	o[2].x = 1;
	o[2].y = 0;
	o[3].x = 1;
	o[3].y = 1;
	while ((dot.x + o[i].x) < size &&
			(dot.y + o[i].y) < size &&
			i < 4 && tab[dot.x + o[i].x][dot.y + o[i].y] == '.')
	{
		tab[dot.x + o[i].x][dot.y + o[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_j_0(char **tab, t_coord dot, t_tetri *tetrim, int size)
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
	while ((dot.x + j0[i].x) < size &&
			(dot.y + j0[i].y) < size &&
			i < 4 && tab[dot.x + j0[i].x][dot.y + j0[i].y] == '.')
	{
		tab[dot.x + j0[i].x][dot.y + j0[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}
