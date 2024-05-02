/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:22:35 by yonuma            #+#    #+#             */
/*   Updated: 2024/05/02 12:57:24 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_write_nbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_write_nbr(n / 10);
	c = '0' + (n % 10);
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
		ft_write_nbr(n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	i = 0;
	while (i < size)
	{
		ft_putchar(s[i]);
		i++;
	}
}
