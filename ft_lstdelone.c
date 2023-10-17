/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a <jlunar-a@student.42.es>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:55:37 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/16 18:55:42 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void
	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}