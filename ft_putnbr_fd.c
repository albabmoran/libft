/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:07:30 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/26 14:29:10 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		if (n < 10)
			ft_putchar_fd((n + '0'), fd);
	}
}
/*
#include <fcntl.h>

int	main(void)
{
	int	fd;
	int	n = 1234;

	fd = open("test.txt", O_WRONLY);
	if (fd == -1)
		return (0);
	ft_putnbr_fd(n, fd);
	return (0);
}*/
