/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:12:22 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/23 16:24:57 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define CONVERTERS "sdiuxXcp%"
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

typedef void	(*t_format_set_function)(t_format **fmt, const char *fs, va_list l);

typedef char	(*t_conversion_function)(va_list l);

typedef char	(*t_flags_function)(char *str);

/* ft_printf arch functions */
int		ft_printf(const char *f, ...);
char	*format_string(const char *f, va_list l);
int		format_set(const char *f, va_list l, t_format *fmt);
char	*format_arg(char c, va_list l, t_format format);

/* tools */
char	*ft_strndup(const char *s, unsigned int n);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(const char *s);
void	ft_putstr(const char *s);
int     ft_index(char const *s, char c);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
// char *ft_itoa(int n);

/* format set functions */
void    fset_init(t_format **format, const char *fs, va_list l);
void    fset_field_width(t_format **format, const char *fs, va_list l);
void    fset_zero(t_format **format, const char *fs, va_list l);
void    fset_less(t_format **format, const char *fs, va_list l);
void    fset_precision(t_format **format, const char *fs, va_list l);

/* conversions functions (wrappers) */
char	*w_c_conv(va_list l);
char	*w_s_conv(va_list l);
char	*w_p_conv(va_list l);
char	*w_d_conv(va_list l);
char	*w_i_conv(va_list l);
char	*w_u_conv(va_list l);
char	*w_x_conv(va_list l);
char	*w_X_conv(va_list l);
char	*w_%_conv(va_list l);

/* conversions functions */
char	*c_conv(int c);
char	*s_conv(char *s);
char	*p_conv(void *p);
char	*d_conv(int i);
char	*i_conv(int i);
char	*u_conv(int i);
char	*x_conv(int i);
char	*X_conv(int i);
char	*%_conv(void);

#endif
