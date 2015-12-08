/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 04:13:03 by mfroehly          #+#    #+#             */
/*   Updated: 2015/11/27 05:01:51 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *n_list;
	t_list *temp;

	if (lst)
	{
		n_list = (*f)(lst);
		lst = lst->next;
		temp = n_list;
	}
	while (lst)
	{
		temp->next = (*f)(lst);
		temp = temp->next;
		lst = lst->next;
	}
	return (n_list);
}
