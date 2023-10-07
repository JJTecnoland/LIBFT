/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:38:51 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 14:42:07 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// verifica si todos los caracteres en una cadena son alfanuméricos.
/* La función devuelve "True" si la cadena contiene solo letras y números, y 
"False" si contiene cualquier otro carácter, como espacios, signos de 
puntuación o símbolos. */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
