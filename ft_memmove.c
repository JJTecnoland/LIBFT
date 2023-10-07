/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:02:20 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/06 14:29:09 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Se utiliza para copiar un bloque de memoria de un lugar a otro, incluso si 
 los bloques se superponen.*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	dest2 = (char *)dest;
	src2 = (char *)src;
	i = 0;
	if (src2 == NULL && dest2 == NULL)
		return (NULL);
	if (dest2 > src2)
	{
		while (n-- > 0)
			dest2[n] = src2[n];
	}
	else
	{
		while (n-- > 0)
			*dest2++ = *src2++;
	}
	return (dest);
}
