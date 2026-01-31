/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:27:26 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/31 16:54:04 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_string(int n, int count, char *str)
{
	int	i;

	str[count] = '\0';
	count--;
	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i = 1;
	}
	while (count >= i)
	{
		if (n > 9)
		{
			str[count] = (n % 10) + '0';
			n = n / 10;
		}
		else if (n < 10)
			str[count] = n + '0';
		count--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		nbr;

	nbr = n;
	count = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		count++;
	}
	if (nbr < 10)
		count++;
	str = malloc(count + 1);
	if (!str)
		return (NULL);
	return (get_string(n, count, str));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	int	n = 1111111111;

	str = ft_itoa(n);
	printf("%s", str);
	free(str);
	return (0);
}*/
