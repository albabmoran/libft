/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 23:22:52 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/12 23:29:26 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d, %d\n", ft_isascii('c'), isascii('c'));
	printf("%d, %d\n", ft_isascii('#'), isascii('#'));
	printf("%d, %d\n", ft_isascii(131), isascii(131));
	printf("%d, %d\n", ft_isascii('*'), isascii('*'));
	printf("%d, %d\n", ft_isascii('!'), isascii('!'));
	return (0);
}*/
