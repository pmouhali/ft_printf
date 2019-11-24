/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fset_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 15:49:51 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/23 15:58:47 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    fset_precision(t_format **format, const char *fs, va_list l)
{
	if ((*format)->precision != DEFAULT_PRECISION_VALUE )
		return ;
	if (fs[1] && fs[1] == '*')
	{
		(*format)->precision = va_arg(l, int);
		if ((*format)->precision < 0)
			(*format)->precision = 0;
	}
	else if (fs[1] && ft_isdigit(fs[1]))
		(*format)->precision = ft_atoi(&fs[1]);
	else
		(*format)->precision = 0;
}
