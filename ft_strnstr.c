/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:49:17 by desilva           #+#    #+#             */
/*   Updated: 2022/04/19 23:49:19 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t s)
{
	char	*big;
	char	*little;
	int		counters[3];

	big = (char *) b;
	little = (char *) l;
	counters[0] = 0;
	counters[1] = 0;
	counters[2] = -1;
	while (big[counters[0]] && counters[0] <= (int) s)
	{
		if (!little[counters[1]])
			return (big + counters[2]);
		if (counters[2] == -1 && big[counters[0]] == little[0])
			counters[2] = counters[0];
		if (big[counters[0]] != little[counters[1]])
		{
			counters[1] = 0;
			counters[2] = 0;
		}
		counters[0]++;
		if (counters[2] != -1)
			counters[1]++;
	}
	return ('\0');
}
