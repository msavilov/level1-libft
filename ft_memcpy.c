/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstarr <hstarr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:11:34 by hstarr            #+#    #+#             */
/*   Updated: 2020/11/26 21:39:49 by hstarr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (!count || dest == src)
		return (dest);
	dest_ptr = (unsigned char*)dest;
	src_ptr = (unsigned char*)src;
	while (count-- > 0)
		*(dest_ptr++) = *(src_ptr++);
	return (dest);
}
