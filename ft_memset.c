/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:29:27 by mateo             #+#    #+#             */
/*   Updated: 2023/12/22 16:06:10 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*start;

	start = b;
	while (len--)
	{
		*(unsigned char *)b = (unsigned char)c;
		b++;
	}
	return (start);
}
