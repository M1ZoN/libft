/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 10:16:04 by mislamov          #+#    #+#             */
/*   Updated: 2019/08/05 10:16:05 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;

	new_node = (t_list*)(malloc(sizeof(t_list)));
	if (!new_node)
		return (NULL);
	if (!content || !content_size)
	{
		new_node->content = NULL;
		new_node->content_size = NULL;
	}
	else
	{
		new_node->content = (void *)malloc(content_size);
		if (!new_node)
			return (NULL);
		ft_memcpy(new_node->content, content, content_size);
		new_node->content_size = &content_size;
	}
	return (new_node);
}
