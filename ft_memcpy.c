/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 21:00:11 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/19 12:57:32 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
if (dest == NULL && src == NULL)
	return (NULL);
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%p\n", memcpy(NULL, "hola", 3));
	printf("%p\n", ft_memcpy(NULL, "hola", 3));
	return (0);
}*/