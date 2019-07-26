/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:26:52 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/24 17:26:53 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *str1, char *str2)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	size_t			i;
	size_t			i2;

	i = 0;
	i2 = 0;
	ptr = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;
	while (ptr[i])
		i++;
	while (ptr2[i2])
	{
		ptr[i] = ptr2[i2];
		i2++;
		i++;
	}
	return (str1);
}
