/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:27:32 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/24 17:27:33 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	in;
	size_t	i;
	size_t	j;
	size_t	ind;

	in = 1;
	i = 0;
	j = 0;
	while (haystack[i] != needle[0] && haystack[i])
		++i;
	ind = i;
	while (haystack[i] && needle[j] && in)
	{
		if (haystack[i] != needle[j])
			in = 0;
		i++;
		j++;
	}
	if (in)
		return (&((char *)haystack)[ind]);
	return (NULL);
}
