/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a <jlunar-a@student.42.es>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:46:08 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/16 18:47:52 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void
	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst)
	{
		if (*alst)
			new->next = *alst;
		*alst = new;
	}
}