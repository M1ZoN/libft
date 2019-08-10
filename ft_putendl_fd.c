/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <mislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 23:39:17 by mislamov          #+#    #+#             */
/*   Updated: 2019/08/09 17:46:40 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if (!s || !fd)
		return ;
	while (*s)
	{
		write(fd, &(*s), 1);
		s++;
	}
	write(fd, "\n", 1);
}
