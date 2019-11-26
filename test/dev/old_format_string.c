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

char	*format_string(const char *f, va_list l)
{
	int i;
	int j;
	t_format fmt;
	char *str = NULL;

	i = 0;
	j = 0;
	while (f[j])
	{
		if (f[j] == '%')
		{
			str = ft_strjoin(str, ft_strndup(&f[i], j - i));
			i = j;
			j += format_set(&f[j], l, &fmt);
			if (ft_index(CONVERTERS, f[j]) != -1)
			{
				str = ft_strjoin(str, format_arg(f[j], l, fmt));
				i = j + 1;
			}
		}
		j++;
	}
	if (f[i] != '\0') 
		str = ft_strjoin(str, ft_strndup(&f[i], j - i));
	return (str);
}