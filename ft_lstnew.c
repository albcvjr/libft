/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:50:16 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/07 21:11:46 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nn;

	nn = (t_list *)malloc(sizeof(t_list));
	if (nn == NULL)
		return (NULL);
	nn -> content = content;
	nn -> next = NULL;
	return (nn);
}
