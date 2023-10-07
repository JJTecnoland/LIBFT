/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:20:03 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 15:01:59 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compara dos cadenas de caracteres hasta un máximo de n caracteres.
/* Devuelve un valor entero menor, igual o mayor que cero si la cadena s1 es
   menor, igual o mayor que la cadena s2 respectivamente. */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
// La comparación se realiza utilizando caracteres de la tabla ASCII.
// Si se alcanza el final de ambas cadenas, se considera que son iguales.
// Si se alcanza el final de s1, se considera que s1 es menor que s2.
// Si se alcanza el final de s2, se considera que s1 es mayor que s2.
// Si n es cero, se devuelve cero.
// Si n es mayor que la longitud de s1, se devuelve un valor mayor que cero.
// Si n es mayor que la longitud de s2, se devuelve un valor menor que cero.
// Si s1 o s2 son NULL, se produce un comportamiento indefinido.
// Si s1 y s2 son iguales, se devuelve cero.
// Si s1 y s2 son diferentes, se devuelve la diferencia entre el primer par de
// caracteres diferentes.
// Si s1 y s2 son diferentes, pero los primeros n caracteres son iguales, se
// devuelve la diferencia entre el primer par de caracteres diferentes.
// Si s1 y s2 son diferentes, pero s1 es más corta que s2, se devuelve la
// diferencia entre el primer par de caracteres diferentes.
// Si s1 y s2 son diferentes, pero s1 es más larga que s2, se devuelve la
// diferencia entre el primer par de caracteres diferentes.
// Si s1 y s2 son diferentes, pero los primeros n caracteres son iguales y s1
// es más corta que s2, se devuelve la diferencia entre el primer par de
// caracteres diferentes.
// Si s1 y s2 son diferentes, pero los primeros n caracteres son iguales y s1
// es más larga que s2, se devuelve la diferencia entre el primer par de
// caracteres diferentes.
// Si s1 y s2 son diferentes, pero los primeros n caracteres son iguales y s1
// es más corta que s2, se devuelve la diferencia entre el primer par de
// caracteres diferentes.
// Si s1 y s2 son diferentes, pero los primeros n caracteres son iguales y s1
// es más larga que s2, se devuelve la diferencia entre el primer par de
// caracteres diferentes.
// Si s1 y s2 son diferentes, pero los primeros n caracteres son iguales y s1
// es más corta que s2, se devuelve la diferencia entre el primer par de
// caracteres diferentes.
// Si s1 y s2 son diferentes, pero los primeros n caracteres son iguales y s1
// es más larga que s2, se devuelve la diferencia entre el primer par de
// caracteres diferentes.
// Si s1 y s2 son diferentes, pero los primeros n caracteres son iguales y s1
// es más corta que s2, se devuelve la diferencia entre el primer par de
// caracteres diferentes.
// Si s1 y s2 son diferentes, pero los primeros n caracteres son iguales y s1
// es más larga que s2, se devuelve la diferencia entre el primer par de
// caracteres diferentes.
