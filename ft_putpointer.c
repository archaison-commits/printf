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


void	*ft_puthex_lo(unsigned int n)
{
	char	*prefix;
	char	*address;
	int		len;

	prefix = "0x";
	address = "0123456789abcdef";
	if (n > 15)
		ft_puthex_lo(n / 16);
	len = len_ft(n);
	ft_putchar(base[n % 16]);
	return ;
}
