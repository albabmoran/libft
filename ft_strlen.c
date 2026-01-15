/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 23:41:55 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/15 15:55:22 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%lu, %lu\n", ft_strlen("hola"), strlen("hola"));
	printf("%lu, %lu\n", ft_strlen("hola que tal"), strlen("hola que tal"));
	printf("%lu, %lu\n", ft_strlen("1234"), strlen("1234"));
	printf("%lu, %lu\n", ft_strlen("   "), strlen("   "));
	printf("%lu, %lu\n", ft_strlen("la? *esto! m6y"), strlen("la? *esto! m6y"));
	return (0);
}*/
