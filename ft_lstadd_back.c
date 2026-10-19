/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 01:56:25 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/19 20:42:00 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}

/*
#include <stdio.h>
int main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list **lst;
	t_list *new;
	t_list *aux;
	
	node1 = ft_lstnew("4");
	if(node1 == NULL)
		return (-1);
	node2 = ft_lstnew("1");
	if(node2 == NULL)
	{
		free(node1);
		return (-1);
	}
	node3 = ft_lstnew("42");
	if(node3 == NULL)
	{
		free(node2);
		free(node1);
		return (-1);
	}
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	new = ft_lstnew("20");
	if(new == NULL)
	{
		free(node3);
		free(node2);
		free(node1);
		return (-1);
	}
	lst = malloc(sizeof(*lst) * 4);
	*lst = node1;
	ft_lstadd_back(lst, new);
	aux = node1;
	while (aux != NULL)
	{
		printf("%s", (char *)aux->content);
		aux = aux->next;
	}
	free(new);
	free(node3);
	free(node2);
	free(node1);
	free(lst);
	return(0);
}*/
