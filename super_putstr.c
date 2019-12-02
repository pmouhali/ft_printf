/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   super_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:42:14 by pmouhali          #+#    #+#             */
/*   Updated: 2019/12/02 14:27:09 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		super_putstr(char *s, int n, int free_s, t_format *format)
{
	int len;

	if (!s)
		return (0);
	if (format->c_conv_zero == 1)
	{
		if (format->flags & F_FIELD_WIDTH)
			write(1, s + 1, (len = ft_strlen(s)));
		else if (format->flags & F_LESS)
		{
			write(1, "\0", 1);
			write(1, s, (len = ft_strlen(s)) - 1);
		}
		else
			write(1, s, (len = 1));
		format->c_conv_zero = 0;
	}
	else
		write(1, s, (len = n < 0 ? ft_strlen(s) : n));
	if (free_s)
		free(s);
	return (len);
}
