/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 12:11:51 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/26 12:13:32 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	va_list l;
	unsigned int n;

	va_start(l, f);
	n = print_string(f, l);
	va_end(l);
	return (n);
}
