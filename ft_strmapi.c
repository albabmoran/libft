/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:12:25 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/26 14:29:47 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;
	int		len;

	len = ft_strlen(s);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
char	ft_upper(unsigned int n, char c)
{
	(void)n;
	return (c - 32);
}

#include <stdio.h>

int		main(void)
{
	char string[] = "abcdef";
	char	*s;
	
	s = ft_strmapi(string, ft_upper);
	printf("%s\n", string);
	printf("%s", s);
	return (0);
}*/
