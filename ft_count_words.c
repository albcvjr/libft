/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:25:48 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/01 20:02:55 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	size_t	i;
	int		in_word;
	int		count;

	i = 0;
	in_word = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}
