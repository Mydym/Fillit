/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 20:39:41 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/17 16:59:22 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		rot_t_0(char **tab, t_coord dot, t_tetri *tetrim, int size)
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
	while ((dot.x + t0[i].x) < size &&
			(dot.y + t0[i].y) < size &&
			i < 4 && tab[dot.x + t0[i].x][dot.y + t0[i].y] == '.')
	{
		tab[dot.x + t0[i].x][dot.y + t0[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_t_1(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	t_coord	t1[4];
	int		i;

	i = 0;
	t1[0].x = 0;
	t1[0].y = 0;
	t1[1].x = 1;
	t1[1].y = -1;
	t1[2].x = 1;
	t1[2].y = 0;
	t1[3].x = 2;
	t1[3].y = 0;
	while ((dot.x + t1[i].x) < size &&
			(dot.y + t1[i].y) < size &&
			i < 4 && tab[dot.x + t1[i].x][dot.y + t1[i].y] == '.')
	{
		tab[dot.x + t1[i].x][dot.y + t1[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_t_2(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	t_coord	t2[4];
	int		i;

	i = 0;
	t2[0].x = 0;
	t2[0].y = 0;
	t2[1].x = 1;
	t2[1].y = -1;
	t2[2].x = 1;
	t2[2].y = 0;
	t2[3].x = 1;
	t2[3].y = 1;
	while ((dot.x + t2[i].x) < size &&
			(dot.y + t2[i].y) < size &&
			i < 4 && tab[dot.x + t2[i].x][dot.y + t2[i].y] == '.')
	{
		tab[dot.x + t2[i].x][dot.y + t2[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}

int		rot_t_3(char **tab, t_coord dot, t_tetri *tetrim, int size)
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
	while ((dot.x + t3[i].x) < size &&
			(dot.y + t3[i].y) < size &&
			i < 4 && tab[dot.x + t3[i].x][dot.y + t3[i].y] == '.')
	{
		tab[dot.x + t3[i].x][dot.y + t3[i].y] = tetrim->lettre_att;
		i++;
	}
	if (i == 4)
		return (OK);
	return (0);
}
