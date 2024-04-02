/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:43:07 by sarcasti          #+#    #+#             */
/*   Updated: 2024/03/29 11:53:55 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*c_src;
	char	*c_dst;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	c_src = (char *)src;
	c_dst = (char *)dst;
	i = 0;
	if (c_dst > c_src)
		while (n-- > 0)
			c_dst[n] = c_src[n];
	else
	{
		while (i++ < n)
			c_dst[i] = c_src[i];
	}
	return (dst);
}

/*
{
	char	*src_ptr;
	char	*dst_ptr;

	src_ptr = (char *)src;
	dst_ptr = (char *)dst;
	if (src_ptr < dst_ptr)
	{
		while (n > 0)
		{
			n--;
			dst_ptr[n] = src_ptr[n];
		}
	}
	else
		ft_memcpy(dst_ptr, src_ptr, n);
	return (dst);
}
*/
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hola Mundo";
	char	buffer[20];

	// Usamos la función ft_memmove para copiar 5 caracteres desde str a buffer.
	ft_memmove(buffer, str, 9);
	// Imprimimos el resultado.
	printf("%s\n", buffer);
	return (0);
}
*/