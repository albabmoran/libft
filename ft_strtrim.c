/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:01:48 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/21 13:26:57 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_start(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] && s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static int	find_end(const char *s1, const char *set, int i)
{
	int	len;
	int	j;

	len = ft_strlen(s1);
	j = 0;
	while (set[j])
	{
		if (s1[len - 1] && len - 1 > i && s1[len - 1] == set[j])
		{
			len--;
			j = 0;
		}
		else
			j++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	if (!s1)
		return (NULL);
	i = find_start(s1, set);
	len = find_end(s1, set, i);
	str = malloc(len - i + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (i < len)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abchhohohoadioshohhoo";
	char	set[] = "abcho";
	char	*str;

	str = ft_strtrim(s1, set);
	printf("%s", str);
	free(str);
	return (0);
}*/
