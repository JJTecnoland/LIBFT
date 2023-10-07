/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:44:06 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/09/30 18:31:42 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La función strnstr() en C se utiliza para buscar la primera aparición de una 
subcadena en otra cadena, hasta un máximo de n caracteres.
*/
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
