/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:27:26 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/21 14:01:44 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		nbr;

	nbr = n;
	count = 0;
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
	str[count] = '\0';
	count--;
	while (count >= 0)
	{
		if (n < 0)
		{
			str[0] = '-';
			n = -n;
		}
		if (n > 9)
		{
			str[count] = n % 10;
			n = n / 10;
		}
		if (n < 10)
			str[count] = n;
		count--;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*str;
	int	n = 1234;

	str = ft_itoa(n);
	printf("%s", str);
	free(str);
	return (0);
}
