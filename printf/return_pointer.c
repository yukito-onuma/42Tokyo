/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:34:30 by yonuma            #+#    #+#             */
/*   Updated: 2024/05/02 17:10:27 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_pointer(void *n, int *count)
{
	char			*hex_digits;
	unsigned long	ui;

	*count += 1;
	ui = (unsigned long)n;
	hex_digits = "0123456789abcdef";
	if (ui >= 16)
		print_pointer((void *)(ui / 16), count);
	write(1, &hex_digits[ui % 16], 1);
}

int	return_pointer(void *n)
{
	int	count;

	count = 2;
	write(1, "0x", 2);
	print_pointer(n, &count);
	return (count);
}
