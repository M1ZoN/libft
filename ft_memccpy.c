/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:15:52 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/22 17:16:16 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *str1, void *str2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;
	while (n > 0 && *(ptr2) != 'c')
	{
		*(ptr) = *(ptr2);
		ptr++;
		ptr2++;
		n--;
	}
	if (*(--ptr2) == 'c')
		return (++ptr2);
	else
		return (str1);
}
