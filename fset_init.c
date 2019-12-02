/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fset_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 13:37:34 by pmouhali          #+#    #+#             */
/*   Updated: 2019/12/02 11:48:25 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fset_init(t_format **format, const char *fs, va_list l)
{
	(void)l;
	(void)fs;
	if (!l)
		return ;
	(*format)->flags = 0;
	(*format)->precision = DEFAULT_PRECISION_VALUE;
	(*format)->field_width = DEFAULT_FIELD_WIDTH_VALUE;
	(*format)->c_conv_zero = 0;
}
