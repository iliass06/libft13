/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:17:22 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/10/30 23:07:24 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*pt;

	p = (unsigned char *)dest;
	pt = (unsigned char *)src;
	while (n > 0)
	{
		p[n - 1] = pt[n - 1];
		n--;
	}
	return (dest);
}
