/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:14:10 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/20 16:00:41 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ar;
	unsigned int	total;

	total = nmemb * size;
	ar = malloc(total);
	if (!ar)
		return (NULL);
	ft_bzero(ar, total);
	return (ar);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	unsigned int	nmemb = 5;
	unsigned int	size = 4;
	unsigned char	*p;
	unsigned char	*p2;
	unsigned int	i;

	p = ft_calloc(nmemb, size);
	p2 = calloc(nmemb, size);
//	printf("%s\n", p);
//	printf("%s\n", p2);
	i = 0;
	while (i < nmemb)
	{
		printf("%d", p[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < nmemb)
	{
		printf("%d", p2[i]);
		i++;
	}
	return (0);
}*/
