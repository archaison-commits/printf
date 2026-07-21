/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:19:36 by brechied          #+#    #+#             */
/*   Updated: 2026/07/15 17:19:40 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

static int	ft_conversions(va_list args, int type)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (type == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		count += ft_putnbr_un(va_arg(args, unsigned int));
	else if (type == 'x')
		count += ft_puthex_lo(va_arg(args, unsigned int));
	else if (type == 'X')
		count += ft_puthex_up(va_arg(args, unsigned int));
	else if (type == 'p')
		count += ft_putpointer(va_arg(args, void *));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	size_t	i;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			if (format[i + 1] == '%')
			{
				count += ft_putchar('%');
				i++;
			}
			else
				count += ft_conversions(&args, format[i + 1]);
			i++;
		}
		else if
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
