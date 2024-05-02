/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_base_small.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:12:06 by yonuma            #+#    #+#             */
/*   Updated: 2024/05/02 21:07:39 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	return_base_small(unsigned int n)
{
	int		result;

	while (n >= 16)
	{
		return_base_small(n / 16);
		return_base_small(n % 16);
	}
	if (n > 9)
	{
		result = n + 'a' - 10;
		write(1, &result, 1);
	}
	else
	{
		result = n + '0';
		write(1, &result, 1);
	}
}
