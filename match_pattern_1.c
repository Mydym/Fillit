/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_pattern_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrenier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 10:00:35 by vgrenier          #+#    #+#             */
/*   Updated: 2015/12/13 15:21:18 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		match_t(char **tab, int x, int y, t_tetri **tetrim)
{
	int		(*match[4])(char **tab, int x, int y, t_tetri **tetrim);

	match[0] = match_t_0;
	match[1] = match_t_1;
	match[2] = match_t_2;
	match[3] = match_t_3;
	if (match[0](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[1](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[2](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[3](tab, x, y, tetrim) == OK)
		return (OK);
	return (-1);
}

int		match_o(char **tab, int x, int y, t_tetri **tetrim)
{
	if (match_o_0(tab, x, y, tetrim) == OK)
		return (OK);
	return (-1);
}

int		match_i(char **tab, int x, int y, t_tetri **tetrim)
{
	int		(*match[2])(char **tab, int x, int y, t_tetri **tetrim);

	match[0] = match_i_0;
	match[1] = match_i_1;
	if (match[0](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[1](tab, x, y, tetrim) == OK)
		return (OK);
	return (-1);
}

int		match_j(char **tab, int x, int y, t_tetri **tetrim)
{
	int		(*match[4])(char **tab, int x, int y, t_tetri **tetrim);

	match[0] = match_j_0;
	match[1] = match_j_1;
	match[2] = match_j_2;
	match[3] = match_j_3;
	if (match[0](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[1](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[2](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[3](tab, x, y, tetrim) == OK)
		return (OK);
	return (-1);
}

int		match_l(char **tab, int x, int y, t_tetri **tetrim)
{
	int		(*match[4])(char **tab, int x, int y, t_tetri **tetrim);

	match[0] = match_l_0;
	match[1] = match_l_1;
	match[2] = match_l_2;
	match[3] = match_l_3;
	if (match[0](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[1](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[2](tab, x, y, tetrim) == OK)
		return (OK);
	else if (match[3](tab, x, y, tetrim) == OK)
		return (OK);
	return (-1);
}
