/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 20:41:18 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/12 23:21:59 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c = 1;
	int 	i;
	int	x;

	i = ft_isdigit(c);
	x = isdigit(c);
	printf("%d\n%d", i, x);
	return (0);
}*/
