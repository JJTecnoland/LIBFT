/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:40:44 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/09/25 12:12:25 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//bzero() lo usamos para poner a 0 todos los bytes de un array.
void	ft_bzero( char *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = '\0';
		i++;
	}
}
