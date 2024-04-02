/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:50:34 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/15 11:17:46 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*string;
	size_t	len;
	long	num;

	num = n;
	len = ft_intlen(num);
	string = malloc(len + 1);
	if (!string)
		return (NULL);
	string[len] = '\0';
	if (num < 0)
	{
		string[0] = '-';
		num = -num;
	}
	if (num == 0)
		string[0] = '0';
	while (num)
	{
		string[--len] = num % 10 + '0';
		num /= 10;
	}
	return (string);
}

/*
int	main(void)
{
	int num;
	char *string;

	num = 0;
	string = ft_itoa(num);
	if (string != NULL)
	{
		printf("Cadena: %s\n", string);
	}
	else
	{
		printf("Error \n");
	}
	return (0);
}
*/