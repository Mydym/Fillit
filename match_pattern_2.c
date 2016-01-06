/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_pattern_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 20:56:03 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/12 21:28:00 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		match_s(char **tab, int x, int y, t_tetri **tetrim)
{
	int		(*match[2])(char **tab, int x, int y, t_tetri **tetrim);

	match[0] = match_s_0;
	match[1] = match_s_1;
	if (match[0](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[1](tab, x, y, tetrim) == OK)
		return (OK);
	return (-1);
}

int		match_z(char **tab, int x, int y, t_tetri **tetrim)
{
	int		(*match[2])(char **tab, int x, int y, t_tetri **tetrim);

	match[0] = match_z_0;
	match[1] = match_z_1;
	if (match[0](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[1](tab, x, y, tetrim) == OK)
		return (OK);
	return (-1);
}
