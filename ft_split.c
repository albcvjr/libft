/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:06:00 by acuevas           #+#    #+#             */
/*   Updated: 2026/10/02 21:51:17 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_split(const char *s, char c)
{
	return (NULL);
}

int main()
{

	char	frase[] = "viva la vida";
	char	delimitador = ' ';
	
	// char	*array_de_strings[5] = {"hola", "viva", "la", "vida", NULL};
	
	char *test[3][3] = {{"hola", "que", "tal"}, {"me", "lllamo", "paolo"}, {"me", "lllamo", "maolo"}};
	
	printf("esta es la letera d: %c\n", test[2][2][0]);

	ft_split(frase, delimitador);
}
/*
char  	es un caracter de 	1 byte
char * 	es una puta flecha 8 byte
*/


