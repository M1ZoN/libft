/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:27:22 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/24 17:27:23 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char*)str;
	while (ptr[i])
	{
		if (c == (int)ptr[i])
			return (ptr);
		i++;
	}
	return (NULL);
}
