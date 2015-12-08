/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 06:46:29 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/27 21:08:59 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int str_len;
	int to_find_len;
	int i;

	i = 0;
	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
		return ((char*)str);
	while (i < str_len - to_find_len + 1)
	{
		if (ft_strncmp(to_find, (str + i), to_find_len) == 0)
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
