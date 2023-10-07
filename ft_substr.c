/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:15:52 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 13:44:06 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Reserva memoria (con malloc) y devuelve la cadena de caracteres que
// está contenida en el string dado como argumento. Esta nueva cadena de
// caracteres comienza en el índice ’start’ y tiene como tamaño máximo ’len’.

#include "libft.h"
#define MAX_LEN 100

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	buff_size;
	size_t	s_len;

	if (len > MAX_LEN)
		len = MAX_LEN;
	s_len = ft_strlen(s);
	if (start > s_len)
		start = s_len;
	if (start > s_len)
		return ("");
	if (len > s_len - start)
		len = s_len - start;
	buff_size = len + 1;
	result = malloc(buff_size);
	if (!result)
		return (NULL);
	if (len > buff_size)
		len = buff_size;
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}
