/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fset_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 13:37:34 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/23 13:56:32 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fset_init(t_format **format, va_list l)
{
	(void)l;
	if (!l)
		return ;
	(*format)->flags = 0;
	(*format)->precision = -1;	
	(*format)->field_width = -1;	
}

/*
int	main(void)
{
	t_format f;
	t_format *pf;	
	va_list l;

	f.flags = 666;
	f.precision = 666;
	f.field_width = 666;

	pf = &f;
	fset_init(&pf);
	g_format_set_functions[0](&pf, l);

	printf("flags %d\n", f.flags);
	printf("precision %d\n", f.precision);
	printf("field_width %d\n", f.field_width);
}
*/
