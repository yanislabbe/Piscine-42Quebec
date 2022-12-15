/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:11:12 by ylabbe            #+#    #+#             */
/*   Updated: 2021/08/22 16:11:14 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	count;
	int	value;

	count = 0;
	value = argc - 1;
	while (value > 0)
	{
		while (argv[value][count])
		{
			ft_putchar(argv[value][count]);
			count++;
		}
		ft_putchar('\n');
		count = 0;
		value--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
