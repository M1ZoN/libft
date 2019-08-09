/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <mislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 10:16:57 by mislamov          #+#    #+#             */
/*   Updated: 2019/08/08 19:51:09 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ptr;
	t_list	*head;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	ptr = f(lst);
	if (!(new_node = ft_lstnew(ptr->content, ptr->content_size)))
		return (NULL);
	head = new_node;
	lst = lst->next;
	while (lst)
	{
		ptr = f(lst);
		if (!(new_node->next = ft_lstnew(ptr->content, ptr->content_size)))
			return (NULL);
		new_node = new_node->next;
		lst = lst->next;
	}
	return (head);
}
