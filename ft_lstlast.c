/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:43:49 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/28 15:13:36 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*start;
	t_list	*middle;
	t_list	*last;
	t_list	*result;

	start = ft_lstnew("hola");
	middle = ft_lstnew("que");
	last = ft_lstnew("tal");
	ft_lstadd_front(&last, middle);
	ft_lstadd_front(&middle, start);
	result = ft_lstlast(start);
	printf("%s", (char *)result->content);
	free(start);
	free(middle);
	free(last);
	return (0);
}*/
