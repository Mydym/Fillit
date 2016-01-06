/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetripush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:39:21 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/12 18:21:10 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	tetripush(t_tetri **alst, t_tetri *new, char c, int r)
{
	t_tetri	*index;
	int		i;

	index = *alst;
	i = 0;
	if (!index)
		*alst = new;
	else
	{
		i++;
		while (index->next)
		{
			index = index->next;
			i++;
		}
		index->next = new;
	}
	new->ordre = i;
	new->lettre = c;
	new->rotation = r;
	new->lettre_att = (char)i + 65;
}
