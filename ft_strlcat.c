/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:54:00 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 17:54:00 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	dest_l;
	size_t	src_l;
	size_t	total;

	if ((dstsize == 0) && (!dst || !src))
		return (0);
	dest_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	total = src_l + dest_l;
	if (dest_l > dstsize)
		return (src_l + dstsize);
	i = 0;
	while ((src[i] != '\0') && ((dest_l + 1) < dstsize))
	{
		dst[dest_l] = src[i];
		i++;
		dest_l++;
	}
	dst[dest_l] = '\0';
	return (total);
}
