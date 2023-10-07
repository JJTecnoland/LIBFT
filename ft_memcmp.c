/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:41:17 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 14:54:22 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//La función memcmp() se utiliza para comparar dos bloques de memoria. 
/* La función memcmp() devuelve 0 si los dos bloques de memoria son idénticos, 
   de lo contrario devuelve la diferencia entre los primeros bytes diferentes 
   tratados como unsigned char. */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}
