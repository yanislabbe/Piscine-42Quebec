/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ast-jean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:24:06 by ast-jean          #+#    #+#             */
/*   Updated: 2021/08/08 13:30:13 by ast-jean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	proceedIfOverZero(int x, int y, int i, int j);
void	putCharFirstLine01(int i, int x);
void	putCharLastLine01(int i, int x);
void	putCharInTheMiddle01(int i, int x);

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
		putCharFirstLine01(i, x);
	}
	else if (j == y)
	{
		putCharLastLine01(i, x);
	}
	else
	{
		putCharInTheMiddle01(i, x);
	}
}

void	putCharFirstLine01(int i, int x)
{
	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('/');
		}
		else if (i == x)
		{
			ft_putchar(92);
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}	
}

void	putCharLastLine01(int i, int x)
{
	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(92);
		}
		else if (i == x)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
}

void	putCharInTheMiddle01(int i, int x)
{
	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}
