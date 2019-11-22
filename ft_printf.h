/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:12:22 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/22 18:03:26 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define A_FLAGS "0-.*"

int	ft_printf(const char *f, ...);
char	*format_string(const char *f, va_list l);
int     format_check(const char *f, va_list l);

char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
int	ft_strlen(const char *s);
void	ft_putstr(const char *s);
int     ft_index(char const *s, char c);
int	ft_isdigit(int c);

#endif
