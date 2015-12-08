/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:06:17 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/25 16:33:38 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcount(const char *str, char sep)
{
	int	count;

	count = 0;
	while (str)
	{
		str = ft_strnext(str, sep);
		count++;
	}
	return (count);
}
