/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a <jlunar-a@student.42.es>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:54:15 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/16 18:54:22 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void
	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (alst)
	{
		if (*alst)
		{
			last = ft_lstlast(*alst);
			last->next = new;
		}
		else
			*alst = new;
	}
}