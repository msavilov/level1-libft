/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstarr <hstarr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:37:27 by hstarr            #+#    #+#             */
/*   Updated: 2020/11/26 22:18:12 by hstarr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*new_str;
	char	*p;

	len = ft_strlen(str);
	new_str = (char*)malloc(sizeof(char) * len + 1);
	p = new_str;
	if (!new_str)
		return (NULL);
	while (*str)
	{
		*new_str = *str;
		new_str++;
		str++;
	}
	*new_str = *str;
	return (p);
}
