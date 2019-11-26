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
	char *abs;
	int abs_len;
	int n;
	
	abs_len = s[0] == '-' ? s_len - 1 : s_len;
	if (abs_len >= p)
		return (s);

	n = abs_len == s_len ? 0 : 1;
	abs = ft_strdup(&s[n]);

	n = n == 0 ? p - abs_len : (p - abs_len) + 1;
	if ((new = (char*)malloc(sizeof(char) * (n + 1))) == NULL)
		return (s);
	new[n] = '\0';
	ft_memset(new, 48, n);
	n = abs_len == s_len ? 0 : 1;
	if (n == 1)
		new[0] = '-';
	new = ft_strjoin(new, abs);
	free(s);
	return (new);
}

char	*precision(int c, char *s, t_format format)
{
	char	*new;
	int len;
	int p;

	p = format.precision;
	if (p == DEFAULT_PRECISION_VALUE)
		return (s);
	len = ft_strlen(s);
	if (c == 0 && len > p)
		new = s_precision(s, p);
	else if (c != 0 && s[0] == '0' && p == 0)
	{
		new = ft_strdup("");
		free(s);
	}	
	else if (c != 0)
		new = n_precision(s, p, len);
	else
		new = s;
	return (new);
}
