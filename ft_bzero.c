/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 13:57:06 by pacnijim          #+#    #+#             */
/*   Updated: 2017/01/31 04:20:04 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

void				ft_bzero(void *s, size_t n)
{
	unsigned char	*s_tmp;
	size_t			x;

	s_tmp = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		s_tmp[x] = 0;
		x++;
	}
}
