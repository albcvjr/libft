/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 21:41:17 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/14 20:04:43 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = -1;
	if (little[0] == '\0')
		return ((char *)big);
	while (++i < len)
	{
		if (big[i] == '\0')
			break ;
		if (big[i] == little[0] && big[i] != '\0')
		{
			j = 0;
			k = i;
			while (k < len && big[k] == little[j] && little[j] != '\0')
			{
				k++;
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
	}
	return (NULL);
}
