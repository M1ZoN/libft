/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 10:16:57 by mislamov          #+#    #+#             */
/*   Updated: 2019/08/05 10:16:59 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*node_ptr;
	t_list	*new_node;
	t_list	*new_ptr;

	node_ptr = lst;
	if (!node_ptr)
		return (NULL);
	new_node = f(node_ptr);
	head = new_node;
	node_ptr = node_ptr->next;
	new_ptr = head;
	while (node_ptr)
	{
		new_node = f(node_ptr);
		new_ptr->next = new_node;
		node_ptr = node_ptr->next;
	}
	return (head);
}
