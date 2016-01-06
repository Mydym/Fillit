/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filltab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrenier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 16:41:38 by vgrenier          #+#    #+#             */
/*   Updated: 2015/12/17 17:01:34 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_print(int ordre, char **tab)
{
	if (ordre == 0)
	{
		ft_printtab(tab);
		ft_freetab(tab);
	}
	return (OK);
}

static int		ft_recur(int (*place[7])(char **, t_coord, t_tetri *, int),
		t_tetri *tetrim, char **tab, int size)
{
	t_coord	dot;

	dot.x = -1;
	dot.pattern = "TSZIOJL";
	while (tab[++dot.x] && (dot.y = -1))
		while (tab[dot.x][++dot.y] && (dot.k = -1))
			if (tab[dot.x][dot.y] == '.')
			{
				while (dot.pattern[dot.k] != tetrim->lettre)
					dot.k++;
				if (place[dot.k](tab, dot, tetrim, size) == OK)
					if (tetrim->next != NULL)
						if (ft_filltab(tetrim->next, tab, size) == OK)
							return (ft_print(tetrim->ordre, tab));
						else
							effacetetri(tetrim->lettre_att, tab);
					else if (tetrim->next == NULL)
						return (ft_print(tetrim->ordre, tab));
					else
						return (0);
				else
					effacetetri(tetrim->lettre_att, tab);
			}
	return ((tetrim->ordre == 0) ?
			(ft_filltab(tetrim, inc_tab(tab, size + 1), size + 1)) : 0);
}

int				ft_filltab(t_tetri *tetrim, char **tab, int size)
{
	int		(*place[7])(char **, t_coord, t_tetri *, int);

	if (tab == NULL)
		return (0);
	place[0] = place_t;
	place[1] = place_s;
	place[2] = place_z;
	place[3] = place_i;
	place[4] = place_o;
	place[5] = place_j;
	place[6] = place_l;
	return (ft_recur(place, tetrim, tab, size));
}
