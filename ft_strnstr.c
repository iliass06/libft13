/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 23:28:40 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/10/29 18:54:15 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(&big[i]));
		i++;
	}
	return (NULL);
}
