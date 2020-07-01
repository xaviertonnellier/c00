/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtonnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:23:22 by xtonnell          #+#    #+#             */
/*   Updated: 2020/07/01 18:14:52 by xtonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char n[3];

	n[0] = '0';
	n[1] = '1';
	n[2] = '2';
	while (n[0] <= '9')
	{
		n[1] = n[0] + 1;
		while (n[1] <= '9')
		{
			n[2] = n[1] + 1;
			while (n[2] <= '9')
			{
				ft_putchar(n[0]);
				ft_putchar(n[1]);
				ft_putchar(n[2]);
				ft_putchar(',');
				ft_putchar(' ');
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
