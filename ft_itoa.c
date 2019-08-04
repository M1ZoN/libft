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

static int	num_size(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char			*res;
	unsigned int	num;
	size_t			i;

	i = num_size(n);
	num = n;
	if (n < 0)
		num = -n;
	if (!(res = ft_strnew(i + 1)))
		return (NULL);
	res[i] = num % 10 + '0';
	while (num /= 10)
		res[--i] = num % 10 + '0';
	if (n < 0)
		res[0] = '-';
	return (res);
}
