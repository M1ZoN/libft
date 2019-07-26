/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:31:50 by mislamov          #+#    #+#             */
/*   Updated: 2019/07/24 21:31:56 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *str1, void *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strcat(char *str1, char *str2);
char	*ft_strchr(const char *str, int c);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strnstr(const char	*big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *haystack, const char *needle);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
