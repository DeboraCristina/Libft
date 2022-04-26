/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 05:06:42 by desilva           #+#    #+#             */
/*   Updated: 2022/04/07 20:59:59 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t limit)
{
	size_t	count;

	count = 0;
	while ((s1[count] || s2[count]) && count < limit)
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		++count;
	}
	return (0);
}
