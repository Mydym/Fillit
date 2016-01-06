/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_j.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrenier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 09:18:20 by vgrenier          #+#    #+#             */
/*   Updated: 2015/12/17 16:38:19 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		rot_j_1(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	t_coord	j1[4];
	int		i;

	i = 0;
	j1[0].x = 0;
	j1[0].y = 0;
	j1[1].x = 1;
	j1[1].y = 0;
	j1[2].x = 2;
	j1[2].y = 0;
	j1[3].x = 2;
	j1[3].y = -1;
	while ((dot.x + j1[i].x) < size &&
			(dot.y + j1[i].y) < size &&
			i < 4 && tab[dot.x + j1[i].x][dot.y + j1[i].y] == '.')
	{
		tab[dot.x + j1[i].x][dot.y + j1[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_j_2(char **tab, t_coord dot, t_tetri *tetrim, int size)
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
	while ((dot.x + j2[i].x) < size &&
			(dot.y + j2[i].y) < size &&
			i < 4 && tab[dot.x + j2[i].x][dot.y + j2[i].y] == '.')
	{
		tab[dot.x + j2[i].x][dot.y + j2[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_j_3(char **tab, t_coord dot, t_tetri *tetrim, int size)
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
	while ((dot.x + j3[i].x) < size &&
			(dot.y + j3[i].y) < size &&
			i < 4 && tab[dot.x + j3[i].x][dot.y + j3[i].y] == '.')
	{
		tab[dot.x + j3[i].x][dot.y + j3[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_l_0(char **tab, t_coord dot, t_tetri *tetrim, int size)
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
	while ((dot.x + l0[i].x) < size &&
			(dot.y + l0[i].y) < size &&
			i < 4 && tab[dot.x + l0[i].x][dot.y + l0[i].y] == '.')
	{
		tab[dot.x + l0[i].x][dot.y + l0[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_l_1(char **tab, t_coord dot, t_tetri *tetrim, int size)
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
	while ((dot.x + l1[i].x) < size &&
			(dot.y + l1[i].y) < size &&
			i < 4 && tab[dot.x + l1[i].x][dot.y + l1[i].y] == '.')
	{
		tab[dot.x + l1[i].x][dot.y + l1[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}
