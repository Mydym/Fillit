/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolkit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 21:10:45 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/16 21:57:50 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

char	**ft_create_tab(int length)
{
	char	**tab;
	int		i;
	int		j;

	tab = (char **)malloc(sizeof(char *) * length + 1);
	if (!tab)
		return (NULL);
	tab[length] = 0;
	i = 0;
	while (i < length)
	{
		tab[i] = (char *)malloc(sizeof(char) * length + 1);
		if (!tab[i])
			return (NULL);
		j = 0;
		tab[i][length] = 0;
		while (j < length)
		{
			tab[i][j] = '.';
			j++;
		}
		i++;
	}
	return (tab);
}

void	ft_freetab(char **tab)
{
	int i;

	i = -1;
	while (tab[++i] != 0)
		free(tab[i]);
	free(tab);
}

void	effacetetri(char l_att, char **tab)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (tab[x])
	{
		y = 0;
		while (tab[x][y])
		{
			if (tab[x][y] == l_att)
				tab[x][y] = '.';
			y++;
		}
		x++;
	}
}

char	**inc_tab(char **tab, int size)
{
	char	**new;

	new = ft_create_tab(size);
	ft_freetab(tab);
	if (new)
		return (new);
	return (NULL);
}
