/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mklist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 03:00:15 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/06 19:06:06 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

static void		ft_printlist(t_list *list)
{
	while (list != NULL)
	{
		ft_putchar(list->lettre);
		ft_putchar('\n');
		ft_putstr(list->tab);
		ft_putchar('\n');
		list = list->next;
	}
}

static void		ft_fillist(t_list *list, char *str)
{
	list->lettre = 'a';
	list->tab = ft_strsub(str, 0, 20, 16);
	list->next = NULL;
}

t_list			*ft_mklist(char *str)
{
	t_list		*list;
	t_list		*begin;
	size_t		i;
	size_t		j;

	j = 1;
	if ((list = (t_list *)ft_memalloc(sizeof(t_list))) == NULL)
			return (NULL);
	ft_fillist(list, str);
	begin = list;
	i = 21;
	while (str[i])
	{
		if ((list->next = (t_list *)ft_memalloc(sizeof(t_list))) == NULL)
			return (NULL);
		list = list->next;
		list->lettre = 'a' + j;
		list->tab = ft_strsub(str, i, 20, 16);
		list->next = NULL;
		j++;
		i += 21;
	}
	ft_printlist(begin);
	return (begin);
}
