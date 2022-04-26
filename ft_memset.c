/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:16:05 by desilva           #+#    #+#             */
/*   Updated: 2022/04/18 07:19:05 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	cont;
	char	*str;

	cont = 0;
	str = (char *) s;
	while (*str && cont++ < n)
		*str++ = c;
	return (s);
}
