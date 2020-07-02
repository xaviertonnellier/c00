/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtonnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 15:28:35 by xtonnell          #+#    #+#             */
/*   Updated: 2020/07/02 12:26:22 by xtonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char n[2];

	n[0] = -1;
	while (n[0]++ < 98)
	{
		n[1] = n[0];
		while (n[1]++ < 99)
		{
			ft_putchar('0' + (n[0] / 10));
			ft_putchar('0' + (n[0] % 10));
			ft_putchar(' ');
			ft_putchar('0' + (n[1] / 10));
			ft_putchar('0' + (n[1] % 10));
			if (n[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
