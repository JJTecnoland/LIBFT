/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:35:27 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/09/29 13:16:01 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La función strdup() se utiliza para crear un duplicado de una cadena de 
caracteres en memoria dinámica.*/
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;
	int		i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	dup = malloc(len + 1);
	if (dup != NULL)
	{
		i = 0;
		while (i < len)
		{
			dup[i] = s[i];
			i++;
		}
		dup[len] = '\0';
	}
	return (dup);
}
