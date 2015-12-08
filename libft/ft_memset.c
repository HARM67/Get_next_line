/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:32:41 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/27 06:58:39 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*u_s;
	unsigned char	u_c;

	u_s = (unsigned char*)s;
	u_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*(u_s + i) = u_c;
		i++;
	}
	return (s);
}
