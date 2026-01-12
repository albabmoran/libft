/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 20:17:52 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/12 23:20:51 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	unsigned char	c = 200;
	int	i;
	int	x;

	i = ft_isalpha(c);
	x = isalpha(c);
	printf("%d\n%d", i, x);
	return (0);
}*/
