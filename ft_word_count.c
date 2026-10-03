/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:25:48 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/03 17:41:08 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(const char *s)
{
	int	i;
	int	word;
	
	i = 0;
	word = 0;
	while (s[i] == ' ' && s[i] != '\0')
	{
		i++;
		if (s[i] != ' ')
			word += 1;
		while (s[i] != ' ' && s[i] != '\0')
			i++;
	}
	return (word);
}
#include <stdio.h>

int	main(int ac, char **av)
{
	if (av[1] == NULL)
		return (1);
		
	char	*words = "hola";
	int		w_found;
	
	w_found = ft_word_count(words);
	printf("Palabras encontradas:%d\n", w_found);
	return (0);
}
/*
int	ft_word_count(const char *s, char c)
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
*/