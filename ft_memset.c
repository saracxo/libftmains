/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:59:18 by sarcasti          #+#    #+#             */
/*   Updated: 2024/04/02 12:49:37 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*dst;
	unsigned int	x;

	dst = b;
	x = 0;
	while (x < len)
	{
		dst[x] = (unsigned char)c;
		++x;
	}
	return (b);
}


#include <stdio.h>

int main(void)
{
	char	src[] = "3422224";
	printf("%p\n", ft_memset(src, 4, 3));
	return (0);
}
*/
/*
void	*ft_memset(void *b, int c, unsigned int len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = ((unsigned char)c);
		i++;
	}
	return (b);
}



#include <stdio.h>

int	main(void)
{
	size_t	n;

	char str[8] = "Hola Sara";
	n = 1;
	ft_memset(str, n, 0);
	printf("%s\n", str);
	return (0);
}
*/
/*

#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n) {
    unsigned char *p = s;
    while (n--) {
        *p++ = (unsigned char)c;
    }
    return s;
}

int main() {
    char str[20];

    // Usando la función memset estándar de la biblioteca string.h
    memset(str, 'A', sizeof(str));
    printf("Antes de ft_memset: %s\n", str);

    // Usando tu implementación memset_ft
    ft_memset(str, 'e', sizeof(str));
    printf("Después de ft_memset: %s\n", str);

    return 0;
}
*/