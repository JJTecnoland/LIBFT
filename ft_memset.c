/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:34:19 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 14:55:57 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función memset() se utiliza para llenar un bloque de memoria con un valor 
constante byte a byte. */
/* La función memset() devuelve un puntero al bloque de memoria de destino. */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}
