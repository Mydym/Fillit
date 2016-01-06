/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrenier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 09:12:35 by vgrenier          #+#    #+#             */
/*   Updated: 2015/12/16 17:33:37 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		place_j(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	int		(*rotate[4])(char **tab, t_coord dot, t_tetri *tetrim, int size);

	if (tetrim == NULL)
		return (0);
	rotate[0] = rot_j_0;
	rotate[1] = rot_j_1;
	rotate[2] = rot_j_2;
	rotate[3] = rot_j_3;
	if (rotate[tetrim->rotation](tab, dot, tetrim, size))
		return (OK);
	return (0);
}

int		place_l(char **tab, t_coord dot, t_tetri *tetrim, int size)
{
	int		(*rotate[4])(char **tab, t_coord dot, t_tetri *tetrim, int size);

	if (tetrim == NULL)
		return (0);
	rotate[0] = rot_l_0;
	rotate[1] = rot_l_1;
	rotate[2] = rot_l_2;
	rotate[3] = rot_l_3;
	if (rotate[tetrim->rotation](tab, dot, tetrim, size))
		return (OK);
	return (0);
}
