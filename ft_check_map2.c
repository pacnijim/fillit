/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 07:36:14 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/11 06:19:09 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

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

int				ft_check_map2(t_list *map)
{
	while (map != NULL)
	{
		if (ft_tetrimino(map) == 1)
			return (1);
		map = map->next;
	}
	return (0);
}
