/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:25:28 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/20 12:05:14 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0)
		return (0);
	i = 0;
	c1 = 1;
	c2 = 1;
	while (i < n && c1 && c2 && c1 == c2)
	{
		c1 = str1[i];
		c2 = str2[i];
		i++;
	}
	return (c1 - c2);
}
/*
#include <stdio.h>

int	main(void)
{
	int	result;

	char	s1[] = "culo g";
	char	s2[] = "culo c";
	result = ft_strncmp(s1, s2, 6);
	printf("s1: %s, s2: %s, diferencia: %d\n", s1, s2, result);
	return (0);
}
*/