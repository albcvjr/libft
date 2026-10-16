/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:20:47 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/16 21:09:20 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*result;
	unsigned char	uc;
	int				i;

	result = NULL;
	uc = (unsigned char)c;
	i = 0;
	while (1)
	{
		if ((unsigned char)s[i] == uc)
			result = (char *)&s[i];
		if (s[i] == '\0')
			return (result);
		i++;
	}
}
