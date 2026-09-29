/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 22:39:49 by acuevas           #+#    #+#             */
/*   Updated: 2026/09/29 04:56:13 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	size_t	d_len;

	i = 0;
	j = 0;
	s_len = 0;
	while (i < n && d[i] != '\0')
		i++;
	while (s[s_len] != '\0')
		s_len++;
	if (i == n)
		return (n + s_len);
	d_len = i;
	while (i < n - 1 && s[j] != '\0')
	{
		d[i] = s[j];
		i++;
		j++;
	}
	d[i] = '\0';
	return (d_len + s_len);
}
