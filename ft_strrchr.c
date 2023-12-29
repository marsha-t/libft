/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:18:16 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 22:18:16 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	temp = 0;
	while (*s)
	{
		if (*s == (char)c)
			temp = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)temp);
}
