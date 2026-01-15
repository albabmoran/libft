/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:28:22 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/15 15:57:24 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len_dst;
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_dst = 0;
	len_src = 0;
	while (dst[len_dst] != '\0' && len_dst < size)
		len_dst++;
	while (src[len_src] != '\0')
		len_src++;
	if (size == len_dst)
		return (len_src + size);
	while (size - len_dst - i - 1 > 0 && src[i])
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char			dst[] = "hola";
	char			dst2[] = "hola";
	char			src[] = ", que tal";
	char			src2[] = ", que tal";
	unsigned int	i = 4;
	unsigned int	x;
	unsigned int	y;

	printf("%s\n", dst);
	x = ft_strlcat(dst, src, i);
	printf("%s\n%d\n", dst, x);
	y = strlcat(dst2, src2, i);
	printf("%s\n%d", dst2, y);
	return (0);
}*/
