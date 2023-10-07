/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:49:58 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 15:10:24 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Convierte una letra mayúscula a minúscula. */
/* La función tolower() devuelve el valor de c como una letra minúscula. */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
