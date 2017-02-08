/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 04:04:46 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/02 01:15:17 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

int		ft_error_arg(void)
{
	ft_putstr("fillit [source_file]\n");
	return (0);
}

int		ft_fail_open(void)
{
	ft_putstr("Fail open");
	return (0);
}

int		ft_error_map(void)
{
	ft_putstr("error map");
	return (0);
}
