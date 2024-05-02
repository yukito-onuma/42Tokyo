/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:19:43 by yonuma            #+#    #+#             */
/*   Updated: 2024/05/02 19:04:50 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

static void	ft_write_nbr(int n);
void		ft_putnbr(int n);
int			return_percent(void);
int			ft_strlen(const char *str);
void		ft_putchar(char c);
void		ft_putstr(char *s);
int			ft_printf(const char *format, ...);
int			return_int(int str);
int			return_chr(int c);
int			return_pointer(void *str);
void		print_unsigned_int(unsigned int n);
int			return_ten(unsigned int n);
int			return_str(char *str);
int			ft_format(va_list ap, const char str);
int			return_base_small(unsigned int n);
