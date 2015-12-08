/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:14:07 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/27 07:11:42 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_dst;
	size_t	l_src;
	size_t	n;

	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (size > l_dst)
	{
		n = size - l_dst - 1;
		ft_strncat(dst, src, n);
		dst[l_dst + n] = '\0';
		return (l_dst + l_src);
	}
	return (size + l_src);
}
