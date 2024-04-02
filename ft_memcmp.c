/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:58:15 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/14 10:59:48 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, unsigned long num)
{
	unsigned long	i;

	i = 0;
	while (i < num)
	{
		if (((unsigned char *)ptr1)[i] != ((unsigned char *)ptr2)[i])
			return (((unsigned char *)ptr1)[i] - ((unsigned char *)ptr2)[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char			str1[];
	char			str2[];
	unsigned long	n;

	str1[] = "hola";
	str2[] = "holb";
	n = 4;
	ft_memcmp(str1, str2, n);
	printf("%d\n", ft_memcmp(str1, str2, n));
	return (0);
}
*/