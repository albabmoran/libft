/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:03:41 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/31 16:18:41 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*temp_next;

	if (!lst)
		return ;
	temp = *lst;
	temp_next = temp;
	while (temp != NULL)
	{
		temp_next = temp_next->next;
		del(temp->content);
		free(temp);
		temp = temp_next;
	}
	*lst = NULL;
}
/*
void	ft_del(void *content)
{
	free(content);
}

#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew(ft_strdup("hola"));
	node2 = ft_lstnew(ft_strdup("que"));
	node3 = ft_lstnew(ft_strdup("tal"));

	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);

	ft_lstclear(&node2, ft_del);
	printf("%p", (char *)node2->content);

	if (node1 == NULL)
		printf("node1 is empty");
	if (node2 == NULL)
		printf("node2 is empty");
	if (node3 == NULL)
		printf("node3 is empty");
	return (0);
}*/
