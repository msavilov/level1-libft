/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstarr <hstarr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:15:25 by hstarr            #+#    #+#             */
/*   Updated: 2020/11/26 21:44:18 by hstarr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	char *src_ptr;
	char *dest_ptr;
	char *last_src;
	char *last_dest;

	if (num == 0 || dest == src)
		return (dest);
	src_ptr = (char*)src;
	dest_ptr = (char*)dest;
	if (dest_ptr < src_ptr)
	{
		while (num-- > 0)
			*dest_ptr++ = *src_ptr++;
	}
	else
	{
		last_src = src_ptr + (num - 1);
		last_dest = dest_ptr + (num - 1);
		while (num--)
		{
			*last_dest-- = *last_src--;
		}
	}
	return (dest);
}
