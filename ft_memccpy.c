/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstarr <hstarr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:59:49 by hstarr            #+#    #+#             */
/*   Updated: 2020/11/26 21:30:05 by hstarr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *source, int ch, size_t count)
{
	unsigned char	sym;
	unsigned char	*dest_t;
	unsigned char	*source_t;

	sym = (unsigned char)ch;
	dest_t = (unsigned char *)dest;
	source_t = (unsigned char *)source;
	while (count--)
	{
		*dest_t++ = *source_t++;
		if (*(dest_t - 1) == sym)
			return (dest_t);
	}
	return (NULL);
}
