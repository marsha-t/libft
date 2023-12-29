/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:55:42 by mateo             #+#    #+#             */
/*   Updated: 2023/12/29 11:15:16 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dst_start;

	dst_start = dst;
	if ((!dst) && (!src))
		return (0);
	while (n--)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
	}
	return (dst_start);
}
