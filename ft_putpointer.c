/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 20:41:04 by brechied          #+#    #+#             */
/*   Updated: 2026/07/21 20:41:07 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	len_ft(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		len++;
	while (num != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

void	ft_puthex_lo(unsigned int n)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	if (n > 15)
		ft_puthex_lo(n / 16);
	len = len_ft(n);
	ft_putchar(base[n % 16]);
	return ;
}
