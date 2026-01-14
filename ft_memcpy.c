/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 20:25:37 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/14 19:11:23 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned int	i;

	if (!dst && !src)
		return (NULL);
	p = dst;
	i = 0;
	while (i < n)
	{
		p[i] = ((unsigned const char *)src)[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[] = "xxxxxxxxxx";
	char	dst2[] = "xxxxxxxxxx";
	char	src[] = "hola";
	char	src2[] = "hola";
	int	i = 3;

	printf("%s\n", dst);
	ft_memcpy(dst, src, i);
	printf("%s\n", dst);
	memcpy(dst2, src2, i);
	printf("%s\n", dst2);
	return (0);
}*/
