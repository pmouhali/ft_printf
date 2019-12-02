/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:12:22 by pmouhali          #+#    #+#             */
/*   Updated: 2019/12/02 11:54:16 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

# define CONVERTERS "sdiuxXcp%"
# define FLAGS "0-.*"

# define FLAG_NUMBER 4
# define F_PRECISION 1
# define F_FIELD_WIDTH 2
# define F_ZERO 4
# define F_LESS 8

# define DEFAULT_FIELD_WIDTH_VALUE -1
# define DEFAULT_PRECISION_VALUE -1

typedef struct		s_format
{
	int flags;
	int precision;
	int field_width;
	int c_conv_zero;
}					t_format;

typedef void	(*t_format_set_function)(
			t_format **fmt,
			const char *fs,
			va_list l
);

typedef char	*(*t_conversion_function)(va_list l);

typedef char	*(*t_flag_function)(int c, char *s, t_format ormat);

int					ft_printf(const char *f, ...);
void				print_string(const char *f, va_list l, unsigned int *n);
int					format_set(const char *f, va_list l, t_format *fmt);
char				*format_arg(int c, va_list l, t_format *format);

int					super_putstr(char *s, int n, int free_s, t_format *format);
char				*ft_strdup(const char *s);
char				*ft_strndup(const char *s, unsigned int n);
char				*ft_strjoin(char *s1, char *s2);
int					ft_strlen(const char *s);
int					ft_index(char const *s, char c);
int					ft_isdigit(int c);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
char				*ft_utoa(unsigned int n);
char				*ft_dec_to_hex(unsigned int n, char *hex_charset);
char				*ft_get_address(long int n);
void				*ft_memset(void *s, int c, size_t n);
char				*field_width(
					int c,
					char *s,
					t_format format,
					int right_side
);

void				fset_init(t_format **format, const char *fs, va_list l);
void				fset_field_width(
					t_format **format,
					const char *fs,
					va_list l
);
void				fset_zero(t_format **format, const char *fs, va_list l);
void				fset_less(t_format **format, const char *fs, va_list l);
void				fset_precision(
					t_format **format,
					const char *fs,
					va_list l
);

char				*w_s_conv(va_list l);
char				*w_p_conv(va_list l);
char				*w_d_conv(va_list l);
char				*w_i_conv(va_list l);
char				*w_u_conv(va_list l);
char				*w_xl_conv(va_list l);
char				*w_xu_conv(va_list l);
char				*w_char37_conv(va_list l);
char				*w_c_conv(va_list l);

char				*precision(int c, char *s, t_format format);
char				*default_field_width(int c, char *s, t_format format);
char				*fw_zero(int c, char *s, t_format format);
char				*fw_less(int c, char *s, t_format format);

#endif
