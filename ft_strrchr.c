/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:20:47 by acuevas           #+#    #+#             */
/*   Updated: 2026/09/29 17:49:33 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*resultado;
	int		i;

	resultado = NULL;
	i = 0;
	while (1)
	{
		if (s[i] == c)
			resultado = (char *)&s[i];
		if (s[i] == '\0')
			return (resultado);
		i++;
	}
}
