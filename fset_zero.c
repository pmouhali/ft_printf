/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fset_zero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 15:59:33 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/23 16:24:10 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void    fset_zero(t_format **format, const char *fs, va_list l)
{
	if (((*format)->flags & F_ZERO) || ((*format)->flags & F_LESS))
		return ;
	if ((*format)->precision != DEFAULT_PRECISION_VALUE)
		return ;
	if ((*format)->field_width != DEFAULT_PRECISION_VALUE)
		return ;
	(*format)->flags += F_ZERO;
}
