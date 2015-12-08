/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 03:54:21 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/27 04:43:04 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;
	t_list *lst;

	lst = *alst;
	while (lst)
	{
		next = lst->next;
		(*del)(lst->content, lst->content_size);
		lst = next;
	}
	*alst = 0;
}
