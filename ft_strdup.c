/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:01:23 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/15 16:00:54 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	dup = malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = ((char *)s)[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "hola23 qu*e ta?l";

	printf("%s\n", ft_strdup(s));
	printf("%s", strdup(s));
	return (0);
}*/
