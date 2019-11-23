/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fset_less.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:24:41 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/23 16:27:31 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void    fset_less(t_format **format, const char *fs, va_list l);
{
	if ((*format)->flags & F_LESS)
		return ;
	if ((*format)->flags & F_ZERO)
		(*format)->flags -= F_ZERO;
	(*format)->flags += F_LESS;
}
