/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:51:24 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/03 12:29:32 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlcpy(char *targ, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		targ[i] = src[i];
		i++;
	}
	targ[i] = '\0';
	return (ft_strlen(src));
}*/
size_t	ft_strlcpy(char *targ, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
	{
		return (src_len);
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		targ[i] = src[i];
		i++;
	}
	targ[i] = '\0';
	return (src_len);
}
