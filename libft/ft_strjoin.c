/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masbane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:55:07 by masbane           #+#    #+#             */
/*   Updated: 2025/10/19 10:55:14 by masbane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*copy;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	copy = malloc(i + j + 1);
	if (!copy)
		return (NULL);
	i = -1;
	while (s1[++i])
		copy[i] = s1[i];
	j = -1;
	while (s2[++j])
		copy[i + j] = s2[j];
	copy[i + j] = '\0';
	return (copy);
}
