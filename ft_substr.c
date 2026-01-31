/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:08:02 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/29 19:19:41 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*str;
	unsigned int	i;

	if (start >= ft_strlen((char *)s))
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return ((char *)str);
	}
	if (len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return ((char *)str);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned char	*s;
	unsigned int	start;
	unsigned int	len;
}*/
