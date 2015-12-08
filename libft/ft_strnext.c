/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnext.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:57:16 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/25 16:32:14 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnext(const char *s, char sep)
{
	char *p;

	p = (char*)s + ft_strclen(s, sep);
	while (*p == sep)
		p++;
	if (*p == '\0')
		return (0);
	return (p);
}
