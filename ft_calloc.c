/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:47:12 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 14:40:04 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Reserva memoria dinámicamente y la inicia con ceros.
// Aquí podría haber sustituido el while por : memset(ptr, 0, nmemb * size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = malloc(nmemb * size);
	if (!(result))
		return (0);
	ft_bzero(result, nmemb * size);
	return (result);
}

/*
void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	unsigned char	*p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	p = ptr;
	while (nmemb > 0)
	{
		*p++ = 0;
		nmemb--;
	}
	return (ptr);
}
*/
