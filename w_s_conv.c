/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_s_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:42:49 by pmouhali          #+#    #+#             */
/*   Updated: 2019/12/02 11:42:57 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*w_s_conv(va_list l)
{
	char *s;

	s = ft_strdup(va_arg(l, char *));
	if (!s)
	{
		free(s);
		s = ft_strdup("(null)");
	}
	return (s);
}
