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

t_flag_function		g_flag_functions[] = 
{
	&precision
};

int		flag_bmask_values[] =
{
	F_PRECISION, F_FIELD_WIDTH, F_ZERO, F_LESS
};

char	*format_arg(int c, va_list l, t_format format)
{
	char *s;
	int i;
	
	s = NULL;
	s = g_conversion_functions[c](l);
	i = 0;
	while (i < FLAG_NUMBER)
	{
		if (format.flags & flag_bmask_values[i])
			s = g_flag_functions[i](c, s, format);
		i++;
	}
	return (s);
}
