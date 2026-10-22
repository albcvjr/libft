/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:17:38 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/22 20:04:54 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*join;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	//Aqui tambien vas a tener que añadir una proteccion para NULL
	//y reducir las lineas 
	i = 0;
	join = malloc(len1 + len2 + 1);
	if (join == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		join[len1 + i] = s2[i];
		i++;
	}
	join[len1 + i] = '\0';
	return (join);
}
