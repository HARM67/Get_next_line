/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:39:38 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/27 21:29:31 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest_c;
	unsigned char	*src_c;

	dest_c = (unsigned char*)dest;
	src_c = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dest_c[i] = src_c[i];
		if (src_c[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
