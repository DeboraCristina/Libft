/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 04:01:52 by desilva           #+#    #+#             */
/*   Updated: 2022/04/23 04:01:54 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		len;
	int		start;
	int		c;

	c = 0;
	start = 0;
	len = ft_strlen((char *) s1);
	while (strchr(set, s1[start]))
		start++;
	while (strchr(set, s1[len]))
		len--;
	if (len - start <= 0)
		trim = (char *) malloc(1);
	else
		trim = (char *) malloc(len - start + 1);
	if (!trim)
		return (0);
	while (start <= len)
		trim[c++] = s1[start++];
	trim[c] = 0;
	return (trim);
}
