/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:36:15 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 14:50:21 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Verifica si un caracter es numérico decimal. (entre 0 y 9 ambos incluidos)
/* Devuelve un valor distinto de cero si el carácter es un dígito decimal, es 
decir, si su valor está en el rango de 0 a 9. Si el carácter no es un dígito 
decimal, la función devuelve cero. */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
