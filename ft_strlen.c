/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:07:19 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/09/30 18:29:08 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strlen() es una función de la biblioteca estándar de C que se utiliza para 
obtener la longitud de una cadena de caracteres.

size_t strlen(const char *s);
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
