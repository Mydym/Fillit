/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:16:52 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/14 11:44:19 by vgrenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	tetri_print(t_tetri *all)
{
	while (all)
	{
		ft_putendl(&all->lettre);
		ft_putendl(ft_itoa(all->ordre));
		ft_putendl(ft_itoa(all->rotation));
		ft_putendl(&all->lettre_att);
		ft_putendl("");
		all = all->next;
	}
}
