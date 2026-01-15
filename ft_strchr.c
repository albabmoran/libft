/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 10:34:41 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/15 15:57:57 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int		i;

	p = ((char *)s);
	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] == c)
			return (p + i);
		i++;
	}
	if (p[i] == c)
		return (p + i);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "hola? que tal";
	int		c = '\0';

	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
	return (0);
}*/
