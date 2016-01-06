/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 13:42:28 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/17 17:32:15 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int	ret_error(void)
{
	ft_putendl("error");
	return (0);
}

int			main(int argc, char **argv)
{
	t_tetri *test;
	t_tetri *test2;
	int		size;
	int		i;

	if (argc == 2)
	{
		test = NULL;
		if ((check_input(argv[1]) == -1) || (get_input(argv[1], &test) == -1))
			return (ret_error());
		size = 0;
		test2 = test;
		while (test2)
		{
			size++;
			test2 = test2->next;
		}
		i = 2;
		while (i * i < size * 4)
			i++;
		ft_filltab(test, ft_create_tab(i), i);
	}
	else
		return (ret_error());
	return (0);
}
