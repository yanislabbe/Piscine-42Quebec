/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:30:05 by ylabbe            #+#    #+#             */
/*   Updated: 2021/08/12 15:03:58 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b, int c);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				if (a != '7' || b != '8' || c != '9')
				{
					write(1, ", ", 2);
				}
				c += 1;
			}
			b += 1;
		}
		a += 1;
	}
}

void	ft_putchar(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
