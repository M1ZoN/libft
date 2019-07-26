/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:25:01 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/22 17:15:14 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	size_t			i;

	i = -1;
	ptr = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;
	if (ptr < ptr2)
		while (++i < n)
		{
			ptr[i] = ptr2[i];
		}
	else
		while (n-- > 0)
		{
			ptr[n] = ptr2[n];
		}
	return (str1);
}
