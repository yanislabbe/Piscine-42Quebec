/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabbe <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:26:52 by ylabbe            #+#    #+#             */
/*   Updated: 2021/08/17 16:07:07 by ylabbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	value;

	value = 0;
	while (src[value])
	{
		dest[value] = src[value];
		value++;
	}
	dest[value] = src[value];
	return (dest);
}
