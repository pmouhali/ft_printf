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

char	*format_arg(char c, va_list l, t_format format)
{
	char *s;
	
	s = NULL;
	s = g_conversion_functions[ft_index(CONVERTERS, c)](l);
	return (s);
}
