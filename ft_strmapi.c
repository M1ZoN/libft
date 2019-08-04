/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 23:36:44 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/25 23:36:45 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	char	*new_str;
	size_t	i;

	i = -1;
	size = ft_strlen(s);
	new_str = malloc(sizeof(char) * (size + 1));
	while (s[++i])
		new_str[i] = f(i, s[i]);
	return (new_str);
}
