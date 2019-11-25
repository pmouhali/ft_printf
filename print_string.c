/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:14:05 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/22 18:10:53 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_string(const char *f, va_list l)
{
	int i;
	int j;
	int r;
	int x;
	t_format fmt;

	i = 0;
	j = -1;
	r = 0;
	while (f[++j])
	{
		if (f[j] == '%')
		{
			r += super_putstr((char*)&f[i], (j - i), FALSE, FALSE);
			i = j;
			j += format_set(&f[j], l, &fmt);
			if ((x = ft_index(CONVERTERS, f[j])) != -1)
			{
				r += super_putstr(format_arg(x, l, fmt), -1, TRUE, x == 6);
				i = j + 1;
			}
		}
	}
	r += super_putstr((char*)&f[i], (j - i), FALSE, FALSE);
	return (r);
}
