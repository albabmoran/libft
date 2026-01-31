/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:34:16 by albben-a          #+#    #+#             */
/*   Updated: 2026/01/31 16:47:58 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
/*
void	ft_upper(void *content)
{
	int				i;
	unsigned char	*p;

	p = content;
	i = 0;
	while (p[i])
	{
		p[i] = p[i] - 32;
		i++;
	}
}
	
#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	char str1[] = "hola";
	char str2[] = "hello";

	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);

	ft_lstadd_back(&node1, node2);
	printf("%s\n", (char *)node1->content);
	printf("%s\n", (char *)node2->content);

	ft_lstiter(node1, ft_upper);
	printf("%s\n", (char *)node1->content);
	printf("%s\n", (char *)node2->content);
	return (0);
}*/
