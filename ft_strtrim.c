/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:52:25 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/01 18:48:06 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	end;
	size_t	k;
	char	*dup;

	i = 0;
	while (s1[i] != '\0' && ft_isset(s1[i], set))
		i++;
	end = ft_strlen(s1);
	while (end > i && ft_isset(s1[end - 1], set))
		end--;
	dup = malloc(end - i + 1);
	if (dup == NULL)
		return (NULL);
	k = 0;
	while (k < end - i)
	{
		dup[k] = s1[i + k];
		k++;
	}
	dup[k] = '\0';
	return (dup);
}
