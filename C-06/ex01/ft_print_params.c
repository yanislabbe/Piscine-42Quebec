/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:20:36 by ylabbe            #+#    #+#             */
/*   Updated: 2021/08/20 13:21:09 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	count;
	int	value;

	count = 0;
	value = 1;
	while (value < argc)
	{
		while (argv[value][count])
		{
			ft_putchar(argv[value][count]);
			count++;
		}
		ft_putchar('\n');
		count = 0;
		value++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
