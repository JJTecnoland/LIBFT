/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:26:59 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 14:44:35 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Verifica si un carácter es una letra del alfabeto. 
/* Devuelve un valor distinto de cero si el carácter es una letra del alfabeto,
 en cualquier otro caso devuelve cero. */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
