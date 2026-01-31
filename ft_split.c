/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 10:49:21 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/31 17:42:04 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	count_char(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	*free_all(char **array, int i)
{
	while (i >= 0)
	{
		if (array[i])
			free(array[i]);
		i--;
	}
	free(array);
	return (NULL);
}

static char	**create_array(char const *s, char c, char **array)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < count_words(s, c))
	{
		j = 0;
		while (s[k] == c)
			k++;
		array[i] = malloc(count_char(&s[k], c) + 1);
		if (!array[i])
			return (free_all(array, i));
		while (s[k] && s[k] != c)
		{
			array[i][j] = s[k];
			k++;
			j++;
		}
		array[i][j] = '\0';
		i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = create_array(s, c, array);
	if (!array)
		return (NULL);
	array[count_words(s, c)] = NULL;
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**s;
	char	str[] = "xxxxxxxxhello!";
	char	c = 'x';
	int		i;

	s = ft_split(str, c);
	i = 0;
	while (s[i])
	{
		printf("%s\n", s[i]);
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}*/
