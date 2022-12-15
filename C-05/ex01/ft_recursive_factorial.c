/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:24:16 by ylabbe            #+#    #+#             */
/*   Updated: 2021/08/24 12:18:05 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_recursive_factorial(int	nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}
