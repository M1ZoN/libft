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
	int		num;
	int		len;
	int		sign;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = n;
	len = 2;
	sign = (n < 0) ? 1 : 0;
	while (num /= 10)
		len++;
	len += sign;
	if ((res = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	res[--len] = '\0';
	while (len--)
	{
		res[len] = n % 10 + '0';
		n = n / 10;
	}
	if (sign)
		res[0] = '-';
	return (res);
}
