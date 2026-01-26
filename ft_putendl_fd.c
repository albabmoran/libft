/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:59:05 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/26 14:07:09 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen((const char *)s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>

int	main(void)
{
	int	fd;
	char	s[] = "hola que tal";

	fd = open("test.txt", O_WRONLY);
	if (fd == -1)
		return (0);
	ft_putendl_fd(s, fd);
	close(fd);
	return (0);
}*/
