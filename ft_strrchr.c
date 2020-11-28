/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstarr <hstarr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:00:08 by hstarr            #+#    #+#             */
/*   Updated: 2020/11/26 22:48:50 by hstarr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int ch)
{
	char *ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == ch)
			ptr = (char*)str;
		str++;
	}
	if (ptr)
		return (ptr);
	if (ch == '\0')
		return ((char*)str);
	return (0);
}
