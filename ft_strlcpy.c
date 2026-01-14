/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:57:16 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/14 18:28:30 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			len_src;
	unsigned int	i;

	len_src = 0;
	while (src[len_src])
		len_src++;
	if (size > 0)
	{
		i = 0;
		if (len_src > 0)
		{
			while (src[i] && i < size - 1)
			{
				dst[i] = src[i];
				i++;
			}
		}
		dst[i] = '\0';
	}
	return (len_src);
}
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char	dst[] = "";
	char	dst2[] = "";
	char	*src = "hola que tal";
	char	*src2 = "hola que tal";
	int		size = 0;
	int		i;
	int		j;

	i = ft_strlcpy(dst, src, size);
	printf("%s\n%d\n", dst, i);
	j = strlcpy(dst2, src2, size);
	printf("%s\n%d", dst2, j);
	return (0);
}*/
