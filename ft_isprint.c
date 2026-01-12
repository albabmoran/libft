/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 23:30:35 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/12 23:40:36 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d, %d\n", ft_isprint('c'), isprint('c'));
        printf("%d, %d\n", ft_isprint(127), isprint(127));
        printf("%d, %d\n", ft_isprint(' '), isprint(' '));
        printf("%d, %d\n", ft_isprint(':'), isprint(':'));
	return (0);
}*/
