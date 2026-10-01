/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 13:31:52 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/01 15:17:01 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*dup;

	s_len = ft_strlen(s);
	i = 0;
	if (start >= s_len)
	{
		dup = malloc(1);
		dup[0] = '\0';
		return (dup);
	}
	if (len > s_len - start)
		len = s_len - start;
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = s[start + i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
