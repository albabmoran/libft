/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:41:19 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/26 14:31:19 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_upper(unsigned int n, char	*p)
{
	(void)n;
	*p = *p - 32;
}

#include <stdio.h>

int	main(void)
{
	char	s[] = "abcdef";

	printf("%s\n", s);
	ft_striteri(s, ft_upper);
	printf("%s", s);
	return (0);
}*/
