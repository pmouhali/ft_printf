/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   default_field_width.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:43:06 by pmouhali          #+#    #+#             */
/*   Updated: 2019/12/02 11:43:07 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*default_field_width(int c, char *s, t_format format)
{
	(void)c;
	return (field_width(32, s, format, FALSE));
}
