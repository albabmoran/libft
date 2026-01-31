/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 08:44:03 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/31 17:11:44 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*node;
	void	*new_content;

	start = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		node = ft_lstnew(new_content);
		if (!node)
		{
			free(new_content);
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, node);
		lst = lst->next;
	}
	return (start);
}
/*
#include <stdio.h>
#include <string.h>

void del(void *content)
{
	free(content);
}

void	*auxdup(void *content)
{
	return ft_strdup((char *)content);
}
	
int	main(void)
{
	t_list	*list = NULL;
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*newlist;

	nodo1 = ft_lstnew(ft_strdup("hola"));
	nodo2 = ft_lstnew(ft_strdup("hello"));

	ft_lstadd_front(&list, nodo1);
	ft_lstadd_back(&list, nodo2);

	newlist = ft_lstmap(list, auxdup, del);
	
	printf("lista original = %d\n\n", ft_lstsize(list));
	printf("lista nueva = %d\n", ft_lstsize(newlist));

	return (0);
}*/
