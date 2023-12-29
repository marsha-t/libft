/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:42:17 by mateo             #+#    #+#             */
/*   Updated: 2023/12/21 09:42:17 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_i_count(int x)
{
	int	count;

	count = 0;
	if (x < 1)
		count++;
	while (x)
	{
		count++;
		x /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int			count;
	long long	x;

	x = n;
	count = ft_i_count(x);
	ptr = (char *)malloc(sizeof(char) * (count + 1));
	if (!ptr)
		return (0);
	ptr[count] = '\0';
	if (x < 0)
		x = -x;
	while (count--)
	{
		ptr[count] = (x % 10) + '0';
		x = x / 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
