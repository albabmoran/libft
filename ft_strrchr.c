/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:00:16 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/29 18:34:24 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;
	char		char_c;

	char_c = (char) c;
	temp = s;
	while (*s != '\0')
		s++;
	if (char_c == '\0')
		return ((char *)s);
	while (s != temp)
	{
		if (*s == char_c)
			return ((char *)s);
		s--;
	}
	if (*s == char_c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "hola que tal";
	int		c = 'q';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}*/
