/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:39:38 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 14:56:39 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strchr() en C se utiliza para encontrar la primera ocurrencia de
   un carácter específico en una cadena. */
/* La función strchr() devuelve un puntero al carácter si se encuentra, de lo
contrario devuelve NULL. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	size_t			i ;

	uc = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)s + i);
		i++;
	}
	if (!uc && s[i] == '\0')
		return ((char *)s + i);
	return (NULL);
}
