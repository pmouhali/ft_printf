/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:39:00 by pmouhali          #+#    #+#             */
/*   Updated: 2019/12/02 11:43:36 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*fw_zero(int c, char *s, t_format format)
{
	char	*new;
	char	*abs;
	int		len;

	if (s[0] == '-' && (len = ft_strlen(s)) < format.field_width)
	{
		len = format.field_width - len;
		if ((new = (char*)malloc(sizeof(char) * (len + 2))) == NULL)
			return (s);
		new[len + 1] = '\0';
		ft_memset(new, 48, len + 1);
		new[0] = '-';
		abs = ft_strdup(&s[1]);
		free(s);
		new = ft_strjoin(new, abs);
	}
	else if (c == 0 || format.flags & F_PRECISION)
		new = field_width(32, s, format, FALSE);
	else
		new = field_width(48, s, format, FALSE);
	return (new);
}
