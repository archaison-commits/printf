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

#include "libft.h"
#include <stdarg.h>
#include <stdio.h>

static int	ft_conversions(int c)
{
	int	i;

	i = 0;
	if ()
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (fromat[i] == '%' && format[i + 1] == '%')
			ft_putchar('%'), i++;
		if (format[i] == '%' && format[i + 1] == 'c')
			ft_putchar(format[i + 2]), i + 2;
		if (format[i] == '%' && format[i + 1] == 's')
			ft_putstr(format[i]), i++;
		if (format[i] == '%' && format[i + 1] == 'd')
			ft_putnbr(format[i]);
		i++ write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return ;
}
