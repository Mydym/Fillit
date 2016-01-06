/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 13:43:12 by udelorme          #+#    #+#             */
/*   Updated: 2015/12/16 21:27:42 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BAD_FORM -1
# define MALLOC_FAIL -1
# define OK 1

# include "libft.h"

typedef struct	s_tetri
{
	char			lettre;
	int				ordre;
	int				rotation;
	char			lettre_att;
	struct s_tetri	*next;
}				t_tetri;

typedef struct	s_coord
{
	int		k;
	int		x;
	int		y;
	char	*pattern;
}				t_coord;

int				check_input(char *filename);
int				get_input(char *filename, t_tetri **all);
void			tetripush(t_tetri **alst, t_tetri *new, char c, int r);
t_tetri			*tetrinew();
void			tetri_print(t_tetri *all);

int				match_t(char **tab, int x, int y, t_tetri **tetrim);
int				match_o(char **tab, int x, int y, t_tetri **tetrim);
int				match_i(char **tab, int x, int y, t_tetri **tetrim);
int				match_j(char **tab, int x, int y, t_tetri **tetrim);
int				match_l(char **tab, int x, int y, t_tetri **tetrim);
int				match_s(char **tab, int x, int y, t_tetri **tetrim);
int				match_z(char **tab, int x, int y, t_tetri **tetrim);

int				match_t_0(char **tab, int x, int y, t_tetri **tetrim);
int				match_t_1(char **tab, int x, int y, t_tetri **tetrim);
int				match_t_2(char **tab, int x, int y, t_tetri **tetrim);
int				match_t_3(char **tab, int x, int y, t_tetri **tetrim);

int				match_o_0(char **tab, int x, int y, t_tetri **tetrim);

int				match_i_0(char **tab, int x, int y, t_tetri **tetrim);
int				match_i_1(char **tab, int x, int y, t_tetri **tetrim);

int				match_j_0(char **tab, int x, int y, t_tetri **tetrim);
int				match_j_1(char **tab, int x, int y, t_tetri **tetrim);
int				match_j_2(char **tab, int x, int y, t_tetri **tetrim);
int				match_j_3(char **tab, int x, int y, t_tetri **tetrim);

int				match_l_0(char **tab, int x, int y, t_tetri **tetrim);
int				match_l_1(char **tab, int x, int y, t_tetri **tetrim);
int				match_l_2(char **tab, int x, int y, t_tetri **tetrim);
int				match_l_3(char **tab, int x, int y, t_tetri **tetrim);

int				match_s_0(char **tab, int x, int y, t_tetri **tetrim);
int				match_s_1(char **tab, int x, int y, t_tetri **tetrim);

int				match_z_0(char **tab, int x, int y, t_tetri **tetrim);
int				match_z_1(char **tab, int x, int y, t_tetri **tetrim);

int				rot_t_0(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_t_1(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_t_2(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_t_3(char **tab, t_coord dot, t_tetri *tetrim, int size);

int				rot_i_0(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_i_1(char **tab, t_coord dot, t_tetri *tetrim, int size);

int				rot_o(char **tab, t_coord dot, t_tetri *tetrim, int size);

int				rot_j_0(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_j_1(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_j_2(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_j_3(char **tab, t_coord dot, t_tetri *tetrim, int size);

int				rot_l_0(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_l_1(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_l_2(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_l_3(char **tab, t_coord dot, t_tetri *tetrim, int size);

int				rot_s_0(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_s_1(char **tab, t_coord dot, t_tetri *tetrim, int size);

int				rot_z_0(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				rot_z_1(char **tab, t_coord dot, t_tetri *tetrim, int size);

int				place_t(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				place_s(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				place_z(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				place_i(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				place_o(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				place_j(char **tab, t_coord dot, t_tetri *tetrim, int size);
int				place_l(char **tab, t_coord dot, t_tetri *tetrim, int size);

int				ft_filltab(t_tetri *terim, char **tab, int size);
char			**ft_create_tab(int length);
char			**inc_tab(char **tab, int size);
void			ft_freetab(char **tab);
void			effacetetri(char l_att, char **tab);
void			ft_printtab(char **tab);

#endif
