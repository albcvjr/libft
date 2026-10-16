/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:17:33 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/16 19:07:36 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	size_t			i;

	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	if (src > dest)
	{
		i = 0;
		while (i < n)
		{
			new_dest[i] = new_src[i];
			i++;
		}
	}
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			new_dest[i] = new_src[i];
		}
	}
	return (dest);
}
// printf("direccion de src  %lu\n", src);
// printf("direccion de dest %lu\n", dest);

// if (src > dest)
// {
// 	printf("Src es mayor que dest\n");
// }
// else
// {
// 	printf("Src es menor que dest\n");	
// }

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char frase[] = "viva la vida";
				// "   a la vida0";

	char frase2[] = "           ";

	char *resultado =  (char *)ft_memmove(frase2, frase, 2);

 	
	printf("Se ha copiado en dest: %s\n", resultado);
	return (0);
}*/
