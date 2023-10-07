/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:06:34 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 15:10:42 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Convierte una letra minúscula a mayúscula. */
/* La función toupper() devuelve el valor de c como una letra mayúscula. */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
