/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:33:12 by yonuma            #+#    #+#             */
/*   Updated: 2024/05/02 13:43:12 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	return_str(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[len] != '\0')
		len++;
	ft_putstr(str);
	return (len);
}
