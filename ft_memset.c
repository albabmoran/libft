/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:12:40 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/15 15:55:44 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buf;
	unsigned int	i;

	buf = b;
	i = 0;
	while (i < len)
	{
		buf[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buf[] = "hola que tal";
	char	bu[] = "hola que tal";

	ft_memset(buf, '0', 8);
	memset(bu, '0', 8);
	printf("%s\n%s", buf, bu);
	return (0);
}*/
