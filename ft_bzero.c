/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:57:31 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/15 15:56:06 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	unsigned int	i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
#include <strings.h>
#include <stdio.h>

int	main(void)
{
	char	buf[] = "hola que tal";
	char	bu[] = "hola que tal";
	int	i = 0;
	int	j = 8;

	printf("%s\n", buf);
	ft_bzero(buf, j);
	while (i < j)
	{
		printf("%d", buf[i]);
		i++;
	}
	bzero(bu, j);
	i = 0;
	while (i < j)
	{
		printf("%d", bu[i]);
		i++;
	}
	return (0);
}*/
