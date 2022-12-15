/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:17:26 by ylabbe            #+#    #+#             */
/*   Updated: 2021/08/24 18:07:17 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	unsigned int	count;
	unsigned int	nb2;

	nb2 = nb;
	count = 0;
	if (nb2 < 0)
		return (0);
	if (nb2 == 0)
		return (0);
	while (count * count != nb2)
	{
		count++;
		if (count * count > nb2)
			return (0);
	}
	return (count);
}
