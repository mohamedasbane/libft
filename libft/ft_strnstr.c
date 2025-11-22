/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masbane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:01:32 by masbane           #+#    #+#             */
/*   Updated: 2025/10/19 11:01:39 by masbane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *dst, size_t len)
{
	size_t	i;
	size_t	j;

	if (*dst == '\0')
		return ((char *)src);
	i = 0;
	while (i < len && src[i] != '\0')
	{
		j = 0;
		while (i + j < len && src[i + j] == dst[j])
			j++;
		if (dst[j] == '\0')
			return ((char *)(src + i));
		i++;
	}
	return (NULL);
}
