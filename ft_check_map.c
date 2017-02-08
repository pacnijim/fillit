/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 07:36:14 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/06 03:01:33 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

static int		ft_check_symbol(char c)
{
 	return ((c == '.' || c == '#' || c == '\n') ? 0 : 1);
}

static int		ft_check_tetr(char *s, size_t *n)
{
	size_t	i;

	i = 0;
	while (i < 4)
	{
		if (s[*n + i] != '.' && s[*n + i] != '#')
				return (1);
		i++;
	}
	if (s[*n + i] != '\n')
			return (1);
	if (s[*n +i] && ft_check_symbol(s[*n + i]) == 1)
		return (1);
	*n += i;
	return (0);
}

int				ft_check_map(const char *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = i + 20;
		while (s[i] && i < j)
		{
			if (ft_check_tetr((char *)s, &i) == 1)
				return (1);
			i++;
		}
		if (s[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}
