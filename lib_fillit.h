/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_fillit.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 03:56:26 by pacnijim          #+#    #+#             */
/*   Updated: 2017/02/10 09:14:53 by pacnijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FILLIT_H
# define LIBFT_FILLIT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define DEB ft_putstr("----------deb-----------\n");

typedef struct		s_list
{
	char			lettre;
	char			*tab;
	int				pts[4];

	struct s_list	*next;
}					t_list;

int					ft_error_arg(void);
int					ft_fail_open(void);
int					ft_error_map(void);
size_t				ft_strlen(const char *s);
void				ft_putchar(char c);
void				ft_putstr(const char *str);
void				ft_putnbr(int nb);
void				*ft_memalloc(size_t size);
void				ft_bzero(void *s, size_t n);
char				*ft_mktab(int fd);
char				*ft_strdup(char *src);
char				*ft_strsub(char *str, size_t ttart, size_t len, size_t t_len);
int					ft_strstr(const char *str, const char *to_find);
int					ft_check_map(const char *s);
int					ft_check_map2(t_list *map);
int					ft_test_form(t_list *tetr);
int					ft_test_form(t_list *tetrimino);
t_list				*ft_mklist(char *str);

#endif
