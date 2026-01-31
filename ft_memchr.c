/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:37:09 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/29 19:33:55 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned int		i;

	p = ((const unsigned char *)s);
	i = 0;
	while (i < n && p[i] != (unsigned char) c)
		i++;
	if (i < n && p[i] == (unsigned char) c)
		return ((void *)&p[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			s[] = "hola que tal";
	unsigned int	n = 3;
	int				c = 2;

	printf("%s\n", (char *)ft_memchr(s, c, n));
	printf("%s", (char *)memchr(s, c, n));
	return(0);
}
*/