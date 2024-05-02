/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_ten.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:34:00 by yonuma            #+#    #+#             */
/*   Updated: 2024/05/02 15:31:46 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	return_ten(unsigned int n)
{
	int	length;

	length = 0;
	print_unsigned_int(n);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}
