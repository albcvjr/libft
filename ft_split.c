/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:06:00 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/01 20:11:46 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	int		count;
	char	**result;

	count = ft_count_words(s, c);
	result = malloc((count - 1) * sizeof(char *));
	
}