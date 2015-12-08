/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:07:41 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/27 21:13:20 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	l_s2;
	char	*us1;
	char	*us2;

	l_s2 = ft_strlen(s2);
	if (n < l_s2)
		return (0);
	us1 = (char *)s1;
	us2 = (char *)s2;
	i = 0;
	n -= (l_s2 - 1);
	while (i < n && us1[i] != 0)
	{
		if (ft_strncmp((us1 + i), us2, l_s2) == 0)
			return ((char*)(us1 + i));
		i++;
	}
	return (0);
}
