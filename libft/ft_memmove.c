/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masbane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:22:09 by masbane           #+#    #+#             */
/*   Updated: 2025/10/24 09:54:12 by masbane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (unsigned char *)dst;
	ptr2 = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			ptr1[i] = ptr2[i];
		}
		return (dst);
	}
	i = 0;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dst);
}
