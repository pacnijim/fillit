/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_form.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 18:43:32 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/10 18:53:44 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

static int			ft_test_carre(t_list *tetr)
{
	if ((tetr->pts[0] <= 2) || (tetr->pts[0] >= 4 && tetr->pts[0] <= 6) \
			|| (tetr->pts[0] >= 8 && tetr->pts[0] <= 10))
	{
		if (ft_strstr(tetr->tab, "##..##") == 0)
		{
			ft_putstr("carre ok");
			return (0);
		}
	}
	return (1);
}

static int			ft_test_formA(t_list *tetr)
{
	if ((tetr->pts[0] <= 1) || (tetr->pts[0] >= 4 && tetr->pts[0] <= 5) \
			|| (tetr->pts[0] >= 8 && tetr->pts[0] <= 9))
	{
		if ((ft_strstr(tetr->tab, "###.#") == 0) || \
				(ft_strstr(tetr->tab, "#...###") == 0) || \
				(ft_strstr(tetr->tab, "###...#") == 0) || \
				(ft_strstr(tetr->tab, "#.###") == 0))
		{
			ft_putstr("test formA ok\n");
			return (0);
		}
	}
	if ((tetr->pts[0] <= 2) || (tetr->pts[0] >= 4 && tetr->pts[0] <= 6))
	{
		if ((ft_strstr(tetr->tab, "#...#...##") == 0) || \
				(ft_strstr(tetr->tab, "##..#...#") == 0) || \
				(ft_strstr(tetr->tab, "##...#...#") == 0) || \
				(ft_strstr(tetr->tab, "#...#..##") == 0))
		{
			ft_putstr("test formA ok\n");
			return (0);
		}
	}
	return (1);
}

static int	ft_test_formB(t_list *tetr)
{
	if ((tetr->pts[0] >= 1) || (tetr->pts[0] >= 4 && tetr->pts[0] <= 5) || \
			(tetr->pts[0] >= 8 && tetr->pts[0] <= 9))
		if (ft_strstr(tetr->tab, "##...##") == 0)
		{
			ft_putstr("test formB ok\n");
			return (0);
		}
	if ((tetr->pts[0] >= 2 && tetr->pts[0] <= 3) || (tetr->pts[0] >= 5 && \
			tetr->pts[0] <= 6) || (tetr->pts[0] >= 9 && tetr->pts[0] <= 10))
		if (ft_strstr(tetr->tab, "##.##") == 0)
		{
			ft_putstr("test formB ok\n");
			return (0);
		}
	if ((tetr->pts[0] >= 1 && tetr->pts[0] <= 3) || (tetr->pts[0] >= 5 && \
			tetr->pts[0] <= 7))
		if (ft_strstr(tetr->tab, "#..##..#") == 0)
		{
			ft_putstr("test formB ok\n");
			return (0);
		}
	if ((tetr->pts[0] <= 2) || (tetr->pts[0] >= 4 && \
			tetr->pts[0] <= 6))
		if (ft_strstr(tetr->tab, "#...##...#") == 0)
		{
			ft_putstr("test formB ok\n");
			return (0);
		}
	return (1);
}

static	int	ft_test_formC(t_list *tetr)
{
	if ((tetr->pts[0] <= 1) || (tetr->pts[0] >= 4 && \
				tetr->pts[0] <= 5) || (tetr->pts[0] >= 8 && tetr->pts[0] <= 9))
		if (ft_strstr(tetr->tab, "###..#") == 0)
		{
			ft_putstr("test formC ok\n");
			return (0);
		}
	if ((tetr->pts[0] >= 1 && tetr->pts[0] <= 2) || (tetr->pts[0] >= 5 && \
				tetr->pts[0] <= 6) || (tetr->pts[0] >= 9 && tetr->pts[0] <= 10))
		if (ft_strstr(tetr->tab, "#..###") == 0)
		{
			ft_putstr("test formC ok\n");
			return (0);
		}
	if ((tetr->pts[0] >= 1 && tetr->pts[0] <= 3) || (tetr->pts[0] >= 5 && \
				tetr->pts[0] <= 7))
		if (ft_strstr(tetr->tab, "#..##...#") == 0)
		{
			ft_putstr("test formC ok\n");
			return (0);
		}
	if ((tetr->pts[0] <= 2) || (tetr->pts[0] >= 4 && \
				tetr->pts[0] <= 6))
	{
		ft_putstr("test formC ok\n");
		return (0);
	}
	return (1);
}

int			ft_test_form(t_list *tetr)
{
	if ((tetr->pts[0] == 0) || (tetr->pts[0] == 4) || (tetr->pts[0] == 8) \
			|| (tetr->pts[0] == 12))
		if (ft_strstr(tetr->tab, "####") == 0)
		{
			ft_putstr("test horz ok\n");
			return (0);
		}
	if ((tetr->pts[0] == 0) || (tetr->pts[0] == 1) || (tetr->pts[0] == 2) \
			|| (tetr->pts[0] == 3))
		if (ft_strstr(tetr->tab, "#...#...#...#") == 0)
		{
			ft_putstr("test vert ok\n");
			return (0);
		}
	if (ft_test_carre(tetr) == 0)
		return (0);
	if (ft_test_formA(tetr) == 0)
		return (0);
	if (ft_test_formB(tetr) == 0)
		return (0);
	if (ft_test_formC(tetr) == 0)
		return (0);
	return (1);
}
