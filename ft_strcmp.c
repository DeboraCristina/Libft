/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:10:55 by desilva           #+#    #+#             */
/*   Updated: 2022/04/05 22:10:57 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while (s1[cont] == s2[cont] && (s1[cont] || s2[cont]))
		cont++;
	return (s1[cont] - s2[cont]);
}
