/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:52:01 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/26 13:57:31 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen((const char *)s);
	write(fd, s, len);
}
/*
#include <fcntl.h>

int	main(void)
{
	int	fd;
	char	s[] = "hola que tal";

	fd = open("test.txt", O_WRONLY);
	if	(fd == -1)
		return (0);
	ft_putstr_fd(s, fd);
	close(fd);
	return (0);
}*/
