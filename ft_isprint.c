/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:31:31 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 14:52:01 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Verifica si un carácter es imprimible. (entre 32 y 126 ambos incluidos)
/* Devuelve un valor distinto de cero si el carácter es un carácter imprimible,
es decir, si su valor está en el rango de 32 a 126. Si el carácter no es 
imprimible, la función devuelve cero. */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
