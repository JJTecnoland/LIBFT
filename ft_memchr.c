/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:44:06 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/09/27 12:26:59 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//La función memchr() en C se utiliza para buscar la primera ocurrencia 
//de un byte específico en un buffer de memoria.

#include "libft.h"

void	*ft_memchr(const void *s, char c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *) p);
		p++;
	}
	return (NULL);
}
