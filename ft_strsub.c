/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 15:19:49 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/06 19:18:30 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

char		*ft_strsub(char *s, size_t start, size_t len, size_t t_len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if ((str = (char *)malloc(sizeof(char) * (t_len + 1))) == NULL)
		return (NULL);
	while (i < len && j < t_len)
	{
		if (s[start + i] != '\0' && s[start + i] != '\n')
			str[j++] = s[start + i];
		else if (s[start + i] != '\n')
			str[j++] = '\0';
		i++;
	}
	str[j] = '\0';;
	return (str);
}
