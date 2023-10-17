/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a <jlunar-a@student.42.es>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:37:58 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/16 18:38:11 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

t_list
	*ft_lstnew(void *content)
{
	t_list	*elt;

	if (!(elt = (t_list*)malloc(sizeof(*elt))))
		return (NULL);
	elt->content = content;
	elt->next = NULL;
	return (elt);
}