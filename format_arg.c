/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:14:05 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/26 14:49:10 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_conversion_function	g_conversion_functions[] =
{
	&w_s_conv, 
	&w_d_conv,
	&w_i_conv,
	&w_u_conv,
	&w_xl_conv,
	&w_xu_conv,
	&w_c_conv,
	&w_p_conv,
	&w_char37_conv
};

t_flag_function		g_flag_functions[] = {};

char	*format_arg(int c, va_list l, t_format format)
{
	(void)format;
	char *s;
	
	s = NULL;
	s = g_conversion_functions[c](l);
	if (format.precision != DEFAULT_PRECISION_VALUE)
		s = precision(c, s, format.precision);
	return (s);
}
