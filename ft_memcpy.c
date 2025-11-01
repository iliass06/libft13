/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:00:14 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/10/30 18:36:25 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*pt;

	i = 0;
	p = (unsigned char *)dest;
	pt = (unsigned char *)src;
	while (i < n)
	{
		p[i] = pt[i];
		i++;
	}
	return (dest);
}
