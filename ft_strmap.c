/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 23:36:37 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/25 23:36:39 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	char	*new_str;
	size_t	i;

	i = -1;
	size = ft_strlen(s);
	new_str = malloc(sizeof(char) * (size + 1));
	while (s[++i])
		new_str[i] = f(s[i]);
	return (new_str);
}
