/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:20:03 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/09/29 13:28:47 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La función strncmp() en C se utiliza para comparar dos cadenas de caracteres 
hasta un máximo de n caracteres.

strncmp(cad1, cad2, 3);
*/
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
