/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrenier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 00:49:35 by vgrenier          #+#    #+#             */
/*   Updated: 2015/12/17 17:00:37 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		rot_s_0(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	t_coord s0[4];
	int		i;

	i = 0;
	s0[0].x = 0;
	s0[0].y = 0;
	s0[1].x = 0;
	s0[1].y = 1;
	s0[2].x = 1;
	s0[2].y = -1;
	s0[3].x = 1;
	s0[3].y = 0;
	while ((dot.x + s0[i].x) < size &&
			(dot.y + s0[i].y) < size &&
			i < 4 && tab[dot.x + s0[i].x][dot.y + s0[i].y] == '.')
	{
		tab[dot.x + s0[i].x][dot.y + s0[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_s_1(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	t_coord s1[4];
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
	while ((dot.x + s1[i].x) < size &&
			(dot.y + s1[i].y) < size &&
			i < 4 && tab[dot.x + s1[i].x][dot.y + s1[i].y] == '.')
	{
		tab[dot.x + s1[i].x][dot.y + s1[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_z_0(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	t_coord z0[4];
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
	while ((dot.x + z0[i].x) < size &&
			(dot.y + z0[i].y) < size &&
			i < 4 && tab[dot.x + z0[i].x][dot.y + z0[i].y] == '.')
	{
		tab[dot.x + z0[i].x][dot.y + z0[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_z_1(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	t_coord z1[4];
	int		i;

	i = 0;
	z1[0].x = 0;
	z1[0].y = 0;
	z1[1].x = 1;
	z1[1].y = -1;
	z1[2].x = 1;
	z1[2].y = 0;
	z1[3].x = 2;
	z1[3].y = -1;
	while ((dot.x + z1[i].x) < size &&
			(dot.y + z1[i].y) < size &&
			i < 4 && tab[dot.x + z1[i].x][dot.y + z1[i].y] == '.')
	{
		tab[dot.x + z1[i].x][dot.y + z1[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}
