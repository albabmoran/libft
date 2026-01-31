/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:05:00 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/29 18:20:50 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_c;
	unsigned const char	*src_c;

	if (!dest && !src)
		return (NULL);
	dest_c = dest;
	src_c = src;
	if (dest_c >= src_c)
	{
		while (n > 0)
		{
			dest_c[n - 1] = src_c[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	d1[] = "holalla";
	char	d2[] = "holalla";
	//char	s1[] = "xxxx";
	//char	s2[] = "xxxx";
	int		i = 10;

	printf("%s\n", d1);
	ft_memmove(d1, d1 + 2, i);
	printf("%s\n", d1);
	memmove(d2, d2 + 2, i);
	printf("%s\n", d2);
	return (0);
}*/
