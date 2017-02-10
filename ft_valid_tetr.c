/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_tetr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 22:20:49 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/10 00:56:37 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

int			ft_valid_tetr(t_list *tetr, int i)
{
	(void)i;
	(void)tetr;
	/*int		j;

	while (tetr->tab[i])
	{
		j = 0;
		if (tetr->tab[i + j] == '#')
			i++;
		while (tetr->tab[i + j] != '#')
		{
			DEB
			ft_putnbr(j);
			ft_putchar('\n');
			j++;
			if (j > 4)
				return (1);
		}
		i = i + j;
	}*/
	return (0);
}
