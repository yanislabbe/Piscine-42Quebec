/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ast-jean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:29:18 by ast-jean          #+#    #+#             */
/*   Updated: 2021/08/08 13:31:42 by ast-jean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	proceedIfOverZero(int x, int y, int i, int j);
void	putCharFirstLine02(int i, int x);
void	putCharLastLine02(int i, int x);
void	putCharInTheMiddle02(int i, int x);

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
			proceedIfOverZero(x, y, i, j);
			j++;
			ft_putchar('\n');
		}
		else
		{
			break ;
		}
	}
}

void	proceedIfOverZero(int x, int y, int i, int j)
{
	if (j == 1)
	{
		putCharFirstLine02(i, x);
	}
	else if (j == y)
	{
		putCharLastLine02(i, x);
	}
	else
	{
		putCharInTheMiddle02(i, x);
	}
}

void	putCharFirstLine02(int i, int x)
{
	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('A');
		}	
		else
		{
			ft_putchar('B');
		}
		i++;
	}	
}

void	putCharLastLine02(int i, int x)
{
	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
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

void	putCharInTheMiddle02(int i, int x)
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
