/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:35:52 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/11/02 20:02:21 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[i])
		i++;
	while (j < size && dst[j])
		j++;
	if (j == size)
		return (size + i);
	while (src[k] && k < size - j - 1)
	{
		dst[k + j] = src[k];
		k++;
	}
	dst[k + j] = '\0';
	return (i + j);
}
