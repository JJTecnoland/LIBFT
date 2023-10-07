/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:53:04 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 14:48:09 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Verifica si un carácter es ASCII. (entre 0 y 127 ambos incluidos)
/* Devuelve un valor distinto de cero si el carácter es un carácter ASCII, es 
decir, si su valor está en el rango de 0 a 127. Si el carácter no es ASCII, la 
función devuelve cero. */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
