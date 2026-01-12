/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 21:08:40 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/12 23:20:10 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c = 3;
	int	i;
	int	x;

	i = ft_isalnum(c);
	x = isalnum(c);
	printf("%d\n%d", i, x);
	return (0);
}*/
