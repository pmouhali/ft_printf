/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:39:00 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/26 15:22:03 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*s_precision(char *s, int p)
{
	char *new;

	if ((new = ft_strndup(s, p)) == NULL)
		return (s);
	free(s);
	return (new);
}

static char	*n_precision(char *s, int p, int s_len)
{
	char *new;
	unsigned int n_len;
	
	n_len = s[0] == '-' ? s_len - 1 : s_len;
	if (n_len < p)
		
	if ((new = (char*)malloc(sizeof(char) * (p + 1))) == NULL)
		return (s);
	
}

char	*precision(int c, char *s, int p)
{
	char	*new;
	unsigned int len;

	len = ft_strlen(s);
	if (c == 0 && len > p)
		new = s_precision(s, p);
	else
		new = n_precision(s, p, len);		
	return (new);
}

// 123 4
// 0123
