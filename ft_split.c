/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:06:00 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/07 19:54:25 by acuevas          ###   ########.fr       */
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

static char	**fill_split(char **result, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
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

static size_t	ft_word_count(const char *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			word++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (word);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	**result;

	if (s == NULL)
		return (NULL);
	words = ft_word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	return (fill_split(result, s, c));
}
