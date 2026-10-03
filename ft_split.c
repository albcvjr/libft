/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:06:00 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/03 21:35:41 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_all(char **result, size_t j)
{
	size_t	k;

	k = 0;
	while (k < j)
	{
		free(result[k]);
		k++;
	}
	free(result);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	j;
	size_t	start;
	char	**result;

	if (s == NULL)
		return (NULL);
	words = ft_word_count(s, c);
	i = 0;
	j = 0;
	start = 0;
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			result[j] = ft_substr(s, start, i - start);
			if (result[j] == NULL)
				return (ft_free_all(result, j));
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}
