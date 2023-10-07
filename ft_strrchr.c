/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:44:25 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/06 14:12:55 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La función strrchr() en C se utiliza para buscar la última aparición de un 
caracter específico dentro de una cadena de caracteres.
*/
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
