/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:27:45 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/24 17:27:47 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char*)str;
	while (ptr[i])
		i++;
	while (i != 0)
	{
		if (c == (int)ptr[i])
			return (ptr);
		i--;
	}
	return (NULL);
}
