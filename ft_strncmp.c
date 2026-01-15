/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:13:26 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/15 15:58:54 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (s1[i - 1] - s2[i - 1]);
	else
		return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "abcdef";
	char	s2[] = "abdef";
	unsigned int	i = 0;

	printf("%d\n", ft_strncmp(s1, s2, i));
	printf("%d", strncmp(s1, s2, i));
	return (0);
}*/
