/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:07:19 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 14:58:54 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Obtiene la longitud de una cadena de caracteres.*/
/* La función strlen() devuelve el número de caracteres que contiene la cadena
   de caracteres str, sin incluir el carácter nulo de terminación. */

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
