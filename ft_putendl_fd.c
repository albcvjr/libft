/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:05:44 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/07 11:20:39 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
int	i;

i = 0;
if (fd < 0 || s == NULL)
return ;
while (s[i] != '\0')
{
	ft_putchar_fd(s[i], fd);
	i++;
}
write (fd, "\n", 1);
*/