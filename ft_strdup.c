/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:02:19 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/21 13:27:16 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;

	i = 0;
	while (s[i])
		i++;
	if ((new = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		new[i] = *s;
		i++;
		s++;
	}
	new[i] = '\0';
	return (new);
}
