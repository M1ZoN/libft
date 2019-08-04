/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 23:43:45 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/25 23:43:46 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	res;

	res = ft_strncmp(s1, s2, n);
	if (res == 0)
		return (1);
	else
		return (0);
}
