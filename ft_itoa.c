/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:44:04 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/11/05 10:22:54 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	initialize_count(int n, int count)
{
	if (n <= 0)
		return (count + 1);
	return (count);
}

static int	count_len(int n)
{
	int	count;

	count = initialize_count(n, 0);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		count;
	long	nb;

	nb = (long)n;
	count = count_len(nb);
	result = malloc((count + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[count] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		result[0] = '0';
	while (count > 0)
	{
		if (count == 1 && result[0] == '-')
			break ;
		result[--count] = nb % 10 + '0';
		nb /= 10;
	}
	return (result);
}
