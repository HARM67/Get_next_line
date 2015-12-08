/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 03:32:35 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/27 07:10:18 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *n_list;

	n_list = (t_list*)malloc(sizeof(t_list));
	if (n_list == 0)
		return (0);
	if (content)
	{
		n_list->content = ft_strdup(content);
		n_list->content_size = content_size;
	}
	else
	{
		n_list->content = 0;
		n_list->content_size = 0;
	}
	n_list->next = 0;
	return (n_list);
}
