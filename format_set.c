/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:45:09 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/23 15:41:16 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// TO VERIFIY : What does va_arg returns if there is no arg left ? (see assignation in fset_field_width)

t_format_set_function g_format_set_functions[1] = {&fset_init};

int	format_set(const char *f, va_list l, t_format *fmt)
{
	unsigned int i;
	int index;

	i = 1;
	g_format_set_functions[FSET_INIT_INDEX](&fmt, f, l);
	while ((index = ft_index(FLAGS, f[i])) != -1 || ft_isdigit(f[i]))
	{
		if (index != -1)				
			g_format_set_functions[index](&fmt, &f[i], l);
		else
			g_format_set_functions[FSET_FIELD_WIDTH_INDEX](&fmt, &f[i], l);
		i++;
	}
	return (i);
} 
