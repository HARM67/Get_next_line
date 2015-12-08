/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:16:04 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/30 18:50:54 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rt;
	size_t	l_s1;
	size_t	l_s2;

	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	rt = malloc(sizeof(char) * (l_s1 + l_s2 + 10));
	if (rt == 0)
		return (0);
	ft_strcpy(ft_memccpy(rt, s1, '\0', l_s1 + 1) - 1, s2);
	return (rt);
}
