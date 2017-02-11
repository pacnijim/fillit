/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_form.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 18:43:32 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/11 18:13:00 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"
#include <string.h>
static int			ft_test_carre(t_list *tetr)
{
	if ((tetr->pts[0] <= 2) || (tetr->pts[0] >= 4 && tetr->pts[0] <= 6) \
			|| (tetr->pts[0] >= 8 && tetr->pts[0] <= 10))
		if (ft_strstr(tetr->tab, "##..##") == 0)
		{
			DEB("1\n");
			return (0);
		}
	return (1);
}

static int			ft_test_formA(t_list *tetr)
{
	if ((tetr->pts[0] <= 1) || (tetr->pts[0] >= 4 && tetr->pts[0] <= 5) \
			|| (tetr->pts[0] >= 8 && tetr->pts[0] <= 9))
		if ((ft_strstr(tetr->tab, "###.#") == 0) || \
				(ft_strstr(tetr->tab, "#...###") == 0) || \
				(ft_strstr(tetr->tab, "###...#") == 0) || \
				(ft_strstr(tetr->tab, "#.###") == 0))
			return (0);
	if ((tetr->pts[0] <= 2) || (tetr->pts[0] >= 4 && tetr->pts[0] <= 6))
		if ((ft_strstr(tetr->tab, "#...#...##") == 0) || \
				(ft_strstr(tetr->tab, "##..#...#") == 0) || \
				(ft_strstr(tetr->tab, "##...#...#") == 0) || \
				(ft_strstr(tetr->tab, "#...#..##") == 0))
			return (0);
	return (1);
}

static int			ft_test_formB(t_list *tetr)
{
	if ((tetr->pts[0] >= 1) || (tetr->pts[0] >= 4 && tetr->pts[0] <= 5) || \
			(tetr->pts[0] >= 8 && tetr->pts[0] <= 9))
		if (ft_strstr(tetr->tab, "##...##") == 0)
		{
			DEB("5.1\n");
			return (0);
		}
	if ((tetr->pts[0] >= 2 && tetr->pts[0] <= 3) || (tetr->pts[0] >= 5 && \
			tetr->pts[0] <= 6) || (tetr->pts[0] >= 9 && tetr->pts[0] <= 10))
		if (ft_strstr(tetr->tab, "##.##") == 0)
		{
			DEB("5.2\n");
			return (0);
		}
	if ((tetr->pts[0] >= 1 && tetr->pts[0] <= 3) || (tetr->pts[0] >= 5 && \
			tetr->pts[0] <= 7))
		if (ft_strstr(tetr->tab, "#..##..#") == 0)
		{
			DEB("5.3\n");
			return (0);
		}
	if ((tetr->pts[0] <= 2) || (tetr->pts[0] >= 4 && \
			tetr->pts[0] <= 6))
		if (ft_strstr(tetr->tab, "#...##...#") == 0)
		{
			DEB("5.4\n");
			return (0);
		}
	return (1);
}

static	int			ft_test_formC(t_list *tetr)
{
	if ((tetr->pts[0] <= 1) || (tetr->pts[0] >= 4 && tetr->pts[0] <= 5) || \
			(tetr->pts[0] >= 8 && tetr->pts[0] <= 9))
		if (ft_strstr(tetr->tab, "###..#") == 0)
		{
			DEB("4.1\n");
			return (0);
		}
	if ((tetr->pts[0] >= 1 && tetr->pts[0] <= 2) || (tetr->pts[0] >= 5 && \
				tetr->pts[0] <= 6) || (tetr->pts[0] >= 9 && tetr->pts[0] <= 10))
		if (ft_strstr(tetr->tab, "#..###") == 0)
		{
			DEB("4.2\n");
			return (0);
		}
	if ((tetr->pts[0] >= 1 && tetr->pts[0] <= 3) || (tetr->pts[0] >= 5 && \
				tetr->pts[0] <= 7))
		if (ft_strstr(tetr->tab, "#..##...#") == 0)
		{
			DEB("4.3\n");
			return (0);
		}
	if ((tetr->pts[0] <= 2) || (tetr->pts[0] >= 4 && tetr->pts[0] <= 6))
	{	if (ft_strstr(tetr->tab, "#...##..#") == 0)
		{
			DEB("4.4\n");
			return (0);
		}
	}
	return (1);
}

int					ft_test_form(t_list *tetr)
{
	if ((tetr->pts[0] == 0) || (tetr->pts[0] == 4) || (tetr->pts[0] == 8) \
			|| (tetr->pts[0] == 12))
		if (ft_strstr(tetr->tab, "####") == 0)
		{
			DEB("2\n");
			return (0);
		}
	if ((tetr->pts[0] == 0) || (tetr->pts[0] == 1) || (tetr->pts[0] == 2) \
			|| (tetr->pts[0] == 3))
		if (ft_strstr(tetr->tab, "#...#...#...#") == 0)
		{
			DEB("3\n");
			return (0);
		}
	if (ft_test_carre(tetr) != 1)
		return (0);
	if (ft_test_formA(tetr) != 1)
		return (0);
	if (ft_test_formB(tetr) != 1)
		return (0);
	if (ft_test_formC(tetr) != 1)
		return (0);
	return (1);
}
