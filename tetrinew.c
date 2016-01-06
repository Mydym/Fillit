/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrinew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:36:10 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/16 17:40:13 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

t_tetri		*tetrinew(void)
{
	t_tetri *new;

	new = (t_tetri *)malloc(sizeof(t_tetri));
	if (!new)
		return (NULL);
	new->lettre = '\0';
	new->ordre = 0;
	new->rotation = 0;
	new->next = NULL;
	return (new);
}
