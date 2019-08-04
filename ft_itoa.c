/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 23:38:01 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/25 23:38:02 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	unsigned int	len;
	int				neg;
	char			*res;

	len = 1;
	nbr = (n < 0) ? -n : n;
	neg = (n < 0) ? 1 : 0;
	if (neg)
		len++;
	while (n /= 10)
		len++;
	res = ft_strnew(len--);
	if (!(res))
		return (NULL);
	while (((len + 1) && neg) || (len && !neg))
	{
		res[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	(!neg) ? res[len] = '-' : 0;
	return (res);
}
