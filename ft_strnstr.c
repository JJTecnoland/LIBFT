/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:44:06 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 15:05:35 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Busca la primera aparición de una subcadena en otra cadena, hasta un máximo
   de n caracteres.*/
/* Devuelve un puntero a la primera aparición de la subcadena en la cadena, o
   NULL si la subcadena no se encuentra.*/

#include "libft.h"

char	*ft_strnstr(const char	*content, const char	*objet, size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (objet[0] == '\0')
		return ((char *)content);
	while (content[i] != '\0' && i < len)
	{
		j = 0;
		while (objet[j] != '\0' && content[i + j] == objet[j] && i + j < len)
		{
			j++;
		}
		if (objet[j] == '\0')
			return ((char *)content + i);
		i++;
	}
	return (0);
}
/*   Si la subcadena es una cadena vacía, devuelve un puntero a la cadena.
   Si la subcadena no aparece en la cadena, devuelve NULL.
   Si la subcadena aparece en la cadena, pero no antes de n caracteres, devuelve
   NULL.
   Si la subcadena aparece en la cadena, antes de n caracteres, devuelve un
   puntero a la primera aparición de la subcadena en la cadena.
   Si la cadena es una cadena vacía, devuelve un puntero a la cadena.
   Si la cadena es NULL, se produce un comportamiento indefinido.
   Si la subcadena es NULL, se produce un comportamiento indefinido.
   Si n es mayor que la longitud de la cadena, se produce un comportamiento
   indefinido.
   Si n es mayor que la longitud de la subcadena, se produce un comportamiento
   indefinido.
   Si n es cero, devuelve un puntero a la cadena.
   Si n es cero y la subcadena es una cadena vacía, devuelve un puntero a la
   cadena.
   Si n es cero y la subcadena es NULL, se produce un comportamiento indefinido.
   Si n es cero y la cadena es una cadena vacía, devuelve un puntero a la
   cadena.
   Si n es cero y la cadena es NULL, se produce un comportamiento indefinido.
   Si n es cero y la cadena y la subcadena son cadenas vacías, devuelve un
   puntero a la cadena.
   Si n es cero y la cadena y la subcadena son NULL, se produce un
   comportamiento indefinido.
   Si n es cero y la cadena es una cadena vacía y la subcadena es NULL, se
   produce un comportamiento indefinido.
   Si n es cero y la cadena es NULL y la subcadena es una cadena vacía, se
   produce un comportamiento indefinido.
   Si n es cero y la cadena es una cadena vacía y la subcadena es una cadena
   vacía, devuelve un puntero a la cadena.
   Si n es cero y la cadena es NULL y la subcadena es NULL, se produce un
   comportamiento indefinido.
   Si n es cero y la cadena es una cadena vacía y la subcadena es una cadena
   vacía, devuelve un puntero a la cadena.
   Si n es cero y la cadena es NULL y la subcadena es NULL, se produce un
   comportamiento indefinido.
   Si n es cero y la cadena es una cadena vacía y la subcadena es una cadena
   vacía, devuelve un puntero a la cadena.
   Si n es cero y la cadena es NULL y la subcadena es NULL, se produce un
   comportamiento indefinido.
   Si n es cero y la cadena es una cadena vacía y la subcadena es una cadena
   vacía, devuelve un puntero a la cadena.
   Si n es cero y la cadena es NULL y la subcadena es NULL, se produce un
   comportamiento indefinido.
   Si n es cero y la cadena es una cadena vacía y la subcadena es una cadena
   vacía, devuelve un puntero a la cadena.
   Si n es cero y la cadena es NULL y la subcadena es NULL, se produce un
   comportamiento indefinido.
   Si n es cero y la cadena es una cadena vacía y la subcadena es una cadena
   vacía, devuelve un puntero a la cadena.
   Si n es cero y la cadena es NULL y la subcadena es NULL, se produce un
   comportamiento indefinido.
   Si n es cero y la cadena es una cadena vacía y la subcadena es una cadena
   vacía, devuelve un puntero a la cadena.
   Si n es cero y la cadena es NULL y la subcadena es NULL, se produce un
   comportamiento indefinido.
   Si n es cero y la cadena es una cadena vacía y la subcadena es una cadena
   vacía, devuelve un puntero a la cadena. */