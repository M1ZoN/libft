/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <mislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 23:37:35 by mislamov          #+#    #+#             */
/*   Updated: 2019/08/08 17:12:37 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	if (s1)
		i = (size_t)(ft_strlen(s1));
	else if (s2)
		i = (size_t)(ft_strlen(s2));
	else if (s1 && s2)
		i = (size_t)(ft_strlen(s1) + ft_strlen(s2));
	else
		i = 0;
	str = ft_memalloc(i);
	if (!str)
		return (NULL);
	if (s1)
		str = ft_strcpy(str, (char *)s1);
	else
		str = ft_strcpy(str, (char *)s2);
	if (s1 && s2)
		str = ft_strcat(str, (char *)s2);
	return (str);
}
