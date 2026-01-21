/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:24:43 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/21 16:38:47 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>

int	main(void)
{
	int	fd;
	char	c = 'a';

	fd = open("test.txt", O_WRONLY);
	if (fd == -1)
		return (0);
	ft_putchar_fd(c, fd);
	close(fd);
	return (0);
}*/
