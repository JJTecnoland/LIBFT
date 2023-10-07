/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:44:25 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 15:07:45 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Busca la última aparición de un caracter específico dentro de una cadena de 
  caracteres. */
/* Devuelve un puntero a la última aparición del caracter en la cadena, o NULL
   si el caracter no se encuentra.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	size_t			i ;
	char			*ptr;

	uc = (unsigned char)c;
	i = 0;
	ptr = (char *)s;
	while (ptr[i])
		i++;
	while (i > 0)
	{
		if (ptr[i] == uc)
			return (&ptr[i]);
		i--;
	}
	if (ptr[i] == uc)
		return (&ptr[i]);
	return (NULL);
}
/*Si el caracter es '\0', devuelve un puntero al carácter nulo de terminación
   de la cadena.
   Si el caracter no se encuentra en la cadena, devuelve NULL.
   Si la cadena es una cadena vacía, devuelve un puntero a la cadena.
   Si la cadena es NULL, se produce un comportamiento indefinido.
   Si el caracter es '\0', devuelve un puntero al carácter nulo de terminación
   de la cadena.
   Si el caracter no se encuentra en la cadena, devuelve NULL.
   Si la cadena es una cadena vacía, devuelve un puntero a la cadena.
   Si la cadena es NULL, se produce un comportamiento indefinido.
   Si el caracter es '\0', devuelve un puntero al carácter nulo de terminación
   de la cadena.
   Si el caracter no se encuentra en la cadena, devuelve NULL.
   Si la cadena es una cadena vacía, devuelve un puntero a la cadena.
   Si la cadena es NULL, se produce un comportamiento indefinido.
   Si el caracter es '\0', devuelve un puntero al carácter nulo de terminación
   de la cadena.
   Si el caracter no se encuentra en la cadena, devuelve NULL.
   Si la cadena es una cadena vacía, devuelve un puntero a la cadena.
   Si la cadena es NULL, se produce un comportamiento indefinido.
   Si el caracter es '\0', devuelve un puntero al carácter nulo de terminación
   de la cadena.
   Si el caracter no se encuentra en la cadena, devuelve NULL.
   Si la cadena es una cadena vacía, devuelve un puntero a la cadena.
   Si la cadena es NULL, se produce un comportamiento indefinido.
   Si el caracter es '\0', devuelve un puntero al carácter nulo de terminación
   de la cadena.
   Si el caracter no se encuentra en la cadena, devuelve NULL.
   Si la cadena es una cadena vacía, devuelve un puntero a la cadena.
   Si la cadena es NULL, se produce un comportamiento indefinido.
   Si el caracter es '\0', devuelve un puntero al carácter nulo de terminación
   de la cadena.
   Si el caracter no se encuentra en la cadena, devuelve NULL.
   Si la cadena es una cadena vacía, devuelve un puntero a la cadena.
   Si la cadena es NULL, se produce un comportamiento indefinido.
   Si el caracter es '\0', devuelve un puntero al carácter nulo de terminación
   de la cadena.
   Si el caracter no se encuentra en la cadena, devuelve NULL.
   Si la cadena es una cadena vacía, devuelve un puntero a la cadena.
   Si la cadena es NULL, se produce un comportamiento indefinido. */
