/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mktab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 01:50:23 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/02 00:52:23 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

char		*ft_mktab(int fd)
{
	char	*s;
	char	buff;
	size_t	i;

	i = 0;
	if ((s = (char *)ft_memalloc(546)) == NULL)
		return (NULL);
	while (i < 546)
		if (read(fd, &buff, 1) != 0)
			s[i++] = buff;
		else
			s[i++] = '\0';
	return (s);
}
