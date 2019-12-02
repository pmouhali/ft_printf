/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:14:05 by pmouhali          #+#    #+#             */
/*   Updated: 2019/12/02 14:41:49 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_string(const char *f, va_list l, unsigned int *n)
{
	int			i;
	int			j;
	int			x;
	t_format	fmt;

	i = 0;
	j = 0;
	while (f[j])
	{
		if (f[j] == '%')
		{
			*n += super_putstr((char*)&f[i], (j - i), FALSE, &fmt);
			j += format_set(&f[j], l, &fmt);
			if ((x = ft_index(CONVERTERS, f[j])) != -1)
				*n += super_putstr(format_arg(x, l, &fmt), -1, TRUE, &fmt);
			else
				*n += super_putstr((char*)&f[j], 1, FALSE, &fmt);
			i = f[j] != 0 ? j + 1 : j;
		}
		j = f[j] != 0 ? j + 1 : j;
	}
	*n += super_putstr((char*)&f[i], (j - i), FALSE, &fmt);
}
