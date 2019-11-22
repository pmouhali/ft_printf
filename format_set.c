/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:45:09 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/22 18:10:58 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* retourne l'index du dernier charactere lu				*/
/* s'arrete sur le premier char non inclus dans les flags authorises	*/

int	format_set(const char *f, va_list l, t_format *fmt)
{
	unsigned int i;

	i = 1;
	while (ft_index(A_FLAGS, f[i]) != -1 || ft_isdigit(f[i]))
		i++;
	return (i);
} 
