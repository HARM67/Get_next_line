/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:53:38 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/27 21:10:30 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\0')
		i++;
	if (i < j)
	{
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		return (ft_strsub(s, i, j - i + 1));
	}
	return (ft_strdup("\0"));
}
