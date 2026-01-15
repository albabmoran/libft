/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:14:10 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/15 16:00:43 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void			*ar;
	unsigned int	total;

	total = nmemb * size;
	ar = malloc(total);
	if (!ar)
		return (NULL);
	ft_bzero(ar, total);
	return (ar);
}
