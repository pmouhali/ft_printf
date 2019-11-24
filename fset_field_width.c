/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fset_field_width.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 14:51:09 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/23 15:45:39 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fset_field_width(t_format **format, const char *fs, va_list l)
{
	if ((*format)->field_width != DEFAULT_FIELD_WIDTH_VALUE)
		return ;
	if ((*format)->precision != DEFAULT_PRECISION_VALUE)
		return ;
	if (fs[0] == '*')
	{
		(*format)->field_width = va_arg(l, int);
		if ((*format)->field_width < 0)
		{
			(*format)->field_width = (*format)->field_width * -1;
			fset_less(format, fs, l);	
		}
	}
	else if (ft_isdigit(fs[0]))
		(*format)->field_width = ft_atoi(&fs[0]);
	else
		(*format)->field_width = 0;
}
