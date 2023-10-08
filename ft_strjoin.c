/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:23:12 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/08 11:38:30 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función ft_strjoin() reserva memoria con malloc y crea una nueva cadena
   de caracteres que es el resultado de la concatenación de s1 y s2.*/
/* Devuelve la nueva cadena de caracteres (resultado de la concatenación s1+s2)
   o NULL si falla la reserva de memoria. */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1, len1);
	ft_memcpy(result + len1, s2, len2);
	result[len1 + len2] = '\0';
	return (result);
}

void	free_strjoin(char *result)
{
	free(result);
}
