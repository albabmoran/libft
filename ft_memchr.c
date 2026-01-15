/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:37:09 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/15 15:59:19 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned int	i;

	p = ((unsigned char *)s);
	i = 0;
	while (i < n && *(p + i) != '\0')
	{
		if (*(p + i) == c)
			return ((void *)p + i);
		i++;
	}
	if (i < n && c == '\0')
		return ((void *)p + i);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			s[] = "hola que tal";
	unsigned int	n = 13;
	int				c = '\0';

	printf("%s\n", (char *)ft_memchr(s, c, n));
	printf("%s", (char *)memchr(s, c, n));
	return(0);
}*/
