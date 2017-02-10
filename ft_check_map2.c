/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 07:36:14 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/10 18:52:40 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

/*static int		ft_test_tetr(t_list *tetrimino)
{
	if (ft_test_form(tetrimino) != 0)
		return (1);
	return (0);
}*/

static int		ft_tetrimino(t_list *tetrimino)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (tetrimino->tab[i++])
		if (tetrimino->tab[i] == '#')
			tetrimino->pts[j++] = i;
	if (j != 4)
		return (1);
	if (ft_test_form(tetrimino) == 0)
		return (0);
	return (1);
}

static void			ft_print_tab(int *t)
{
	size_t			i;

	i = 0;
	while (i < 4)
	{
		ft_putnbr(t[i]);
		ft_putstr(" | ");
		i++;
	}
	ft_putchar('\n');
}

int				ft_check_map2(t_list *map)
{
	while (map != NULL)
	{
		if (ft_tetrimino(map) == 1)
			return (1);
		ft_print_tab(map->pts);
		map = map->next;
	}
	return (0);
}
