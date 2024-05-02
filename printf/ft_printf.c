/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:22:46 by yonuma            #+#    #+#             */
/*   Updated: 2024/05/02 17:11:44 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, const char str)
{
	int	result;

	result = 0;
	if (str == 'c')
		result += return_chr(va_arg(ap, int));
	if (str == 's')
		result += return_str(va_arg(ap, char *));
	if (str == 'p')
		result += return_pointer(va_arg(ap, void *));
	if (str == 'd' || str == 'i')
		result += return_int(va_arg(ap, int));
	if (str == 'u')
		result += return_ten(va_arg(ap, unsigned int));
	if (str == 'x')
		result += return_base_small(va_arg(ap, unsigned int));
	// if (str == 'X')
	// 	result += return_base_big(va_arg(ap, unsigned int));
	if (str == '%')
		result += return_percent();
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		result;
	size_t	i;

	va_start(ap, format);
	i = 0;
	result = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			result += ft_format(ap, format[i + 1]);
			i++;
		}
		else
			result += return_chr(format[i]);
		i++;
	}
	va_end(ap);
	return (result);
}

// int	main(void)
// {
// 	int				num;
// 	unsigned int	uns_num;

// 	ft_printf("%c\n", 'A');
// 	ft_printf("%s\n", "Hello, world!");
// 	num = 123;
// 	ft_printf("%d\n", num);
// 	ft_printf("%p\n", (void *)&num);
// 	uns_num = 456;
// 	ft_printf("%u\n", uns_num);
// 	ft_printf("%x\n", uns_num);
// 	ft_printf("%X\n", uns_num);
// 	ft_printf("%%\n");
// 	return (0);
// }

// https://www.mm2d.net/main/prog/c/printf_format-01.html