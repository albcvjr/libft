/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 13:31:52 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/03 19:59:35 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*cut;

	s_len = ft_strlen(s);
	i = 0;
	if (start >= s_len)
	{
		cut = malloc(1);
		cut[0] = '\0';
		return (cut);
	}
	if (len > s_len - start)
		len = s_len - start;
	cut = malloc(len + 1);
	if (cut == NULL)
		return (NULL);
	while (i < len)
	{
		cut[i] = s[start + i];
		i++;
	}
	cut[i] = '\0';
	return (cut);
}
