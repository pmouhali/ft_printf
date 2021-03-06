/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 21:34:54 by pmouhali          #+#    #+#             */
/*   Updated: 2019/12/01 21:34:55 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*field_width(int c, char *s, t_format format, int right_side)
{
	char	*new;
	int		len;
	int		fw;

	len = ft_strlen(s);
	if (len >= format.field_width)
		return (s);
	fw = format.field_width - len;
	if ((new = (char*)malloc(sizeof(char) * (fw + 1))) == NULL)
		return (s);
	new[fw] = '\0';
	ft_memset(new, c, fw);
	if (right_side)
		new = ft_strjoin(s, new);
	else
		new = ft_strjoin(new, s);
	return (new);
}
