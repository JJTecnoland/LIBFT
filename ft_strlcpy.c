/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:51:24 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 14:58:03 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strlcpy() copia la cadena src en la cadena dst. 
   El parámetro size es el tamaño del búfer de destino. */
/* La función strlcpy() devuelve el tamaño total de la cadena que se intentó
   crear. */

#include "libft.h"

size_t	ft_strlcpy(char *targ, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
	{
		return (src_len);
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		targ[i] = src[i];
		i++;
	}
	targ[i] = '\0';
	return (src_len);
}
