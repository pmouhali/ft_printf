/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:03:04 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/21 13:37:46 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int	size;
	int i;

	if (!s1 && !s2)
		return (NULL);
	size = s1 == NULL ? 0 : ft_strlen(s1);
	size += s2 == NULL ? 0 : ft_strlen(s2);
	if ((new = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	size = s1 == NULL ? 0 : -1;
	while (s1 && s1[++size] != '\0')
		new[size] = s1[size];
	free(s1);
	i = s2 == NULL ? 0 : -1;
	while (s2 && s2[++i] != '\0')
		new[size + i] = s2[i];
	free(s2);
	new[size + i] = '\0';
	return (new);
}
