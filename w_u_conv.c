/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_u_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:44:09 by pmouhali          #+#    #+#             */
/*   Updated: 2019/12/02 11:44:12 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*w_u_conv(va_list l)
{
	return (ft_utoa(va_arg(l, unsigned int)));
}
