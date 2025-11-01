/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:03:27 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/11/01 00:13:04 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	out = malloc((ft_strlen(s2) + ft_strlen(s1) + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (s1[i])
	{
		out[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		out[j++] = s2[i];
		i++;
	}
	out[j] = '\0';
	return (out);
}
