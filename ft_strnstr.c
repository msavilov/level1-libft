/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstarr <hstarr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:57:36 by hstarr            #+#    #+#             */
/*   Updated: 2020/11/26 22:45:29 by hstarr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*s2)
		return (char*)s1;
	while (s1[i] && i < len)
	{
		if (s1[i] == s2[0])
		{
			j = 1;
			while (s2[j] && s1[i + j] == s2[j] &&
					(i + j) < len)
				++j;
			if (s2[j] == '\0')
				return ((char*)&s1[i]);
		}
		++i;
	}
	return (NULL);
}
