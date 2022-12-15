/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:53:16 by ylabbe            #+#    #+#             */
/*   Updated: 2021/08/25 17:32:03 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tableau;
	int	count;

	count = 0;
	if (min >= max)
		return (NULL);
	tableau = malloc(sizeof(int) * (max - min));
	while (count != max - 1)
	{
		tableau[count] = min + count;
		count++;
	}
	return (tableau);
}
