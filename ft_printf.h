/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:12:22 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/23 13:59:23 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define A_FLAGS "0-.*"

typedef struct	s_format
{
	int flags;
	int precision;
	int field_width;
}		t_format;

int	ft_printf(const char *f, ...);
char	*format_string(const char *f, va_list l);
int     format_check(const char *f, va_list l);

char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
int	ft_strlen(const char *s);
void	ft_putstr(const char *s);
int     ft_index(char const *s, char c);
int	ft_isdigit(int c);

void    fset_init(t_format **format, va_list l);
//void    fset_0(t_format **format, va_list l);
//void    fset_less(t_format **format, va_list l);
//void    fset_precision(t_format **format, va_list l);
//void    fset_field_width(t_format **format, va_list l);

typedef void	(*t_format_set_function)(t_format **fmt, va_list l);

# define FSET_INIT_INDEX 0

t_format_set_function g_format_set_functions[1] = {&fset_init};

#endif
