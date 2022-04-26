/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:37:49 by desilva           #+#    #+#             */
/*   Updated: 2022/04/19 23:14:38 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (!dst || !src || !size)
		return (0);
	while (src[index] && index < size - 1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = 0;
	while (src[index])
		index++;
	return (index);
}
