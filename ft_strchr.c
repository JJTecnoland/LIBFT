/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:39:38 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/25 11:41:36 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strchr() en C se utiliza para encontrar la primera ocurrencia de
   un carácter específico en una cadena. */
/* La función strchr() devuelve un puntero al carácter si se encuentra, de lo
contrario devuelve NULL. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
