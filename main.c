/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 03:29:06 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/11 05:47:05 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

int			main(int ac, char **av)
{
	int		fd;
	char	*str;
	t_list	*map;

	if (ac != 2)
		if (ft_error_arg() == 0)
			return (1);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		if (ft_fail_open() == 0)
			return (1);
	str = ft_mktab(fd);
	close(fd);
	if (ft_check_map(str) == 1)
		if (ft_error_map() == 0)
			return (1);
	map = ft_mklist(str);
	free(str);
	if (ft_check_map2(map) == 1)
		if (ft_error_map() == 0)
			return (1);
	debug(map);
	return (0);
}
