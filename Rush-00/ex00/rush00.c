/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ast-jean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:04:22 by ast-jean          #+#    #+#             */
/*   Updated: 2021/08/08 12:48:49 by ast-jean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	putCharInFirstAndLastLine00(int i, int x);
void	putCharInTheMiddle00(int i, int x);

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
				putCharInFirstAndLastLine00(i, x);
			}
			else
			{
				putCharInTheMiddle00(i, x);
			}
			ft_putchar('\n');
			j++;
		}
		else
		{
			break ;
		}
	}
}

void	putCharInFirstAndLastLine00(i, x)
{
	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
}

void	putCharInTheMiddle00(i, x)
{	
	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}
