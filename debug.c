/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 03:31:24 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/11 04:09:23 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

static void		ft_print_points(int *pts)
{
	size_t	i;

	i = 0;
	while (i < 4)
	{
		ft_putnbr(pts[i]);
		ft_putstr(" | ");
		i++;
	}
	ft_putchar('\n');
}

void			debug(t_list *lst)
{
	while (lst != NULL)
	{
		ft_print_points(lst->pts);
		lst = lst->next;
	}
}
