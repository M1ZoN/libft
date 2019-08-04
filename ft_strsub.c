/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 23:37:24 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/25 23:37:25 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*res;
	int		j;

	i = start;
	j = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!*s || !(s[i]) || !res)
		return (NULL);
	ft_strncpy(res, &s[i], len);
	return (res);
}
