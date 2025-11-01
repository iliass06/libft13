/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:53:37 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/10/29 18:55:20 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)s;
	len = 0;
	while (ptr[len])
		len++;
	while (len >= 0)
	{
		if (ptr[len] == c)
			return (&ptr[len]);
		len--;
	}
	return (NULL);
}
