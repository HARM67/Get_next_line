/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:35:26 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/27 07:44:57 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	size;
	size_t	size2;
	size_t	i;

	i = 0;
	while (*s == c)
		s++;
	size = ft_strcount(s, c);
	arr = (char**)malloc(sizeof(char*) * (size + 1));
	if (*s == 0)
		*arr = 0;
	else
		while (i < size)
		{
			size2 = ft_strclen(s, c);
			arr[i] = (char*)malloc(sizeof(char) * (size2 + 1));
			ft_strncpy(arr[i], s, size2);
			s = ft_strnext(s, c);
			i++;
		}
	return (arr);
}
