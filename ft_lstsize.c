/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:02:30 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/28 13:43:21 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*second;
	t_list	*third;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (0);
	second = malloc(sizeof(t_list));
	if (!second)
	{
		free(lst);
		return (0);
	}
	third = malloc(sizeof(t_list));
	if (!third)
	{
		free(lst);
		free(second);
		return (0);
	}
	lst->content = "hola";
	lst->next = second;
	second->content = "que tal";
	second->next = third;
	third->content = "gracias";
	third->next = NULL;
	printf("%d", ft_lstsize(lst));
	free(lst);
	free(second);
	free(third);
	return (0);
}*/
