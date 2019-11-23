/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:12:22 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/23 15:59:56 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define FLAGS "0-.*"
# define F_ZERO 1
# define F_LESS 2

# define DEFAULT_FIELD_WIDTH_VALUE -1
# define DEFAULT_PRECISION_VALUE -1

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

void    fset_init(t_format **format, const char *fs, va_list l);
void    fset_field_width(t_format **format, const char *fs, va_list l);
void    fset_zero(t_format **format, const char *fs, va_list l);
void    fset_precision(t_format **format, const char *fs, va_list l);

typedef void	(*t_format_set_function)(t_format **fmt, const char *fs, va_list l);

#endif
