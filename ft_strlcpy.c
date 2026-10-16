/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:09:23 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/16 20:21:01 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (ft_strlen(s));
	while (i < n - 1 && s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (ft_strlen(s));
}
/*
int	main(void)
{
	char dest[10]; memset(dest, 'A', 10);
	
	printf("%zu", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 5));
	return (0);
}*/