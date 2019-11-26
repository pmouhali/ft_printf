/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fset_less.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:24:41 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/26 12:15:51 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    fset_less(t_format **format, const char *fs, va_list l)
{
	(void)fs;
	(void)l;
	if ((*format)->flags & F_LESS)
		return ;
	if ((*format)->precision != DEFAULT_PRECISION_VALUE)
		return ;
	if ((*format)->flags & F_ZERO)
		(*format)->flags -= F_ZERO;
	(*format)->flags += F_LESS;
}
