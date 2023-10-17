/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:13:42 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/16 10:14:20 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	len = ft_digit_count(n);
	sign = 1;
	if (n < 0)
		sign = -1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = (n % 10) * sign + '0';
		n /= 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
