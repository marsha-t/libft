/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 23:45:22 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 23:45:22 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	if (n == 0)
		return (0);
	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while ((t1[i] == t2[i]) && (i < n - 1))
		i++;
	return (t1[i] - t2[i]);
}
