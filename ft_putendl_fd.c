/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:43:32 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/01 20:45:00 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write (fd, &*s, ft_strlen(s));
		write (fd, "\n", 1);
	}
}

/*
int main()
{
	char *s = "hola";
	int fd = 1;
	ft_putendl_fd(s, fd);
	return (0);
}
*/