/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:25:48 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/03 21:00:59 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(const char *s, char c)
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
}/*
int	main(int ac, char **av)
{
	if (av[1] == NULL)
		return (1);
	if (ac < 1)
		return (1);
		
	char	*words;
	size_t	w_found;
	
	words = av[1];
	w_found = ft_word_count(words, ' ');
	printf("Found: %d\n", w_found);
	return (0);
}*/
