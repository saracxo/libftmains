/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:31:47 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/15 11:49:06 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (*s)
		write(fd, &*s, ft_strlen(s));
}

/*
int main()
{
	char *s = "hola";
	int fd = 1;
	ft_putstr_fd(s, fd);
	return (0);
}
*/