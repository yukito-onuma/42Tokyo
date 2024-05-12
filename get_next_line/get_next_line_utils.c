/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:19:01 by yonuma            #+#    #+#             */
/*   Updated: 2024/05/12 19:35:36 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	size_t	size;
	size_t	i;

	if (!s)
		return ;
	size = ft_strlen(s);
	i = 0;
	while (i < size)
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	const unsigned char	*src1;
	size_t				i;

	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*dest1 = *src1;
		dest1++;
		src1++;
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1) + 1;
	result = (char *)malloc(len);
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static char	*ft_strcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	size;
	size_t	size2;

	if (!s1 && !s2)
		return (NULL);
	if (!s2)
		return (ft_strdup(s1));
	if (!s1)
		return (ft_strdup(s2));
	size = ft_strlen(s1);
	size2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (size + size2 + 1));
	if (!result)
		return (NULL);
	ft_strcpy(result, s1, size);
	ft_strcpy(result + size, s2, size2);
	result[size + size2] = '\0';
	return (result);
}
