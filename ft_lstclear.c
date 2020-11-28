/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstarr <hstarr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:37:28 by hstarr            #+#    #+#             */
/*   Updated: 2020/11/26 21:09:01 by hstarr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*p;

	if (lst && *lst)
	{
		while (*lst)
		{
			p = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = NULL;
			*lst = p;
		}
	}
	*lst = NULL;
}
