/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 13:53:41 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/07 18:29:14 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lib_fillit.h>

static int		ft_len(char *s)
{
	int			i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static char		*ft_cpy(char *dest, char *src)
{
	while (*src != '\0')
		*(dest++) = *(src++);
	*dest = '\0';
	return (dest);
}

char			*ft_strdup(char *src)
{
	char		*dest;

	if ((dest = (char *)malloc(sizeof(char) * (ft_len(src) + 1))) == NULL)
		return (NULL);
	ft_cpy(dest, src);
	return (dest);
}
