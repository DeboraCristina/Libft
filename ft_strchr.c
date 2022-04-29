/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 22:37:08 by desilva           #+#    #+#             */
/*   Updated: 2022/04/19 22:51:11 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c >= MAX_CHAR)
		c = s[i];
	while (s[i])
	{
		if (c == s[i])
			return ((char *) s + i);
		i++;
	}
	if (!c)
		return ((char *) s + i);
	return ('\0');
}
