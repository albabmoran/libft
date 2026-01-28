/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:25:32 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/28 14:50:08 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list *new)
{
	new->next = (*lst);
	lst = &new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*first_node;
	t_list	*new;
	t_list	*temp;
	char	s[] = "hola";
	char	p[] = "que tal";

	first_node = malloc(sizeof(t_list));
	if (!first_node)
		return (0);
	new = malloc(sizeof(t_list));
	if (!new)
	{
		free(first_node);
		return (0);
	}
	first_node->content = s;
	first_node->next = NULL;
	new->content = p;
	new->next = NULL;
	ft_lstadd_front(&first_node, new);
	temp = new;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	free(first_node);
	free(new);
	return (0);
}*/
