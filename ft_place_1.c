/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrenier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 17:57:08 by vgrenier          #+#    #+#             */
/*   Updated: 2015/12/16 17:33:39 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		place_t(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	int		(*rotate[4])(char **tab, t_coord dot, t_tetri *tetrim, int size);

	if (tetrim == NULL)
		return (0);
	rotate[0] = rot_t_0;
	rotate[1] = rot_t_1;
	rotate[2] = rot_t_2;
	rotate[3] = rot_t_3;
	if (rotate[tetrim->rotation](tab, dot, tetrim, size))
		return (OK);
	return (0);
}

int		place_s(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	int		(*rotate[2])(char **tab, t_coord dot, t_tetri *tetrim, int size);

	if (tetrim == NULL)
		return (0);
	rotate[0] = rot_s_0;
	rotate[1] = rot_s_1;
	if (rotate[tetrim->rotation](tab, dot, tetrim, size))
		return (OK);
	return (0);
}

int		place_z(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	int		(*rotate[2])(char **tab, t_coord dot, t_tetri *tetrim, int size);

	if (tetrim == NULL)
		return (0);
	rotate[0] = rot_z_0;
	rotate[1] = rot_z_1;
	if (rotate[tetrim->rotation](tab, dot, tetrim, size))
		return (OK);
	return (0);
}

int		place_i(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	int		(*rotate[2])(char **tab, t_coord dot, t_tetri *tetrim, int size);

	if (tetrim == NULL)
		return (0);
	rotate[0] = rot_i_0;
	rotate[1] = rot_i_1;
	if (rotate[tetrim->rotation](tab, dot, tetrim, size))
		return (OK);
	return (0);
}

int		place_o(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	int		(*rotate)(char **tab, t_coord dot, t_tetri *tetrim, int size);

	if (tetrim == NULL)
		return (0);
	rotate = rot_o;
	if (rotate(tab, dot, tetrim, size))
		return (OK);
	return (0);
}
