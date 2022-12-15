/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ast-jean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:29:33 by ast-jean          #+#    #+#             */
/*   Updated: 2021/08/08 13:26:27 by ast-jean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	putCharInFirstAndLastLine03(int i, int x);
void	putCharInTheMiddle03(int i, int x);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		if (x > 0 && y > 0)
		{
			if (j == 1 || j == y)
			{
				putCharInFirstAndLastLine03(i, x);
			}
			else
			{
				putCharInTheMiddle03(i, x);
			}
			j++;
			ft_putchar('\n');
		}
		else
		{
			break ;
		}
	}
}

void	putCharInFirstAndLastLine03(int i, int x)
{
	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('A');
		}
		else if (i == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
}

void	putCharInTheMiddle03(int i, int x)
{	
	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}
