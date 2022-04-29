/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:35:14 by desilva           #+#    #+#             */
/*   Updated: 2022/04/09 00:46:40 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	if (c >= MAX_CHAR)
		c = s[0];
	str = (char *) s;
	while (*str++)
		;
	while (*str-- != s[0])
		if (c == *str)
			return (str);
	return ('\0');
}
