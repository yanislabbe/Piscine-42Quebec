/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:36:40 by ylabbe            #+#    #+#             */
/*   Updated: 2021/08/19 18:37:54 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	i;
	int	down;
	int	result;

	i = 0;
	down = 0;
	result = 0;
	while (str[i] <= 32)
	{
		i++;
	}
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			down++;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	if (down % 2 == 1)
		return (result * -1);
	return (result);
}
