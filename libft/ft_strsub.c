/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:08:53 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/25 15:12:44 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *rt;

	rt = malloc(sizeof(char) * len + 1);
	if (rt == 0)
		return (0);
	ft_strncpy(rt, s + start, len);
	*(rt + len) = 0;
	return (rt);
}
