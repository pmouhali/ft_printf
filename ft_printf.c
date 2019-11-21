/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 13:18:56 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/21 14:20:50 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	va_list l;
	char *str;

	va_start(l, f);
	str = format_string(f, l);
	ft_putstr(str);
	free(str);
	va_end(l);
	return (0);
}
